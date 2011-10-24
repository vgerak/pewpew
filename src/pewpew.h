/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : pewpew.h

* Purpose :

* Creation Date : 20-10-2011

* Last Modified : Tue 25 Oct 2011 12:06:10 AM EEST

* Created By : Greg Liras <gregliras@gmail.com>

_._._._._._._._._._._._._._._._._._._._._.*/
#ifndef PEWPEW_H
#define PEWPEW_H


#include "level.h"
#include "menu.h"
#include "game_state.h"



void end(void);
void end_0(void);
void run(void);
void gpause(void);
void back(void);
void info_action(void);
void option_action(void);
void sound_off(void);
void sound_on(void);





static void mytimer(int v);
void display(void);
void reshape(int w, int h);
void kbRelF(unsigned char key,int x,int y);
void kbF(unsigned char key, int x, int y);
void skbF(int key, int x, int y);
void mIdleF(int x, int y);
void mF(int btn,int state,int x, int y);


#endif
