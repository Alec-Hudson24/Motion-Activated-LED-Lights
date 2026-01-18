# Motion-Activated-Closet-Light
**Motion-triggered LED lighting system for a closet using PIR sensor, MOSFET-driven LEDs, and custom 3D-printed wall mount**  
*(Personal DIY project: Electrical installation, Arduino programming, 3D design and printing)*

## Goal / Overview
- **Primary Features**:
  - Automatic activation: PIR motion sensor detects movement and turns on the LED instantly for hands-free closet lighting.
  - High-current LED control: MOSFET circuit allows the Arduino Uno Rev 3 to safely drive bright LED strip.
  - Integrated power: Added a dedicated wall outlet for clean, reliable powering of the system.
  - Wall-mounted enclosure: Custom 3D-printed holder secures the Arduino, PIR sensor, MOSFET, and wiring neatly on the closet wall.
- **Motivation**: Eliminate fumbling for light switches in a dark closet — provide convenient, automatic illumination that saves energy and improves usability.
- **Outcome**: Fully working prototype with reliable motion detection, bright LED output on entry, timed shut-off (adjustable in code), and a tidy, professional-looking wall installation.

## Programs and skills required
- **3D Modeling & Design**: SolidWorks (parametric design of wall holder, STL export for 3D printing)
- **Electronics**: Wall outlet installation (wiring and safety basics), MOSFET integration for LED control, Soldering to protoboard, PIR sensor wiring to Arduino Uno Rev 3
- **Programming**: Arduino IDE (reading PIR digital output, implementing delay/timer logic for LED on/off, basic debouncing if needed)
- **Other**: 3D printing (slicing and printing the enclosure), hardware assembly, testing in real environment, electrical safety practices

## Key Takeaways and lessons
- Always use a MOSFET (or logic-level MOSFET) when controlling higher-current LEDs from Arduino pins — direct connection risks burning out the microcontroller.
- PIR sensor placement and sensitivity tuning are critical: avoid false or accidental triggers, but ensure reliable detection inside the closet.
- Wall outlet addition requires careful planning for code compliance and safety — better to over-engineer than risk hazards. (SAFETY IS KEY)
- 3D printing enables fast custom enclosures — prototype early, iterate on fit/cable routing, and test mounting strength.

## Project Links  
- Arduino Code: [Code](https://github.com/Alec-Hudson24/Motion-Activated-LED-Lights/blob/main/LEDStrip_MotionController.ino)
- 3D Printable Holder (STEP): [STEP File](https://github.com/Alec-Hudson24/Motion-Activated-LED-Lights/blob/main/Protoboard%20and%20Arduino%20Holder.STEP)
- 3D Printable Lid (STEP): [STEP File](https://github.com/Alec-Hudson24/Motion-Activated-LED-Lights/blob/main/Lid%20For%20Holder.STEP)

## Future Improvements / Ideas
- Add adjustable timeout via potentiometer or app (e.g., via Bluetooth module & chaning microcontroller to a ESP32)
- Include light-level sensor (LDR) to prevent activation during daytime / well-lit conditions
- Upgrade to addressable LEDs (WS2812B) for color effects 
- Make enclosure more compact or add battery backup for power outages

# Project Photos
![Closet Lights](https://github.com/Alec-Hudson24/Motion-Activated-LED-Lights/blob/main/Lights%20On.jpeg)
![Closet Dark](https://github.com/Alec-Hudson24/Motion-Activated-LED-Lights/blob/main/Lights%20Off.jpeg)
![Circuit Diagram](https://github.com/Alec-Hudson24/Motion-Activated-LED-Lights/blob/main/arduino%20Circuit%20Diagram.PNG)
![Wiring Setup](https://github.com/Alec-Hudson24/Motion-Activated-LED-Lights/blob/main/Wiring%20Setup.jpg)

*This was a personal DIY home improvement project*
