#ifndef JACK_H_
#define JACK_H_

#include "soundpipe.h"

int sp_jack_process(sp_data *sp, void *ud, void (*callback)(sp_data *, void *));

#endif