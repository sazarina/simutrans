/*
 * part of the Simutrans project
 * @author hsiegeln
 * 01/12/2003
 */

#include "fahrplan_gui.h"

#include "../linehandle_t.h"

 class spieler_t;
 class karte_t;
 class loadsave_t;

 class line_management_gui_t : public fahrplan_gui_t
 {
public:
	line_management_gui_t(linehandle_t line, spieler_t* sp);
	const char * get_name() const;
	bool infowin_event(const event_t *ev);

	// stuff for UI saving
	line_management_gui_t(karte_t *welt);
	virtual void rdwr( loadsave_t *file );
	virtual uint32 get_rdwr_id() { return magic_line_schedule_rdwr_dummy; }


private:
	linehandle_t line;
};
