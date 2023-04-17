#pragma once

#define CLICKABLE_BLOCKS  1     // Enable clickability for blocks
#define CMDLENGTH         45    // Trim block output to this length
#define DELIMITER         " "  // Delimiter string used to separate blocks
#define LEADING_DELIMITER 0     // Whether a leading separator should be used
const Block blocks[] = {
	BLOCK("sb-stock",    3600,   23),
	// BLOCK("sb-mail",    18000,   28),
	BLOCK("sb-disk",        0,   17),
	BLOCK("sb-swap",        1,   24),
	BLOCK("sb-memory",      1,   18),
	BLOCK("sb-cpu",         1,   19),
	// BLOCK("sb-weather",     0,   20),
	BLOCK("sb-volume",      0,   10),
	// BLOCK("sb-battery",     120,  3),
	BLOCK("sb-clock",       1,   26),
	BLOCK("sb-internet",    6,   27),
};
