.equ    USER_CODE       0x4200
.equ    USER_RAMSTART   USER_CODE+0x1800
.equ    FS_HANDLE_SIZE  8
.equ    BLOCKDEV_SIZE   8

; *** JUMP TABLE ***
.equ	strncmp			0x03
.equ	addDE			0x06
.equ	addHL			0x09
.equ	upcase			0x0c
.equ	unsetZ			0x0f
.equ	intoDE			0x12
.equ	intoHL			0x15
.equ	writeHLinDE		0x18
.equ	findchar		0x1b
.equ	parseHex		0x1e
.equ	parseHexPair	0x21
.equ	blkSel			0x24
.equ	blkSet			0x27
.equ	fsFindFN		0x2a
.equ	fsOpen			0x2d
.equ	fsGetC			0x30
.equ	cpHLDE			0x33
.equ	parseArgs		0x36
.equ	printstr		0x39
.equ	_blkGetC		0x3c
.equ	_blkPutC		0x3f
.equ	_blkSeek		0x42
.equ	_blkTell		0x45
.equ	printcrlf		0x48
.equ	stdioReadC		0x4b
.equ	stdioGetLine	0x4e
.equ	blkGetC			0x51
.equ	blkSeek			0x54
