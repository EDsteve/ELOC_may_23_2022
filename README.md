This firmware is made for the ELOC-S 2.7 shield only. It will not work on ELOC-S 3.0 or higher.

The code is for PLatformIO.

The ELOC-S 2.7 uses a ESP32 development board which do not have a USB to Serial IC and no LDO on board any more (I cut it off to reduce power consumption). So if you want to upload new code. You can do that via UART (RX TX) or you compile your code in PlatformIO and upload the .bin file to the ELOC-S with the app. How to update the firmware with an .bin file is explained here: https://youtu.be/nzglXrrPFXw

More informtion about the ELOC-S on the website: https://wildlifebug.com/

Download the app at: https://play.google.com/store/apps/details?id=de.eloc.eloc_control_panel&hl=en&gl=US
<p>&nbsp;</p>
<p>Random Notes:</p>

<p><strong>Voltage reading calibration (initial setup):</strong></p>
<p>- Supply exactly 3.18V to the device<br />- Connect with the app <br />- Go to settings and write "vcal" in custom command</p>
