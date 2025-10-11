# Shotwatch
Display the brewing time of your GAGGIA Classic Pro with Shotwatch ☕️⏱️. This handy DIY gadget allows to display the amount of seconds your GAGGIA has been running on display.
>'Shotwatch' is a combination of the words 'Espresso <ins>**Shot**</ins>' and 'Stop<ins>**watch**</ins>'

## Why?
Many times I've either forgot to start counting our lost count (counting till 20 is hard okay) for how long my shot was running for. So I thought 'why not make something that does this for me?' After some Googling I quickly found solutions to this problem online, ones that I could purchase and install myself. They were however quite expensive, and this project sounded like something I could handle myself and learn a thing or two. So I opted to do it myself. In the end I probably spend more time and money prototyping then when I would've bought a solution, but what's the fun in that?! And (spoiler alert) I even learned how to make my own pcb in this project!

## How does it work?
The Shotwatch is quite simple and consists out of only 2 components, the screen and the logic board. The logic board is hooked up in series with two wires behind the brewing switch, this turns the Shotwatch on and automatically starts counting. The number is displayed on a small OLED screen connected to the logic board. Logic board is an Arduino Pro Micro, and powered with current directly coming via the brewing switch itself. GAGGIA Classic Pro's internals are all 230 AC current, so the I created a pcb where the logic board is mounted onto that houses a transformer to get the appropriate volts and wattage.

## Build guide
