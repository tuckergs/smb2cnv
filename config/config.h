#ifndef CONFIG_H
#define CONFIG_H

#include <stdio.h>
#include <string.h>

typedef struct
{
	float posx;
	float posy;
	float posz;
	float rotx;
	float roty;
	float rotz;
} start;

typedef struct
{
	float posx;
	float posy;
	float posz;
	float rotx;
	float roty;
	float rotz;
	int type;
} goal;

typedef struct
{
	float posx;
	float posy;
	float posz;
	float rotx;
	float roty;
	float rotz;
	float sclx;
	float scly;
	float sclz;
} bumper;

typedef struct
{
	float posx;
	float posy;
	float posz;
	int type;
} banana;

typedef struct
{
	unsigned char posx;
	unsigned char posy;
	unsigned char posz;
	unsigned char rotx;
	unsigned char roty;
	unsigned char rotz;
} mvmttype;

typedef struct
{
	float posx;
	float posy;
	float posz;
	float rotx;
	float roty;
	float rotz;
	float time;
	mvmttype mt;
} frame;

typedef struct
{
	float posx;
	float posy;
	float posz;
} center;

#define MAXANIMOBJS 80
#define MAXFRAMESPEROBJ 256

extern int startCount;
extern int goalCount;
extern int bumperCount;
extern int bananaCount;
extern int ignoreCount;
extern int animCount;
start starts[16];
goal goals[16];
bumper bumpers[16];
banana bananas[16];
float fallOutPlane;
char ignoreList[80][80];
char animList[MAXANIMOBJS][80];
int animFrameCount[MAXANIMOBJS];
frame animFrame[MAXANIMOBJS][MAXFRAMESPEROBJ];
center animCenter[MAXANIMOBJS];



void parseConfig(char * configpath);

#endif
