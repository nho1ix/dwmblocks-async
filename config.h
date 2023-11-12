#pragma once

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

#define BLOCKS(X)         \
	X("sb-stock",    3600,   23) \
	/* X("sb-mail",    18000,   28) */ \
	X("sb-disk",        0,   17) \
	X("sb-swap",        1,   24) \
	X("sb-memory",      1,   18) \
	X("sb-cpu",         1,   19) \
	/* X("sb-weather",     0,   20) */ \
	X("sb-volume",      0,   10) \
	/* X("sb-battery",     120,  3) */ \
	X("sb-clock",       1,   26) \
	X("sb-internet",    6,   27)
