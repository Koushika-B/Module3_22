# REMOTE KEYLESS ENTRY SYSTEM (RKE SYSTEM)

## Description
 
The RKE system involves the design of the remotely locking or unlocking access to automobiles such as cars, jeep etc., An Automobile is a land vehicle used to carry passengers. Automobiles usually have four wheels and an engine or motor to make them move. Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles. Security is more important in automobiles as they are costly to buy. Costly cars had more features than normal cars. In this project, we are going to lock or unlock the automobiles using remote.

## State Of Art

RKE transmission requires two components - a transmitter and a receiver
* Transmitter - RKE key fob, other ID device with RKE integrated
* Receiver - Body Control ECU, other ECU with integrated RKE RKE operates by broadcasting radio waves on a particular frequency unidirectionally. RKE systems implement encryption and rolling code algorithms to prevent car thieves from intercepting and spoofing the telegrams
 
## Identifying features
  
* Door must be locked for one user button click
* Door must be unlocked for two user button clicks
* Activation and Deactivation of alarm for three user button clicks
* Approach light for four user button clicks

## Advantages

* Easy to use
* It helps to protect automobile from thieves
* It is very easy to find automobiles if more cars are present

## Disadvantages

* If any other remote have our remote frequency then our automobile security is in trouble
* If our remote is lost then our automobile security is in more trouble

## SWOT Analysis
![123](https://user-images.githubusercontent.com/82749120/157896704-f9a8547e-6095-4e89-98c5-e337a814cada.png)

## 5 W's and 1 H's
![11111](https://user-images.githubusercontent.com/82749120/157889756-8a7f10cd-23f1-4902-97b7-cfa625acb4f0.png)

## Requirements

### High Level Requirements

| ID| Description|Status|
|---|------------|------|
|HLR1|It shall lock the door.|Implemented |
|HLR2|It shall unlock the door.|Implemented|
|HLR3|It shall activate/deactivate the alarm.|Implemented |
|HLR4|It shall appproach the light.|Implemented |

### Low Level Requirements

|ID|Description|HLR ID|Status|
|--|-----------|------|-------|
|LLR1|When we press the blue switch once,the system should lock the door.|HLR1|Implemented |
|LLR2|When we press the blue switch twice,the system should unlock the door.|HLR2|Implemented |
|LLR3|When we press the blue switch three times,the system should activate/deactivate the alarm.|HLR3|Implemented |
|LLR4|When we press the blue switch four times,the system should approach the light.|HLR4|Implemented |

## ARCHITECTURE

## Behavioral Diagrams

### High Level Flow Chart Behavioral Diagram

![HLFC1 (2)](https://user-images.githubusercontent.com/98836479/157880748-5f291388-e4b4-4c5f-b862-35e22a9ddde9.PNG)

### Low Level Flow Chart Behavioral Diagram

![LLFC1 (2)](https://user-images.githubusercontent.com/98836479/157880794-9f13fa61-a012-4f36-9753-50fff1c78550.PNG)

## Structural Diagrams

### High Level Use Case Structural Diagram

![HLUC](https://user-images.githubusercontent.com/98836479/157850607-da14433f-e499-4e9d-a15a-0b3641588330.PNG)

### Low Level Use Case Structural Diagram

![LLUC](https://user-images.githubusercontent.com/98836479/157853493-14df14af-117e-49bc-88a0-df75bc8a376c.PNG)

## BEST METHODS FOLLOWED

* Used microsoft word as a drawing tool for UML diagrams
* Mentioning of both High level and Low level Behavioral and structural diagrams for better understanding
* Detailed explanation in Low level Behavioural and Structural Diagrams

# TEST PLAN AND OUTPUT

## High Level Test Plan

![hlt1](https://user-images.githubusercontent.com/98836479/157908213-0745bd0b-e32d-4c53-84cd-9c7928dd48d3.PNG)

## Low Level Test Plan

![LLTP1](https://user-images.githubusercontent.com/98836479/157908303-73d1ee1b-38cb-4310-a83e-1d398da93dd1.PNG)

# Simulation pictures

## When switch is pressed once, all leds will ON.
![all_led](https://user-images.githubusercontent.com/46968025/158003542-79a7004c-9d09-4a61-9e4d-8fd87c6d9227.PNG)

## When switch is pressed twice, all leds will OFF.
![all_led_off](https://user-images.githubusercontent.com/46968025/158003544-7abbad95-9968-49dc-8f69-8971ee811485.PNG)

## When switch is pressed once, all leds will ON in clock wise direction.
![clock_wise](https://user-images.githubusercontent.com/46968025/158006394-9cca8fd6-568b-4fbe-a16a-9e68260429d4.PNG)

## When switch is pressed once, all leds will ON in anti-clock wise direction.
![anti clock](https://user-images.githubusercontent.com/46968025/158006395-8740ec24-aa10-49f8-8fc9-22e4cdb9912f.PNG)


## Conclusion
Remote Keyless Entry(RKE) is a system where automobile owners are much more benefited in handling the automobile like lock & unlock the car in remote and monitoring the status of the automobile. The scope of this system is huge in automobiles. This is the better security system with highly encrypted with no need of direct human interactions with the car.

## Tools Used

* STM32CubeIDE
* Cygwin




