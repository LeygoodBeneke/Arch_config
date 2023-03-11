//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
	
	{"", "$HOME/.config/dwmblocks/scripts/layout",	                 10,     	           10},
	{"", "$HOME/.config/dwmblocks/scripts/bluetooth_headphones",	    1,		              5},
	{"", "$HOME/.config/dwmblocks/scripts/spoti",	                    1,		              1},
	{"", "$HOME/.config/dwmblocks/scripts/wireless_keyboard",	       60,		              1},
	{"", "$HOME/.config/dwmblocks/scripts/memory",	                  6,		              1},
	{"", "$HOME/.config/dwmblocks/scripts/volume",                    0,		              9},
	{"", "$HOME/.config/dwmblocks/scripts/clock",	                    1,   	              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
