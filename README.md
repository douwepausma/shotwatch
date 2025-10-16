# Shotwatch
Display the brewing time of your GAGGIA Classic Pro with Shotwatch ☕️⏱️. This handy DIY gadget allows to display the amount of seconds your GAGGIA has been running on display.
>'Shotwatch' is a combination of the words 'Espresso <ins>**Shot**</ins>' and 'Stop<ins>**watch**</ins>'

## Why?
Many times I've either forgot to start counting our lost count (counting till 20 is hard okay) for how long my shot was running for. So I thought 'why not make something that does this for me?' After some Googling I quickly found solutions to this problem online, ones that I could purchase and install myself. They were however quite expensive, and this project sounded like something I could handle myself and learn a thing or two. So I opted to do it myself. In the end I probably spend more time and money prototyping then when I would've bought a solution, but what's the fun in that?! And (spoiler alert) I even learned how to make my own pcb in this project!

## How does it work?
The Shotwatch is quite simple and consists out of only 2 components, the screen and the logic board. The logic board is hooked up in series with two wires behind the brewing switch, this turns the Shotwatch on and automatically starts counting. The number is displayed on a small OLED screen connected to the logic board. Logic board is an Arduino Pro Micro, and powered with current directly coming via the brewing switch itself. GAGGIA Classic Pro's internals are all 230 AC current, so the I created a pcb where the logic board is mounted onto that houses a transformer to get the appropriate volts and wattage.

## Bill of materials
In addition to the 3 printed parts and the Shotwatch PCB, the following parts are required. You can find all the parts below on AliExpress. Concerning the Shotwatch PCB, you can get this manufactured at PCBWay with the gerber files. And you can print the STL files for the case yourself, or find a place where you can get them printed.

|Part|Amount|
|----|------|
|HLK-10M05(10W 5V)|1x|
|Arduino Pro Micro|1x|
|Header pins 2x12|2x|
|SSD1315 Oled screen|1x|
|4pin JST female connector|1x|
|4pin JST male connector|2x|
|KF128 5.08MM pitch, 2 port screw terminal|1x|
|30cm 4 wire ribbon cable|1x|
|30cm 18 AWG cable|2x|
|Piggyback connecter (with insulation)|2x|

## Assembly
https://github.com/user-attachments/assets/8fb99642-29bd-4e3d-afc3-6cd245b8583b

## Shotwatch in action
https://github.com/user-attachments/assets/95962a83-e972-49d3-940f-4a79777042f4

