]]] rPItos

An attempt at writing a stack-only (kek) simple RTOS for the RPI pico microcontroller.

Start with a basic task and get that running.

KISS. Implement the absolute basics (tick isr, scheduler, etc). Keep the bare-metal stuff
 as close to board level as possible. No SDK. Will import the register definitions though.


Project layout:
    - port.c: Port specific implementation of the tick ISR and context switching
    - core.c: Core functionality in standard C (scheduler task, weak idle task, etc)
    - tasks.c: task management functions
    - messages.c: message/event/signal queues
