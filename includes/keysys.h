#ifndef KEYSYS_H
# define KEYSYS_H

#if defined(__APPLE__) && defined(__MACH__)
	#include "keysys_mac.h"
#else
	# include <X11/keysym.h>
#endif

#endif