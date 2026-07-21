# 1-2-pwm-led-fade

Sunrise desk-lamp dimmer: an ESP32 fades an LED smoothly from off to full brightness and back over a continuous 3-second cycle, using PWM (LEDC) with no visible flicker or stepping.

## Evidence

![Prototype](docs/evidence/prototype-verification/PWM_LED.jpg)

[Fade demo video](docs/evidence/prototype-verification/PWM_LED.mp4) · [Schematic (PDF)](docs/evidence/schematic-capture/esp32_pwm_led_v1.pdf)

## Status

- [x] Requirements defined
- [x] Components selected & BOM complete
- [x] Design calculations complete
- [x] Schematic captured (KiCad)
- [x] Prototype built & verified
- [ ] PCB ordered
- [ ] Assembled & bring-up tested

## Documentation

| Doc | Summary |
| --- | --- |
| [Requirements](docs/requirements.md) | 3 functional shall-statements: flicker-free PWM drive, continuous (non-stepped) brightness transition, full off→on→off cycle in 3s. |
| [Bill of Materials](docs/bom.md) | Yellow 5mm LED, 100Ω current-limiting resistor, ESP32 DevKitC, jumper wires, breadboard. |
| [Design calculations](docs/design-calculations.md) | Resistor sized via Ohm's law (R ≈ 100Ω) for ~11mA LED current, under the LED's 20mA max rating. |
| [Schematic (KiCad)](hardware/README.md) | KiCad capture of the breadboard circuit — schematic PDF and `.kicad_sch` attached as evidence. |
| [Test results](docs/test-results.md) | Stage 4 prototype verification — all 3 requirements PASS (demonstration/test against the built circuit). |
| [Traceability matrix](docs/traceability.md) | Auto-generated requirement ↔ test mapping (do not hand-edit — regenerated from Stage 1/5/7 data). |
| [Bring-up](docs/bring-up.md) | Stage 7 assembly & first-power checklist — not started (no PCB yet). |

## Repo layout

```
CMakeLists.txt   ESP-IDF project root — open THIS folder to build/flash
main/            firmware source (app_main lives here)
sdkconfig.defaults
docs/            requirements, BOM, design calculations, test results, evidence
hardware/        KiCad schematic + PCB layout
```

## Lessons learned

<!-- Fill in as you go: what surprised you, what you'd do differently. -->
