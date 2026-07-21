# Design Calculations (Stage 3)

<!-- SECTION:design-calculations:START -->
| Circuit block <abbr title="The part of the circuit this row covers, e.g. 'Yellow LED branch' or 'Power & pin budget'.">ℹ️</abbr> | Calculation <abbr title="Show the actual math (e.g. Ohm's Law), not just the result — this is what makes the value defensible later. Example: LED current = (Vsupply − Vf) / R = (3.3 − 2.0) / 220 = 5.9mA. Note the LED's forward voltage (Vf) is subtracted first — an LED isn't a resistor, it holds a roughly constant voltage drop, so only the leftover voltage appears across the resistor.">ℹ️</abbr> | Chosen value <abbr title="The real-world component value you picked, from your calculation (e.g. 220 ohm resistor).">ℹ️</abbr> | Margin <abbr title="How far below the part's max rating you're running it — more margin means more tolerance for component variation and measurement error.">ℹ️</abbr> |
| --- | --- | --- | --- |
| Resistor Value | Ohms Law: R = V / I <br>R = (3.3 - fV) / fC<br>R = 1.1 / 0.011<br>R = 100<br> | 100 ohms resistor |  |
| LED  | LED current : Ohms Law I = V / R = 1.1 / 100 = 10mA | 10mA | 10mA |
<!-- SECTION:design-calculations:END -->
