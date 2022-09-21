#define CMDLENGTH 45
#define DELIMITER " "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("sb-disk",        0,   17),
	BLOCK("sb-memory",      1,   18),
	BLOCK("sb-cpu",         1,   19),
	BLOCK("sb-weather", 18000,   20),
	BLOCK("sb-volume",      0,   10),
	BLOCK("sb-battery",     120,  3),
	BLOCK("sb-clock",       1,   26),
	BLOCK("sb-internet",    7,   27),
};
