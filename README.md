This firmware is made for the ELOC-S 2.7 shield.
The code is for PLatformIO. Most ELOC-S in the field do not have a USB to Serial adapter and no LDO on board any more (I cut it off to reduce power consumption). So if you want to upload new code. YOu can do that via UART (RX TX) or you compile your code in PlatformIO and use the ELOC-S app to update the firmware on thedevice. How to update the firmware is explained here: https://youtu.be/nzglXrrPFXw

More informtion about the ELOC-S on the website: https://wildlifebug.com/

<p>Random Notes:</p>
<p>&nbsp;</p>
<p><strong>Voltage reading calibration (initial setup):</strong></p>
<p>- Supply exactly 3.18V to the device<br />- Connect with the app <br />- Go to settings and write "vcal" in custom command</p>
