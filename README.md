# Smart-dustbin
With the use of ultrasonic sensor and servo motor a smart dustbin was designed in which flap of dustbin opens 
automatically detecting hands by using Arduino UNO coding with the help of software Arduino IDE.

As per the code we need to connect trigger and echo pin of ultrasonic
sensor to 6th and 7th pin respectively of the Arduino UNO. Vcc pin is to be
connected with 5V pin and ground pin with the ground itself.
For the servo motor we need to connect yellow wire with 8th pin of Arduino UNO
and rest red wire with 3.3V and black wire to the ground.

When system is powered ON, Arduino keeps monitoring for any things that come
near the sensor at give range. When Ultrasonic sensor detect any object for
example like hand or others, here Arduino calculates its distance and if it
less than a certain predefined value than servo motor get activate first and
with the support of the extended arm of the lid. Lid will open for a given
time than it will automatically close.
