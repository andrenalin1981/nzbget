/*
 *  This file is part of nzbget
 *
 *  Copyright (C) 2015 Andrey Prygunkov <hugbug@users.sourceforge.net>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * $Revision$
 * $Date$
 *
 */


#ifndef FEEDSCRIPT_H
#define FEEDSCRIPT_H

#include "NzbScript.h"

class FeedScriptController : public NZBScriptController
{
private:
	const char*			m_szFeedFile;
	int					m_iFeedID;

	void				PrepareParams(const char* szScriptName);

protected:
	virtual void		ExecuteScript(ScriptConfig::Script* pScript);

public:
	static void			ExecuteScripts(const char* szFeedFile, int iFeedID);
};

#endif
