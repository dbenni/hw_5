
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Menu_Bar.H>
#include <stdlib.h>

void Change_CB(Fl_Widget *w, void *) {
	Fl_Menu_Bar *menu = (Fl_Menu_Bar*)w;
	Fl_Menu_Item *p;
	// Change submenu name
	p = (Fl_Menu_Item*)menu->find_item("Edit/Submenu");
	if (p) p->label("New Submenu Name");
	// Change item name
	p = (Fl_Menu_Item*)menu->find_item("Edit/New Submenu Name/Aaa");
	if (p) p->label("New Aaa Name");
}
void Quit_CB(Fl_Widget *, void *) {
	exit(0);
}
int main() {
	Fl_Window *win = new Fl_Window(400, 400);
	Fl_Menu_Bar *menu = new Fl_Menu_Bar(0, 0, 400, 25);
	menu->add("File/Quit", FL_CTRL + 'q', Quit_CB);
	menu->add("view/Robopart", FL_CTRL + 'c', Change_CB);
	menu->add("Make/Submenu/arm");
	menu->add("Make/Submenu/head");
	win->end();
	win->show();
	return(Fl::run());
} 