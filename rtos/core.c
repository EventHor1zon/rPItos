/**
*   @file core.c
*
*   @breif Contains the scheduler task, idle task and common functions
*
*
**/

#include "./include/core.h"


/** counter for the system tick **/
static uint32_t system_tick = 0;
static uint32_t idle_tick = 0;

static void idle_function() {
    idle_tick++;
    return;
}



void get_systick(uint32_t tick) {

    tick = system_tick;
    return;
}

void scheduler() {



}


void idle_task() {

    while(1) {

        idle_function();
    }

}

