# BIDIRECTIONAL COMMUNICATION REMOTE KEYLESS ENTRY SYSTEM (BiCom System)

## Description

The Bicom system involves the design of the remotely locking or unlocking access to automobiles and it requires two components transmitter and reciever. It can be implemented with using the encryption method and operates by broadcasting radio waves on a particular frequency bidirectionally. It is also able to display the status of the car such as window, alarm, car battery information, light approach.

## State of Art

* By using this advanced modern technologies we can remotely monitoring the status of the car
* The transmissions between the car and key are encrypted to prevent theft

## Identifying features

* Display Window status for one user button click
* Display Alarm status for two user button clicks
* Display car battery info for three user button clicks
* Display Door status for four user button clicks

## Advantages

* Convenience, better security, automatic work control
* No need of human interaction with the car
* This system provides easy security access to the automobiles through encryption
* The automobile owners shall get benefited

## Disadvantages

* If remote is lost then automobile security is in more trouble
* If any other remote have our remote frequency then our automobile security is in trouble
* This system works on certain limited range

## SWOT analysis

![2 2](https://user-images.githubusercontent.com/82749120/157997403-ad876ea0-9d38-4c70-a151-59bd6967cd02.png)

## 5W's and 1H
![2 1](https://user-images.githubusercontent.com/82749120/157997138-7217e6a1-0910-47bc-96ab-5e870d146a95.png)
  
## Requirements

### High Level Requirements

|ID|Description |Status|
|---|------------|-----|
|HLR1|It should check the windows status.| Implemented |
|HLR2|It should check the alarm status.|Implemented |
|HLR3|It should get informaion about the car battery.|Implemented |
|HLR4|It should check the door status.|Implemented |

### LOW Level Requirements

|ID|Description|HLR ID|Status|
|--|-----------|------|-------|
|LLR1|When we press the blue switch once,the system should check the windows status.|HLR1|Implemented |
|LLR2|When we press the blue switch twice,the system should check the alarm status.|HLR2|Implemented |
|LLR3|When we press the blue switch three times,the system should get informaion about the car battery.|HLR3|Implemented |
|LLR4|When we press the blue switch four times,the system should check the door status.|HLR4|Implemented |

## ARCHITECTURE

## Behavioral Diagrams

### High Level Flow Chart Behavioral Diagram

![Hlfc1](https://user-images.githubusercontent.com/98836479/157873698-59014fd7-572a-45b0-89b6-2d7f21e48712.PNG)

### Low Level Flow Chart Behavioral Diagram

![llfc1](https://user-images.githubusercontent.com/98836479/157875742-aeedf256-bc6d-4fa1-adf5-1f2a24137f8d.PNG)

## Structural Diagrams

### High Level Use Case Structural Diagram

![hluc1](https://user-images.githubusercontent.com/98836479/157877220-457acee6-4c7a-40af-a0c9-7771dcaabe40.PNG)

### Low Level Use Case Structural Diagram

![lluc1](https://user-images.githubusercontent.com/98836479/157878140-41a85b9d-ebd5-40ba-bd92-7e2e2e179076.PNG)

## BEST METHODS FOLLOWED

* Used microsoft word as a drawing tool for UML diagrams
* Mentioning of both High level and Low level Behavioral and structural diagrams for better understanding
* Detailed explanation in Low level Behavioural and Structural Diagrams

## TEST PLAN AND OUTPUT

## High Level Test Plan

![hlt2](https://user-images.githubusercontent.com/98836479/157908663-9e45d3b5-560c-4b75-9b1f-759ebfdf072e.PNG)

## Low Level Test Plan

![LLTP1](https://user-images.githubusercontent.com/98836479/157908636-cc8aa328-09d8-4a3a-b109-70cf5ba448f6.PNG)

# Simulation pictures

## When switch is pressed once, all leds will ON
![all_led](https://user-images.githubusercontent.com/46968025/158003542-79a7004c-9d09-4a61-9e4d-8fd87c6d9227.PNG)

## When switch is pressed twice, all leds will OFF
![all_led_off](https://user-images.githubusercontent.com/46968025/158003544-7abbad95-9968-49dc-8f69-8971ee811485.PNG)


## When switch is pressed once, all leds will ON in clock wise direction.
![clock_wise](https://user-images.githubusercontent.com/46968025/158006394-9cca8fd6-568b-4fbe-a16a-9e68260429d4.PNG)

## When switch is pressed once, all leds will ON in anti-clock wise direction.
![anti clock](https://user-images.githubusercontent.com/46968025/158006395-8740ec24-aa10-49f8-8fc9-22e4cdb9912f.PNG)

# Output video
https://user-images.githubusercontent.com/82749120/158001767-69efcac5-97a1-482a-a32f-4c4d94dd842e.mp4


## Conclusion

Bi-Com System of Remote Keyless Entry(RKE) is system where automobile owners are much more befenited for handling the automobile like diplaying or printing the car status such as Window, Alarm, Car Battery information & Door status and monitoring the status of the automobile remotely in a two way communication method between the key fob and car. The scope of this system is huge in automobiles. This is the Better Security system with Highly Encrypted with no need of direct human interactions with the car.

## Tools Used

* STM32CubeIDE
* Cygwin

