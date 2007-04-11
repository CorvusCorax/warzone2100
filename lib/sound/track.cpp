/*
	This file is part of Warzone 2100.
	Copyright (C) 2007  Warzone Resurrection Project

	Warzone 2100 is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	Warzone 2100 is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Warzone 2100; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

	$Revision$
	$Id$
	$HeadURL$
*/

#include "track.hpp"

soundTrack::soundTrack(const soundDataBuffer& data) : soundBuffer(data), _loop(false), _volume(0), _lastFinished(0)
{
}

soundTrack::soundTrack(const soundDataBuffer& data, const std::string& fName) : soundBuffer(data), _loop(false), _volume(0), _lastFinished(0), _fileName(fName)
{
}

void soundTrack::setLoop(const bool& bLoop)
{
    _loop = bLoop;
}

bool soundTrack::loop() const
{
    return _loop;
}

void soundTrack::setVolume(const float& vol)
{
    _volume = vol;
}

float soundTrack::volume() const
{
    return _volume;
}

void soundTrack::setFilename(const std::string& fName)
{
    _fileName = fName;
}

std::string soundTrack::fileName() const
{
    return _fileName;
}
