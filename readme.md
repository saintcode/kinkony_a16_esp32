Based on KC868-A16 rev1.6 hardware https://www.kincony.com/forum/forumdisplay.php?fid=25

and Tasmota firmware https://tasmota.github.io/docs/

**!!!** REMOVE all 433Mhz hardware from board before write firmware **!!!**

Use `tasmota-en-a16.bin` firmware, its compilled with PCF8574 support.


**Tasmota configuration**

Open Tasmota web (example http://192.168.31.118, http://192.168.4.1)

Open **Configuration -> Configure other -> Template** and check Activate

```
{"NAME":"KC868-A16 rev 1.6","GPIO":[32,1,1,1,640,608,1,1,1,1,1,1,1,1,5600,1,0,1,1,5568,0,1,1,1,0,0,0,0,1,1,1,1,1,0,0,1],"FLAG":0,"BASE":1}
```


Open **Configuration -> Configure PCF8574** and set as below

```
Device 1 Port 0 - Input
Device 1 Port 1 - Input
Device 1 Port 2 - Input
Device 1 Port 3 - Input
Device 1 Port 4 - Input
Device 1 Port 5 - Input
Device 1 Port 6 - Input
Device 1 Port 7 - Input
Device 2 Port 0 - Input
Device 2 Port 1 - Input
Device 2 Port 2 - Input
Device 2 Port 3 - Input
Device 2 Port 4 - Input
Device 2 Port 5 - Input
Device 2 Port 6 - Input
Device 2 Port 7 - Input
Device 3 Port 0 - Output
Device 3 Port 1 - Output
Device 3 Port 2 - Output
Device 3 Port 3 - Output
Device 3 Port 4 - Output
Device 3 Port 5 - Output
Device 3 Port 6 - Output
Device 3 Port 7 - Output
Device 4 Port 0 - Output
Device 4 Port 1 - Output
Device 4 Port 2 - Output
Device 4 Port 3 - Output
Device 4 Port 4 - Output
Device 4 Port 5 - Output
Device 4 Port 6 - Output
Device 4 Port 7 - Output
```


Open **Consoles -> Console -> Enter command** and paste

```
rule1
on PCF8574-2_INP#D0=0 do power1 toggle endon
on PCF8574-2_INP#D1=0 do power2 toggle endon
on PCF8574-2_INP#D2=0 do power3 toggle endon
on PCF8574-2_INP#D3=0 do power4 toggle endon
on PCF8574-2_INP#D4=0 do power5 toggle endon
on PCF8574-2_INP#D5=0 do power6 toggle endon
on PCF8574-2_INP#D6=0 do power7 toggle endon
on PCF8574-2_INP#D7=0 do power8 toggle endon
on PCF8574-1_INP#D0=0 do power9 toggle endon
on PCF8574-1_INP#D1=0 do power10 toggle endon
on PCF8574-1_INP#D2=0 do power11 toggle endon
on PCF8574-1_INP#D3=0 do power12 toggle endon
on PCF8574-1_INP#D4=0 do power13 toggle endon
on PCF8574-1_INP#D5=0 do power14 toggle endon
on PCF8574-1_INP#D6=0 do power15 toggle endon
on PCF8574-1_INP#D7=0 do power16 toggle endon
```
