//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
   /*Icon*/	/*Command*/ /*Update Interval*/	/*Update Signal*/
   {"",  "sb-temp",        10,     6},      
   {"",  "sb-cpu",         10,     6},      
   {"",  "sb-memory",      10,     6},      
   {"",  "sb-disk",        10,     6},      
 //{"",  "sb-weather",     18000,  5},
	 {"",	 "sb-volume",      1,      10},
   {"",  "sb-backlight",   1,      12},
	 {"",	 "sb-battery",     5,	     3},
   {"",  "sb-bluetooth",   10,     13},
	 {"",	 "sb-internet",    5,	     4},
	 {"",	 "sb-clock",       60,     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
