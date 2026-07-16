#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "driver/ledc.h"


#define LEDC_TIMER LEDC_TIMER_0
#define LEDC_MODE LEDC_LOW_SPEED_MODE
#define LEDC_CHANNEL LEDC_CHANNEL_0
#define LEDC_DUTY_RES LEDC_TIMER_8_BIT // 8 bit -> duty range 0-255
#define LEDC_FREQUENCY 1000 // 1KHZ, no visible flicker

#define BLINK_GPIO GPIO_NUM_23

void app_main(void)
{

    ledc_timer_config_t ledc_timer = {
        .speed_mode = LEDC_MODE,
        .timer_num = LEDC_TIMER,
        .duty_resolution = LEDC_DUTY_RES,
        .freq_hz = LEDC_FREQUENCY,
        .clk_cfg = LEDC_AUTO_CLK
    };
    ledc_timer_config(&ledc_timer);

    ledc_channel_config_t ledc_channel = {
        .speed_mode = LEDC_MODE,
        .channel = LEDC_CHANNEL,
        .timer_sel = LEDC_TIMER,
        .gpio_num = BLINK_GPIO,
        .duty = 0,
        .hpoint = 0
    };

    ledc_channel_config(&ledc_channel);
    uint8_t duty = 0;
    int8_t direction = 1;
    ledc_set_duty(ledc_timer.speed_mode, ledc_channel.channel, duty);

    while (1) {
        duty += direction;
        ledc_set_duty(ledc_timer.speed_mode, ledc_channel.channel, duty);
        ledc_update_duty(ledc_timer.speed_mode,ledc_channel.channel);

        if(duty == 255) {
            direction = -1;
        }
        if(duty == 0) {
            direction = 1;
        }
        vTaskDelay(pdMS_TO_TICKS(20));
    }
}
