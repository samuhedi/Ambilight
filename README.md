Ambilight
=========

SISTEMA AMBILIGHT 

ACLARACIONES:

Los códigos para el Arduino no son de mi autoría, yo solo los modifiqué para lograr hacer funcionar el sistema. Ya que para ests casos particulares no hay mucha información clara en la RED


Este repositorio contiene información para quienes quieran hacerse un sistema de Ambilight (como el de los tv philips) casero utilizando Arduino y una PC con Windows.

SOFTWARE:

El soft que hay que instalar en la PC es el siguiente:
(Se puede usar cualquiera de los 3)

Prismatik 
https://code.google.com/p/light-pack/downloads/list

Ambibox
http://www.ir-max.ru/download.php?lang=english

Adalight
https://github.com/adafruit/Adalight/tree/master/Processing
(solo tienen que descargar los sketch para processing)

FIRMWARE PARA EL ARDUINO:

Si utilizas pixeles led con controladores ws2811, ws2812, o cualquiera que use 3 cables (+,-,data), descargar:

Sketch:
WS2811.ino

Librería usada:
FastSPI_LED2 (googlear)

Si utilizas shift registers (74HC595) y leds RGB, descargar:
Información sobre librería y electrónica: http://www.elcojacobs.com/shiftpwm/

Sketch:
AMBILIGHT_CON_74HC595.ino

Librería usada:
ShiftPWM (googlear)



