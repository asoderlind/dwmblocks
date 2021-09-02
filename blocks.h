//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/					/*Update Interval*/	/*Update Signal*/
  {"",  "sb-memory",      60, 6},      
  {"",  "sb-disk",        60, 6},      
  {"",  "sb-weather",     60, 5},
	{"",	"sb-volume",      1,	10},
	{"",	"sb-battery",     5,	3},
	{"",	"sb-internet",    5,	4},
	/* {"",	"free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0}, */
	{"",	"sb-clock",       5,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
