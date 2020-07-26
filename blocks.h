/* time interval in seconds to sleep before looking for updates in the main loop */
#define SLEEPINTERVAL			1

#define PATH(name)			"/home/flx/repos/dwmblocks/blocks/"name

/* If interval of a block is set to 0, the block will only be updated once at startup.
 * If interval is set to a negative value, the block will never be updated in the main loop.
 * Set signal to 0 if signalling is not required for the block.
 * Keep signal for clickable blocks less than 10.
 * If multiple realtime signals are pending, then the lowest numbered signal is delivered first. */

/* pathu - path of the program whose output is to be used for status text
 * patch - path of the program to be executed on clicks */
static Block blocks[] = {
/*	pathu				pathc					interval	signal */

	{ PATH("wifi.sh"),		NULL,		60,		0},

	{ PATH("cpu_load.sh"),		NULL,		5,		0},

	{ PATH("memory.sh"),		NULL,		10,		0},

	{ PATH("xbacklight.sh"),		NULL,		0,		2},

	{ PATH("volume.sh"),		PATH("volume_button.sh"),		0,		1},

	{ PATH("cpu_temp.sh"),		NULL,     15,		0},

	{ PATH("battery.sh"),		NULL,     60,		0},

	{ PATH("time.sh"),		NULL,					60,		0},

        { NULL } /* just to mark the end of the array */
};

static const char *delim =  "  /  ";
