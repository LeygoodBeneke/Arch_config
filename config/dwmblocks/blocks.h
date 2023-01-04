//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
	
	{"", "/home/vpc/.config/dwmblocks-distrotube/scripts/xkblayout-state print %e",	 10,		              10},
	{"", "/home/vpc/.config/dwmblocks-distrotube/scripts/bluetooth_headphones",	 1,		              5},
	{"", "/home/vpc/.config/dwmblocks-distrotube/scripts/spoti",	 1,		              1},
	{"", "/home/vpc/.config/dwmblocks-distrotube/scripts/wireless_keyboard",	 60,		              1},
	{"", "/home/vpc/.config/dwmblocks-distrotube/scripts/memory",	 6,		              1},

	//{" 🔊 ", "/opt/dwmblocks-distrotube/scripts/volume",     0,		              10},

	{"", "/home/vpc/.config/dwmblocks-distrotube/scripts/clock",	      1,	              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
