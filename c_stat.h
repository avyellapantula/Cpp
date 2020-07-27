#ifndef C_STAT_H
#define C_STAT_H

#include <csconnector/csconnector.h>

namespace csconnector
{
	namespace call_stats
	{
		void start();
		void stop();

		void count(Commands command);
	}
}

#endif // C_STAT_H
