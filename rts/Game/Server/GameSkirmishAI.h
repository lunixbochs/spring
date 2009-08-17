/*
	Copyright (c) 2008 Robin Vobruba <hoijui.quaero@gmail.com>

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __GAME_SKIRMISH_AI_H
#define __GAME_SKIRMISH_AI_H

#include "ExternalAI/SkirmishAIBase.h"

class GameSkirmishAI : public SkirmishAIBase
{
public:
	GameSkirmishAI() :
		SkirmishAIBase()
		//, cpuUsage (0.0f)
		{}

	void operator=(const SkirmishAIBase& base) { SkirmishAIBase::operator=(base); };

	/*enum State
	{
		UNCONNECTED,
		CONNECTED,
		INGAME,
		DISCONNECTED
	};
	State myState;*/

	//float cpuUsage;

	//bool isLocal;
	SkirmishAIStatistics lastStats;
};

#endif // __GAME_SKIRMISH_AI_H