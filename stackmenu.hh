// stackmenu.hh for bbkeys
//
//	Copyright (c) 2001 by Ben Jansens <xor@x-o-r.net>
//
//	This program is free software; you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation; either version 2 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program; if not, write to the Free Software
//	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//
// (See the included file COPYING / GPL-2.0)
//
#ifndef __STACKMENU_HH
#define __STACKMENU_HH

#include "bbkeys.hh"
#include "Basemenu.hh"

class Stackmenu : public Basemenu {
public:
	Stackmenu(ToolWindow *);
	virtual ~Stackmenu();

	void Update();
	void show(bool forward);
	void reconfigure();
	void key_release(unsigned int);
	void key_press(int);
	void centerPosition();
	bool WaitForUpdate(void) {return wait_for_update;}

protected:
	void setMenuItems();
	void clearMenu();
	virtual void itemSelected(int,int);

private:
	ToolWindow *bbtool;
	bool wait_for_update;
	int menuPosition;
};

#endif // __STACKMENU_HH
