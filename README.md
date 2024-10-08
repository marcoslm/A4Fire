# A4Fire - Circuito de Auto-disparo

Este proyecto fue desarrollado en 2015 para cumplir con los requerimientos específicos de **Enrique García** para su proyecto personal. El código es sencillo y el circuito es fácil de construir para cualquier aficionado a la electrónica.

## Descripción del Proyecto

El firmware implementa un circuito de auto-disparo para joysticks y gamepads compatibles con las normas **Atari/Commodore**, y es compatible con otros sistemas como **MSX** o **Amstrad CPC**. Está diseñado para funcionar con un microcontrolador **PIC 10F200** y fue creado usando el entorno de desarrollo **MPLAB X v2.05** con el compilador **XC8**.

A4Fire fue desarrollado como parte del proyecto del joystick A4 de Enrique García. Puedes encontrar más información sobre su proyecto en su [canal de YouTube](https://www.youtube.com/channel/UCb7_NkehBK6dyK2aAPUDlYA).

## Estructura del Proyecto

El proyecto está organizado en dos secciones principales:

1. **Circuito**: Contiene los archivos necesarios para el diseño del circuito y la placa PCB.
   - Archivos de diseño en Eagle.
   - Esquema y detalles de las conexiones.
   - Archivos PDF con las vistas previas del diseño (`Bottom.pdf` es la cara de las pistas y `TopSilk.pdf` es la serigrafía). Los archivos están listos para imprimir a escala real y fabricar el circuito de manera casera.

2. **Firmware**: Incluye el código fuente y el archivo compilado (.hex) listo para ser grabado en el microcontrolador PIC.
   - `main.c`: Código fuente del firmware.
   - `A4-autofire-PIC10F200.hex`: Archivo compilado para grabar en el PIC 10F200.

## Instrucciones

1. Utiliza los archivos PDF para fabricar la placa de circuito de forma casera. El archivo `Bottom.pdf` contiene la vista de las pistas, y el archivo `TopSilk.pdf` es la serigrafía para imprimir a escala real.
   
2. El archivo `A4-autofire-PIC10F200.hex` se puede flashear en un microcontrolador **PIC 10F200** usando cualquier programador compatible o universal, como los populares programadores de la serie **TL866**.

![Circuito](https://github.com/user-attachments/assets/d790847c-b542-4033-898c-e8b633482cca)
![IMAG2732](https://github.com/user-attachments/assets/f59c726c-e6d9-4792-b3e0-b6a98342d908)

## Esquema de Conexiones

| SERIGRAFÍA | NOMBRE      | DESCRIPCIÓN                                                        |
|------------|-------------|--------------------------------------------------------------------|
| FO         | FIRE OUT    | Salida de disparo hacia el ordenador                               |
| G          | GROUND      | Tierra                                                             |
| +5         | +5 VOLTS    | Alimentación a 5V (desde el conector o batería)                    |
| FI         | FIRE IN     | Botón de disparo (botón físico del joystick)                       |
| SW1        | SWITCH      | Interruptor para activar/desactivar autofire                       |
| SPEED      | SPEED SEL   | Selección de velocidad (1-2 = Normal, 2-3 = Turbo) 

## Licencia

Este proyecto está licenciado bajo la licencia MIT. Eres libre de usar, modificar y distribuir el proyecto tanto para fines personales como comerciales. Además, puedes sublicenciar y/o vender copias del proyecto. Consulta el archivo [LICENSE](./LICENSE) para más detalles.
