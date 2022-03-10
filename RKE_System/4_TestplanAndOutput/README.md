# Test plan

|TEST ID|Objective|Input data| Expected Output|
|-------|-----|------|-------|
|TC-01|Check encryption|5*1 |5 |
|TC-02|Lock the doors|5 & if blue switch pressed once|The system should print lock and turn on all leds at the same time |
|TC-03|Unlock the doors|if blue switch pressed twice|The system should print unlock and turn off all leds at the same time|
|TC-04|Activation/Deactivation of alarm|if blue switch pressed three times|The system should print alarm activation/deactivation and turn on all leds in clock wise manner|
|TC-05|Approach light|if blue switch pressed four times|The system should print approach light and turn on all leds in anti-clock wise manner|
