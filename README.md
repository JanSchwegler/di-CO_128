# Crafting interactive narratives for art &amp; design <!-- omit from toc -->

- [1. Touchdesigner Basics](#1-touchdesigner-basics)
  - [1.1. Operator Families](#11-operator-families)
  - [1.2. Specific Nodes](#12-specific-nodes)
  - [1.3. Feedback Basic Setup](#13-feedback-basic-setup)
  - [1.4. Noise Pointcloud Bacis Setup](#14-noise-pointcloud-bacis-setup)
- [2. MCU - Micro Controller Unit](#2-mcu---micro-controller-unit)
  - [2.1. Possible Sensors](#21-possible-sensors)
  - [2.2. Gyroscope (GY-87)](#22-gyroscope-gy-87)
- [3. Inspiration \& Art Projects](#3-inspiration--art-projects)
  - [3.1. Iconic Interactive Art Projects](#31-iconic-interactive-art-projects)
    - [3.1.1. GENMA (Genetic Manipulator)](#311-genma-genetic-manipulator)
  - [3.2. Films](#32-films)
    - [3.2.1. All that is solid](#321-all-that-is-solid)
    - [3.2.2. The Mess](#322-the-mess)
    - [3.2.3. Hardly Working](#323-hardly-working)
    - [3.2.4. Writing for 5 min](#324-writing-for-5-min)
  - [3.3. Inspiration «Possible Futures?»](#33-inspiration-possible-futures)
    - [3.3.1. Marie-Eve Levasseur, Swiping compressed filtered love (et enfin, permettre l’incontrôlable), 2019, 12 min](#331-marie-eve-levasseur-swiping-compressed-filtered-love-et-enfin-permettre-lincontrôlable-2019-12-min)
      - [3.3.1.1. In what form is the future presented in the example?](#3311-in-what-form-is-the-future-presented-in-the-example)
      - [3.3.1.2. What story is being told, and who is telling it?](#3312-what-story-is-being-told-and-who-is-telling-it)
      - [3.3.1.3. How is the story told? (Medium, mood, other aspects?)](#3313-how-is-the-story-told-medium-mood-other-aspects)
      - [3.3.1.4. What present leads to the depicted future?](#3314-what-present-leads-to-the-depicted-future)
      - [3.3.1.5. What does the artist aim to make visible?](#3315-what-does-the-artist-aim-to-make-visible)
- [4. Group Project](#4-group-project)
  - [4.1. Concept](#41-concept)
    - [4.1.1. Exhaustion](#411-exhaustion)
    - [4.1.2. Early Ideas](#412-early-ideas)
    - [4.1.3. Concept \& Story](#413-concept--story)
  - [4.2. Prototyping](#42-prototyping)
    - [4.2.1. Inspiration / Idea](#421-inspiration--idea)
    - [4.2.2. Research](#422-research)
    - [4.2.3. First Touch Detection](#423-first-touch-detection)
    - [4.2.4. Materials \& Interaction](#424-materials--interaction)
      - [4.2.4.1. Crystals](#4241-crystals)
    - [4.2.5. Multi Touch Sensor](#425-multi-touch-sensor)
    - [4.2.6. TouchDesinger](#426-touchdesinger)
      - [4.2.6.1. Voronoi](#4261-voronoi)
      - [4.2.6.2. Ice](#4262-ice)
    - [4.2.7. Installation](#427-installation)
    - [4.2.8. Beamer Setup](#428-beamer-setup)
  - [4.3. Production](#43-production)
    - [4.3.1. Wooden Branch](#431-wooden-branch)
    - [4.3.2. Hardware](#432-hardware)
    - [4.3.3. Visuals](#433-visuals)
    - [4.3.4. Interaction](#434-interaction)
      - [4.3.4.1. Visual Effect](#4341-visual-effect)
      - [4.3.4.2. Touch Indicator](#4342-touch-indicator)
    - [4.3.5. Text description](#435-text-description)
    - [4.3.6. Final Setup](#436-final-setup)
  - [4.4. Presentation](#44-presentation)
  - [4.5. Reflection](#45-reflection)


# 1. Touchdesigner Basics
[Official Lerning Page](https://learn.derivative.ca/courses/100-fundamentals/)

[Touchdesigner Wiki](https://docs.derivative.ca/)

## 1.1. Operator Families
- [Components (COMPs)](https://docs.derivative.ca/Component)
- [Texture Operators (TOPs)](https://docs.derivative.ca/TOP)
- [Channel Operators (CHOPs)](https://docs.derivative.ca/CHOP)
- [Surface Operators (SOPs)](https://docs.derivative.ca/SOP)
- [Materials (MATs)](https://docs.derivative.ca/MAT)
- [Data Operators (DATs)](https://docs.derivative.ca/DAT)

![Operator Dialogue](https://docs.derivative.ca/images/f/f2/Opcreate_CHOP.jpg)

&copy; [https://docs.derivative.ca/OP_Create_Dialog](https://docs.derivative.ca/OP_Create_Dialog)

## 1.2. Specific Nodes
- Traill: Visualize nubers over time
- Filter: Smooth out change of values
- Lag: Smooth uneven, ease in
- Spring: spring on value changes
- Fan: Snap to defined number of values

## 1.3. Feedback Basic Setup

## 1.4. Noise Pointcloud Bacis Setup

# 2. MCU - Micro Controller Unit

## 2.1. Possible Sensors

| Sensor Type                   | Short Explanation         |
| ----------------------------- | ------------------------- |
| Temperature Sensor            | Measures heat/cold        |
| Pressure Sensor               | Detects force/pressure    |
| Proximity Sensor              | Senses nearby objects     |
| Accelerometer                 | Measures acceleration     |
| Gyroscope                     | Detects rotation          |
| IR (Infrared) Sensor          | Senses infrared light     |
| Light/Optical Sensor          | Measures light intensity  |
| Ultrasonic Sensor             | Uses sound for distance   |
| Flow Sensor                   | Measures fluid movement   |
| Level Sensor                  | Detects fluid level       |
| Smoke/Gas Sensor              | Detects gases/smoke       |
| Microphone (Sound Sensor)     | Captures sound            |
| Touch Sensor                  | Detects physical touch    |
| Color Sensor                  | Identifies color          |
| Humidity Sensor               | Measures air moisture     |
| Magnetic (Hall Effect) Sensor | Detects magnetic fields   |
| Position Sensor               | Tracks object position    |
| Tilt Sensor                   | Detects angle/tilt        |
| PIR Sensor                    | Detects body motion       |
| Strain/Weight Sensor          | Measures load/strain      |
| Piezoelectric Sensor          | Senses vibrations         |
| Camera Sensor                 | Captures images           |
| Vibration Sensor              | Detects vibrations        |
| Lidar Sensor                  | Measures distance (laser) |
| Barometric Sensor             | Measures air pressure     |
| Angle Sensor                  | Measures angle            |
| Capacitive Sensor             | Detects capacitance       |
| Inductive Sensor              | Senses metal objects      |
| Chemical Sensor               | Detects chemicals         |
| Environmental Sensor          | Monitors environment      |

## 2.2. Gyroscope (GY-87)
[Running the gyroscope on an Arduino Uno](https://electropeak.com/learn/interfacing-gy-87-10dof-imu-mpu6050-hmc5883l-bmp085-module-with-arduino/)

The provided code writes the sensor information in the "Serial Output". This can be read in Touchdesigner: 
- Connect your Arduino to your computer via USB.
- In TouchDesigner, add a Serial DAT node.
 Set the Port in Serial DAT to match your Arduino’s COM port (find it in Arduino IDE under Tools > Port).
- Set the Baud Rate in Serial DAT to match your Arduino code (e.g., 9600).
- The Serial DAT will now display the data sent from Arduino’s Serial.print() or Serial.println() commands in real time

**The Arduino can only be connected to one Software! So the Arduino can't keep the connection with the Arduino IDE**

# 3. Inspiration & Art Projects

## 3.1. Iconic Interactive Art Projects

[List with all Projects](https://gu-ma.github.io/co_128_f2501/notes/week02_day03.html)

### 3.1.1. GENMA (Genetic Manipulator)
- Artists: Christa Sommerer and Laurent Mignonneau
- Overview: An interactive installation where visitors can create and influence virtual creatures by sending messages.
- Website: [https://interface.ufg.ac.at/christa-laurent/GENMA.html](https://interface.ufg.ac.at/christa-laurent/GENMA.html)

![GENMA Box](img/genma/01_box.png)
![GENMA Box Inside](img/genma/02_box.png)
![GENMA Box Tablet](img/genma/03_screen.png)

&copy; [(https://interface.ufg.ac.at/christa-laurent/GENMA.html](https://interface.ufg.ac.at/christa-laurent/GENMA.html)


![Holographic Visualization](img/genma/04_projection.jpg)

## 3.2. Films

### 3.2.1. All that is solid
- Gold in Ghana

### 3.2.2. The Mess
- Noise
- Futuristic story told in the past

### 3.2.3. Hardly Working
- npc's in Red dead redemtion 2

### 3.2.4. Writing for 5 min
Erschöpfng ist keine energie mehr zu habne. keine Motivation. Viel Arbeit, keine Abwechsung. Ich bin erschöpft wenn ich keine Pausen habe. Wenn ich oft das gleiche mache ohne etwas daran zu ändern. Abwechslung ist wichtig um nicht erschöpft zu werden. bei allen Tätigkeiten werde ich erschöpft. es ist eine Balance zwischen erschöpfung und energie / recharge. es ist wichtig sich stetig zu erholen. machmal habe ich diese balance mehr im griff als zu anderen zeiten. Ich sollte mehr au diese banance achten. Es gibt viele Spakte welche mich erschöpfen lassen. meine eigene Energie oder sozial. Diese verschiedenen Energien im blick zu halten ist ebenfalls erschöpfend. Die Erholung ist dabei wichtig. Beim Arbeiten ist der Flow state für mich wichtig um nicht erschöpft zu werden. Der eigene Antrieb. intridische motivation. Externer zwang bringt mich aus dem gleichgewicht. ich bin nicht motiviert. das erschöpft mich. ich brache danach viel Zeit um micht wieder zu erholen.

## 3.3. Inspiration «Possible Futures?»

Questions:
- In what form is the future presented in the example?
- What story is being told, and who is telling it?
- How is the story told? (Medium, mood, other aspects?)
- What present leads to the depicted future?
- What does the artist aim to make visible?

Artwork List:

- **Hito Steyerl, This is the Future, 2019, 3-4 min.**
This Is the Future is a multimedia installation that blends video, sound, and artificial intelligence to explore themes of prediction, control, and the politics of technology. Set in a lush, digitally rendered garden, the work centers on a narrative about a woman whose future is continuously predicted by an AI system—yet the system keeps getting it wrong. [https://www.youtube.com/watch?v=WyIWLvyzcH4](https://www.youtube.com/watch?v=WyIWLvyzcH4) / 
[https://www.youtube.com/watch?v=1v08U5-BKnE](https://www.youtube.com/watch?v=1v08U5-BKnE)
 
- **John Akomfrah, The Last Angel of History, 1996, 45 min.**
The Last Angel of History (1996) is a groundbreaking experimental documentary directed by John Akomfrah and produced by the Black Audio Film Collective. Blending science fiction, archival footage, interviews, and Afrofuturist aesthetics, the film explores the intersections of Black identity, diaspora, technology, and cultural memory.It follows a fictional "Data Thief" who travels through time and space to uncover hidden histories of Black culture and its relationship to the future. Featuring figures like George Clinton, Sun Ra, and Kodwo Eshun, the film situates Black experience within a cosmic framework, redefining narratives of science, technology, and progress through an Afrofuturist lens. 
[https://www.youtube.com/watch?v=gcbSUwPjass](https://www.youtube.com/watch?v=gcbSUwPjass)
 
- **Black Code/Code Noir, Louis Henderson, 2015, 20 min.**
Black Code/Code Noir unites temporally and geographically disparate elements into a critical reflection on two recent events: the murder of Michael Brown and that of Kajieme Powell by American police officers in 2014. Archaeologically, the film argues that behind this current situation is a sedimented history of slavery, preserved by the Black Code laws of the colonies in the early Americas. These codes have transformed into the algorithms that configure police Big Data and the necropolitical control of African-Americans today. Yet, how can we read this in the present? How can we unwrite the sorcery of this code as a hack? Through a historical détournement, the film suggests the Haitian Revolution as the first instance of a hacking of the Black Code and, perhaps, a symbol for future hope. 
[https://www.dropbox.com/scl/fi/nidiur49siwf30msl27zf/11_henderson_black-code.mov?rlkey=ygm4ltt4n3da3we14lmelszej&st=1kvc033s&dl=0](https://www.dropbox.com/scl/fi/nidiur49siwf30msl27zf/11_henderson_black-code.mov?rlkey=ygm4ltt4n3da3we14lmelszej&st=1kvc033s&dl=0)

- **Marie-Eve Levasseur, Swiping compressed filtered love (et enfin, permettre l’incontrôlable), 2019, 12 min.**
This work imagines a future where online seduction can be optimized by slow-tech devices that simulate hormonal emissions. The chemical messages that our bodies send to each other could be perceived by another from a distance, adding an uncontrolled dimension to the filtered flirtation. The work reflects on online dating mechanisms like dependency, consumerism, objectification and reduction of the body to calculable parameters, as well as our need for intimacy. [https://exhibition.fabulationforfuture.net/swiping-compressed-filtered-love-et-enfin-permettre-lincontrolable-2/ ](https://exhibition.fabulationforfuture.net/swiping-compressed-filtered-love-et-enfin-permettre-lincontrolable-2/)
 
- **Emeka Ogboh, The Way earthly things are going, 2017, 9 min.**
Ogboh explores how private, public, and collective memories and historiographies are translated, transformed, transcribed, and engraved in sound and sonority. Such is the case when he rummages through the archives for documents about financial crises from 1929 to the present day. In The Way Earthy Things Are Going (2017), Ogboh, in dialogue with a traditional polyphonic choir, deliberates sonically on the multiple effects and manifestations of states of crisis. The enchanting sound installation addresses the (im-)possibility of existing in a cul-de-sac; it tells of wanderlust and yearning, of pain and a survival urge, and it features comments on and impressions of an economic crisis that has plagued and is still ravaging. In interviews with Africans in Germany, Ogboh tickled the taste buds to map a landscape of sonority. By collating their gustatory experiences, he created a recipe from which the dark Sufferhead original (2016) is brewed. The name is taken from Fela Kuti’s political hymn, which Ogboh uses to catalyze discourse on the politics of race, concepts of nation, and migration. 
[https://www.youtube.com/watch?v=rWIjPsS0oq4](https://www.youtube.com/watch?v=rWIjPsS0oq4)
 
- **Wu Tsang, Of Whales, 2022, 11 min.**
Of Whales, an immersive real-time video installation that offers a poetic meditation on the whale’s perspective, through a deep dive into an oceanic cosmos that is alluded to in Herman Melville’s tale. First presented at the 59th Venice Biennale in 2022, the work was created on the Unity gaming platform as a dynamically generated real-time video and sound installation, which envelops visitors in an oceanscape-cosmos for respite, contemplation, and provocation. 
Of Whales refocuses the source material’s profound meditation on knowledge, exoticism, and eroticism through a postcolonial lens, imagined from the perspective of the whale. The immensity of the ocean becomes a symbol of the unknown; reflections gesture to the presence of oblique perspectives and complexify the idea that any point of view is singular or straightforward. 
[https://www.youtube.com/watch?v=pCmbQMpnDDU](https://www.youtube.com/watch?v=pCmbQMpnDDU)

### 3.3.1. Marie-Eve Levasseur, Swiping compressed filtered love (et enfin, permettre l’incontrôlable), 2019, 12 min

#### 3.3.1.1. In what form is the future presented in the example?

The future is presented in a speculative and poetic form. It's not a technical or utopian future, but rather an artistic and **critical projection of current trends** in online dating and technology. This imagined future involves "slow-tech" devices that allow **hormonal emissions to be transmitted and perceived over distance-creating a hybrid between biological intimacy and digital interaction**.

-> Software and Device

#### 3.3.1.2. What story is being told, and who is telling it?

The story reflects an imagined evolution of dating technologies, where human pheromones and emotional signals are digitally translated and transmitted. It critiques how dating has become algorithmic, filtered, and consumer-like. 

The narrator (possibly a voice-over or digital persona) presents the story from a reflective and somewhat speculative point of view—offering observations rather than a linear narrative. The storyteller could be interpreted as a future entity or consciousness looking back at present-day behavior.

#### 3.3.1.3. How is the story told? (Medium, mood, other aspects?)

- Medium: Video art (12 minutes), combining visual collage, digital aesthetics, voice-over narration, and possibly synthetic imagery or simulations of tech devices.
- Mood: Reflective, critical, and slightly melancholic. There is a sense of irony and emotional distance, yet also curiosity and vulnerability.
- Other aspects: The video blends technological concepts with bodily and emotional metaphors. It creates a sensory and conceptual experience that critiques present-day dating culture by amplifying it into a strange, speculative direction.

-> Video -> office, physical device, phone, screenrecording

#### 3.3.1.4. What present leads to the depicted future?

The present depicted is dominated by:
- Swipe-based dating apps (like Tinder) and the gamification of romantic connection.
- The commodification of intimacy, where people become profiles and data points.
- Increasing emotional distance despite technological connectivity.
- A desire to "optimize" or control love and desire.
This hyper-technologized and emotionally filtered present gives rise to the imagined future where hormonal signals are transmitted digitally to reintroduce uncontrollable, emotional complexity into digital interactions.

#### 3.3.1.5. What does the artist aim to make visible?

Marie-Eve Levasseur wants to make visible:

- The mechanisms of online dating (dependency, consumerism, objectification).
- The loss of organic, unfiltered bodily communication in digital relationships.
- The paradox of trying to control intimacy while yearning for unpredictability.
- The potential alienation of the body, reduced to quantifiable data in virtual spaces.

Ultimately, she encourages reflection on what is lost and what might be reimagined if we allowed the uncontrollable, emotional, and bodily dimensions of love back into our digital lives.

# 4. Group Project

## 4.1. Concept

### 4.1.1. Exhaustion

In the whole class we thought about exhaustion as a topic, it's content and what we are interested in. Based on the interest of recovery, sleep and rest, Lucas, Cat, Nika and me met in a group.

### 4.1.2. Early Ideas

In the goup of four we individually thought about diffrent ideas and aspects. We knew we have to split up, so we came together and talked more about our intrests. Then, 2 Groups formd: Lucas and Cat / Nika and me. While Lucas and Cat were more intrested in the state of lying down and rest / sleep, Nika and I thought more about working together and caring for an entitiy, maybe also some part of play.

Later we worked out our concept around the narrative of working together to resist the exhaustion. We named that as a working clame "Together resisting exhaustion". We wanted an installation to bring strangers together to work for a given goal. At the visit it should be clear that one person can't achieve the goal alone or it's really hard. So the people should realise to ask for help and come together. 

We worked out a concept where we have a plant as the main entity the whole interaction was set up around. We liked the idea of having people as energy and detect peoples energy and bring them to the entity. People would touch a plant and as the people count goes up the plant starts living up.

Later Joya joind our group and was intereted in doing a physical interaction. So we rethought our interactionpoint. With that we also adapted our concept and visualization while keeping the main narrative of bringing people together and achieve a heigher goal in a groupe than alone.

### 4.1.3. Concept & Story

TBD
Several conductive threads/ropes hang in width and length on a tree branch. These interact with the visual when touched. While it needs several people to touch it so the visual fully blooms up, there are in-between states as well to symbolise that something happens.

Visual:
Starting with ice. The more people touch the threads, the more the visual starts to "crack" and bubble and warm up. If all of the threads are touched, the visual is at it's peak.

## 4.2. Prototyping

### 4.2.1. Inspiration / Idea
Lucas mentioned once that you could mesure the static electricity a human has. This inspired me to search for a solution with a one wire touch detection. I imagined this a bit like a 3 pin sensor. Two whires make the connection and the third controls the electricity amount. So when you touch it, it works like a [Potentiometer](https://www.google.com/search?q=Potentiometer). Joya and Thomas mentioned, it would be easy to have two whires that detect a connection. That would be an okay fix but it doesn't fit the purpose as much as a single whire. 

I imagine to connect like 50 whires to this single one, so all of them detect touch and the amount of touch summes up. This would represent our idea of multiple people working together suitably.

### 4.2.2. Research
Before I tried to find the right words to google my idea, I explained my vision to [Perplexity](https://www.perplexity.ai/) and asked for ideas and keywords to google. Additional to that, Perplexity gave me 2 diffrent approaches. After some chatting and researching the functionality, I went for a try on perplexity's idea.

[Chat with Perplexity](https://www.perplexity.ai/search/i-have-an-arduino-uno-i-want-t-TmeZzg8hTVuNVF7Y_H6DYw#0)

### 4.2.3. First Touch Detection
For the whiring I looked up some references.

``` md
[Arduino Uno]
|                      |
D4 (Send) ----- R1MΩ ----- D2 (Receive)  
                       |  
                       └──[Touch Wire]
```
![Reffrence](img/arduino_touch_whireing_01.png)

I got the Arduino and whired it as shown in the reference. The only problem: I had only one resistor and I couldn't read the colorcode on it. 

After whiring I copied the code in a new Arduino sketch and loaded it to the Arduino. The [included library for the capacitive sensor i downloaded from github](https://github.com/PaulStoffregen/CapacitiveSensor).

``` C++
#include <CapacitiveSensor.h>

// Create a capacitive sensor object with send pin 4 and receive pin 2
CapacitiveSensor cs_4_2 = CapacitiveSensor(4, 2);

void setup() {
  Serial.begin(9600); // Start serial communication for output
  cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF); // Disable auto-calibration for stable readings
}

void loop() {
  long sensorValue = cs_4_2.capacitiveSensor(30); // Take 30 samples for stability
  Serial.println(sensorValue); // Print the sensor value to the Serial Monitor
  //Serial.println("test");
  delay(1000); // Small delay to make output readable
}
```

![Reffrence](img/arduino_touch_01.png)

![Whireing](img/arduino_touch_02.jpg)

At first, I just got the values "0". Perplexity told me, that probably my resistor is too low, the heigher the better. Of course it could have other problems because it was an ai-setup and code but I know the resistor has a very heigh chance to not be suitable. To increase the static electricity, I tried touching the metal part of the table. Surprisingly it worked! I wasn't expecting this to work but now I know the setups generally works and then I played around with diffrent resistors. I found one that gave me height values when touching. An online calculator said, it's probably 2.5MΩ.

<video controls width="600">
  <source src="img/arduino_touch_03.mp4" type="video/mp4">
</video>

### 4.2.4. Materials & Interaction
The next step was testing the setup with diffrent threds and fabric.

![Diffrenct Conductive Threds](img/arduino_threds_01.jpg)
![Conductive Fabric](img/arduino_fabric_01.jpg)

You probably can't see but here we hung some diffrent threds and whires and connected them all together wo the arduino. 

![Threds_02](img/arduino_threds_02.jpg)

No matter what and how many you touch, it's ready the amount of electricity touching the whires. It was hard so setup for every single thread to have a stable connection. So sometime we got stable and reliable results and other times we didn't.

#### 4.2.4.1. Crystals

As we thougth about water and ice, transparent crystals came up as visualisation of ice. So we tried growing crystals on a wooden branch.

![Crystals](img/crystal_01.jpg)

This worked well. Due to the ratio to be a bit off, the crystels grew to big. We would rather have smaller crystals.

Later we also tought about the interaction-point needs to be inviting to touch. Crystals look nice and people might like to give it a little touch but not a firm grip. That's not beneficial for our installation.

### 4.2.5. Multi Touch Sensor
There was a diffrent sensor to try, one that can read diffrent touches at the same time. The downside, the output date should only be 0 or 1, so touch or no touch. First, we had to solder the conncetors to the sensor.

![Multi Touch Sensor](img/arduino_sensor_01.jpg)

For the connection we used first the whireing from [this Website](https://learn.sparkfun.com/tutorials/mpr121-hookup-guide/all).

![Multi Touch Sensor Whireing](img/multi_touch_sensor_02.jpg)

Due to the library not working properly, we went for the [library from adafruit](https://learn.adafruit.com/adafruit-mpr121-12-key-capacitive-touch-sensor-breakout-tutorial/wiring) included in the Arduino IDE.

![Whireing and texting](img/multi_touch_sensor_01.jpg)

There was a big problem using the sensor. Pin 2 & 10 are constantly beeing read as touched. Additionally of loosing those 2 pins, the pins 4 - 11 (except of pin 10) did not react at all. only Pin 0, 1 and 3 work properly.

I tested the example code from the Library.

![Code Example Adafruit](img/multi_touch_sensor_03.png)

``` C++
#include <Wire.h>
#include "Adafruit_MPR121.h"

#ifndef _BV
#define _BV(bit) (1 << (bit)) 
#endif

// You can have up to 4 on one i2c bus but one is enough for testing!
Adafruit_MPR121 cap = Adafruit_MPR121();

// Keeps track of the last pins touched
// so we know when buttons are 'released'
uint16_t lasttouched = 0;
uint16_t currtouched = 0;

void setup() {
  Serial.begin(9600);

  while (!Serial) { // needed to keep leonardo/micro from starting too fast!
    delay(10);
  }
  
  Serial.println("Adafruit MPR121 Capacitive Touch sensor test"); 
  
  // Default address is 0x5A, if tied to 3.3V its 0x5B
  // If tied to SDA its 0x5C and if SCL then 0x5D
  if (!cap.begin(0x5A)) {
    Serial.println("MPR121 not found, check wiring?");
    while (1);
  }
  Serial.println("MPR121 found!");
}

void loop() {
  // Get the currently touched pads
  currtouched = cap.touched();
  
  for (uint8_t i=0; i<12; i++) {
    // it if *is* touched and *wasnt* touched before, alert!
    if ((currtouched & _BV(i)) && !(lasttouched & _BV(i)) ) {
      Serial.print(i); Serial.println(" touched");
    }
    // if it *was* touched and now *isnt*, alert!
    if (!(currtouched & _BV(i)) && (lasttouched & _BV(i)) ) {
      Serial.print(i); Serial.println(" released");
    }
  }

  // reset our state
  lasttouched = currtouched;

  // comment out this line for detailed data from the sensor!
  return;
  
  // debugging info, what
  Serial.print("\t\t\t\t\t\t\t\t\t\t\t\t\t 0x"); Serial.println(cap.touched(), HEX);
  Serial.print("Filt: ");
  for (uint8_t i=0; i<12; i++) {
    Serial.print(cap.filteredData(i)); Serial.print("\t");
  }
  Serial.println();
  Serial.print("Base: ");
  for (uint8_t i=0; i<12; i++) {
    Serial.print(cap.baselineData(i)); Serial.print("\t");
  }
  Serial.println();
  
  // put a delay so it isn't overwhelming
  delay(100);
}
```

Further, I tested a Code provided from perplexity. (it linked following websites as source: [Website 1](https://38-3d.co.uk/de/blogs/blog/so-verwenden-sie-den-kapazitiven-touch-sensor-mpr121-mit-arduino) / [Website 2](https://www.circuits-diy.com/interfacing-mpr121-capacitive-touch-sensor-module-with-arduino/))

``` C++
#include <Wire.h>
#include "Adafruit_MPR121.h"

Adafruit_MPR121 cap = Adafruit_MPR121();

void setup() {
  Serial.begin(9600);
  while (!Serial) delay(10); // For Leonardo/Micro

  Serial.println("Adafruit MPR121 Capacitive Touch sensor test");

  if (!cap.begin(0x5A)) {
    Serial.println("MPR121 not found, check wiring?");
    while (1);
  }
  Serial.println("MPR121 found!");
}

void loop() {
  uint16_t currtouched = cap.touched();
  for (uint8_t i = 0; i < 12; i++) {
    if (currtouched & (1 << i)) {
      Serial.print(i); Serial.println(" touched");
    }
  }
  delay(100);
}
```

### 4.2.6. TouchDesinger
The Arduino writes the detected values in the serial output. This can be read in TouchDesigner with the "Serial" DAT Operator. The input needs to be converted in numbers and rescaled to be used properly. In the example, the number gets divided by 1000, so we get smaller values and added by 0 to have values greater than 1. So the touch input is used to modify a noise texture.

![alt text](img/touchdesigner_01.png)

#### 4.2.6.1. Voronoi
To have a basic water top visual, you can do it by just adding a voronoi texture and tweek the settings. TouchDesigner doesn't come with voronoi so we tried to imitate this texture.

![Voronoi Visual](img/voronoi_01.png)

![Voronoi Network](img/voronoi_02.png)

This voronoi setup is noise and feedback based. Thats a problem because its almost impossible to change the movement, especially the speed. Its a nice visual but not adaptable.

#### 4.2.6.2. Ice
We want water as the entitiy and visual to change based on parameters of Arduino. We thought of having it icy at first, then it changes to more liquid state and maybe also have some bubbles later on. 

First we started with just the more static icy like part. It's a network with edges and feedbackloops.

![alt text](img/visuals/NetworkIce.png)
![alt text](img/visuals/Ice_v1.png)

We thought it could be a possibility to just substract the effects for our projects and leave the background blank or in one color so the Arduino input has an easier time. 

![alt text](img/visuals/Onlyeffect.png)

Then we made another network which was similar but for the water visual. 

![alt text](img/visuals/WaterStateMedium.png)

We then thought it would make more sense to have the same network and then let Arduino tweak some paramters in it. So we made based on the water visual and ice visual again but tweaked the paramters and left it the same otherwise.

![alt text](img/visuals/IceStateFirst.png)

Lastly we made a final state which would be shown when all the wired would get touched.

### 4.2.7. Installation

To test the installation and interaction we connected the diffrent parts. We put the frame to test the diffrent whires infront od the beamer and connceted it through the arduino and touchdesigner to the beamer. 

![Installation](img/installation_01.jpg)

to make the ineraction work, we just remaped the values accordingly so, when noone touches it stands still and when 5 - 6 people touching i moves at maximum speed. additionally we added a filter to smooth out the valuechanges and a limit to clamp the vales and manually set a maximum and minimum. We tested the installation during our presentation. This worked okay, people were hesitating to touch and were not grabing the strings, more of touching it with one finger. Also the delay was a bit confusing. But generally it worked fine. We were happy with the test.

![Touchdesinger Values](img/touchdesigner_02.png)

![Interaction](img/installation_02.jpg)

### 4.2.8. Beamer Setup

We wanted to test diffrent lighting. We thougt that the big beamer can steal the show from our physical interactionpoint. We have to palance this weight and maybe give our Interactionpoint some light. We also thought about having our visual on the interaction point. But we do rather not have any showdow on our beamer visuals and would like to have them visibel. that could be hard when we have the visuals on the physical strings. To not have the beamer laser peoples eyes, we tried to have indirect light from the beamer to the strings. If we can balance the light, we would have the visuals on a mobile wall that probalby out of fabric on one side the beamer and on the other side the visitors and the interactionpoint.

``` markdown
Interactionpoint    |   Fabic Wall    |   Beamer
```

So we tested the beamer on Fabric

![Beamer on Fabric Projection](img/beamer_fabric_test_01.jpg)

This works pretty well!

![Light passig through](img/beamer_fabric_test_02.jpg)

The big problem, there is no light passing through the fabric. That makes the purpose of the beamer towords the strings invalide. But we still have to test diffrent fabric and the smaller frame could still be beneficial later.

We further tried with diffrend fabric and diffrend density.

![Fabric Testing](img/beamer_fabric_test_03.jpg)

We couldn't find good balance and think its almost impossible to have the light shining through without blinding the visitors and keeping the visuals on the fabric. Even a very thin fabric let almost no light throug but it was uncomftable looking at it because of the strong light.

## 4.3. Production

### 4.3.1. Wooden Branch

### 4.3.2. Hardware
We have most of our important hardware from the prototyping. The most important for us is a beamer, the arduino and a PC to run the touchdesigner on. To not use one of our laptops for the festival, we borrowed a desktop PC from the MediaDock.

![PC](img/pc_01.jpg)

### 4.3.3. Visuals
Since we had some visuals, the main part was connectig them together and controlling with the arduino.

We had 3 diffrent visuals for 3 states: the beginning, just before reaching the goal and when the goal is reached. 2 "Cross" TOPs should blend between the visuals. 

Because we had a value from 0 to 1 for the blending, we had to split that into 0 - 0.5 and 0.5 - 1. Those values had to be remaped to 0 - 1 to work with the Cross.

![Blend Visuals](img/touchdesigner_04.png)

To control the corss with arduino we took the value stream, set the limit for "no touch" and "goal is reached", remaped the values from 0 - 1 and added a filter to smooth out the stream and avoid strong jumping. 

![Arduino Controls](img/touchdesigner_05.png)

### 4.3.4. Interaction
To make the interaction more understandable and responsive we added features to make it more reactive on touch and release. This way visitors knnow their touch got recognized. We wanted to add flowing:
- quick visual effect
- small sound effect
- touch indicator, to know how much energie is in the current system. 

#### 4.3.4.1. Visual Effect
The visual effect is split is 3 parts: the trigger, the effect player and the effect itself. The trigger has a variable with a measure dealy of 0.3 seconds and a threshold of 2000. so it compares the current value with the value 0.3 seconds ago, if there is a change of more than 2000, there is a trigger signal going to the offect player. Thsis contains of a timer, a durration an a logic to prevent the player to trigger again while its running. While running its outputs a fraction between 0 and 1. The effect contains 3 circle that grow bigger, wich use the fraction as radius with a offset of 0.2 to run after echother. The circles are then used for a displace.

![Network Visual Effect](img/touchdesigner_07.png)

#### 4.3.4.2. Touch Indicator
First we just added a text from 0 to 1 to indicate the touch. We simply took the normalized valuestram from the Arduino, added a lag update every 0.5 seconds, round the calues to every 0.1. In the text operator we used following expression for the text to make sure wo only display 3 characters of the value and added a string to show the goal.

```
f"{str(op('touch_value_rounded')[0])[:3]} / 1"
```

![Network Touch Indicator](img/touchdesigner_06.png)

### 4.3.5. Text description

### 4.3.6. Final Setup

## 4.4. Presentation

## 4.5. Reflection