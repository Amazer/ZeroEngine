#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include <xcb/xcb.h>

int main(void)
{
	xcb_connection_t		*pConn;
	xcb_screen_t			*pScreen;
	xcb_window_t			window;
	xcb_gcontext_t			foreground;
	xcb_gcontext_t			background;
	xcb_generic_event_t		*pEvent;
	uint32_t				mask = 0;
	uint32_t				values[2];
	uint8_t					isQuit = 0;

	char title[] = "Hello,ZeroEngine!";
	char title_icon = "Hello,ZeroEngine!(iconified)";


	/*establish connection to x server*/
	pConn = xcb_connect(0, 0);

    /*get the first screen */
    pScreen = xcb_setup_roots_iterator(xcv_get_setup(pConn)).data;

    /* get the root window */
    window = pScreen->root;


}
