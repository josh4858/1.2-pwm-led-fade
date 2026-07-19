# Sunrise Desk-Lamp Dimmer — Requirements Specification

_Ladder project 1.2 (Level 1, difficulty 2/5). Generated from the ladder — fill in the blanks._

<!-- SECTION:requirements-overview:START -->
## Overview

A wake-up lamp that glows smoothly from dark to full brightness is really a digital pin switching on and off thousands of times a second. Discovering that a pin which can only be HIGH or LOW still produces a smooth fade — via PWM — is the first time hardware behaviour diverges from your mental model, a crucial 'aha'.
<!-- SECTION:requirements-overview:END -->

<!-- SECTION:reading-list:START -->
## Reading before you start

Practical Electronics for Inventors, 4th ed.:

- Ch.5 §5.3 — Light-Emitting Diodes
- Ch.13 — Pulse-Width Modulation
<!-- SECTION:reading-list:END -->

<!-- SECTION:learning-objectives:START -->
## Learning objectives

- Operators
- Fixed-width & integer types
- Control flow
- RTOS timing & ISR-safe APIs
<!-- SECTION:learning-objectives:END -->

<!-- SECTION:requirements:START -->
## Requirements

| ID | Category <abbr title="Functional = a behavior the device must perform. Safety = a limit that prevents harm to people, parts, or the board. Performance = a speed/accuracy/timing target. Interface = how it connects to something else. Environmental = operating conditions (temp, moisture). Constraint = an imposed limit (cost, size, part availability). Example: 'LED shall be bright' is Functional; 'LED reverse voltage shall never exceed its max rating' is Safety even though it doesn't sound alarming — anything protecting a part or person from damage is Safety, not Functional.">ℹ️</abbr> | Requirement (shall statement) <abbr title="Write it as 'The device shall ...'. One testable behavior per row — if you can't picture a pass/fail test for it, rewrite it. Don't name a specific component value here (e.g. '...using a 220 ohm resistor') — that's a design decision, not a need, and it belongs in design-calculations.md once you've actually calculated it. Good: 'The Yellow LED shall be clearly brighter than the Red LED.' Bad: 'The Yellow LED shall use a 220 ohm resistor.'">ℹ️</abbr> | Verification method <abbr title="How you'll prove it: Demonstration (watch it work), Test (measure with a tool), Inspection (visual check), or Analysis (calculation). Example: comparing two LEDs' relative brightness by eye is Inspection, not Test — Test means measuring with an instrument (multimeter, logic analyzer, lux meter), not just looking at it.">ℹ️</abbr> | Status <abbr title="Draft = not yet verified. Verified = passed its test in test-results.md.">ℹ️</abbr> |
| --- | --- | --- | --- | --- |
| REQ-001 | Functional | The device shall configure an LEDC PWM channel. | Demonstration | Draft |
| REQ-002 | Functional | The device shall sweep duty cycle to fade an LED smoothly. | Test | Draft |
| REQ-003 | Functional | The device shall understand duty cycle vs. frequency vs. resolution. | Test | Draft |
| REQ-004 | Performance | Current draw shall not exceed ___ mA under normal operation. | Analysis | Draft |
<!-- SECTION:requirements:END -->

## Acceptance criteria

> The lamp glows smoothly from off to full brightness and back down with no visible flicker or stepping.
