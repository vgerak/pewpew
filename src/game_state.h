/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : game_state.h

* Purpose :

* Creation Date : 24-10-2011

* Last Modified : Wed 02 Nov 2011 11:09:29 PM EET

* Created By : Greg Liras <gregliras@gmail.com>

_._._._._._._._._._._._._._._._._._._._._.*/
#ifndef GAME_STATE_H
#define GAME_STATE_H
class game_state
{
  public: 
  bool paused;
  bool sounds_on;
  unsigned int diffifulty_level;
  unsigned int level_type;
  unsigned int player_ship_type;
  game_state();
  void gs_run(void);
  void gs_pause(void);
  void gs_sound_off(void);
  void gs_sound_on(void);
};


#endif
