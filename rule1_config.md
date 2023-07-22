Open Tasmota web (example http://192.168.31.118/)
Consoles -> Console -> Enter comamnd

rule1
on PCF8574-1_INP#D0=0 do power9 toggle endon
on PCF8574-1_INP#D1=0 do power10 toggle endon
on PCF8574-1_INP#D2=0 do power11 toggle endon
on PCF8574-1_INP#D3=0 do power12 toggle endon
on PCF8574-1_INP#D4=0 do power13 toggle endon
on PCF8574-1_INP#D5=0 do power14 toggle endon
on PCF8574-1_INP#D6=0 do power15 toggle endon
on PCF8574-1_INP#D7=0 do power16 toggle endon
on PCF8574-2_INP#D0=0 do power1 toggle endon
on PCF8574-2_INP#D1=0 do power2 toggle endon
on PCF8574-2_INP#D2=0 do power3 toggle endon
on PCF8574-2_INP#D3=0 do power4 toggle endon
on PCF8574-2_INP#D4=0 do power5 toggle endon
on PCF8574-2_INP#D5=0 do power6 toggle endon
on PCF8574-2_INP#D6=0 do power7 toggle endon
on PCF8574-2_INP#D7=0 do power8 toggle endon
