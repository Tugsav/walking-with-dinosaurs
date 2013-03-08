#ifndef GRAMMAR_H
#define GRAMMAR_H

#define NULL 0

#include "btBulletDynamicsCommon.h"
#include "Physics.h"
enum{pressure, angel, light};
#define sucecs 0
#define fail -1

#define maxHeight 10
#define maxWidth 10
#define maxDepth 10
#define maxBlocks 30
struct Joint{
	btVector3 degreesOfFreedom;
	//pre/post vec = x,y,side
	btVector3 pre;
	btVector3 post;
	int length;

};

struct Part {
	int id;
	int height, width, depth;
	Part  *parts;
	Joint* joint;
	int sensor;
};
Part *body;

int B(int index, const int* DNA, Physics *world, int *blocks, int part);
int J(int index, const int* DNA, Physics *world, int *blocks, int part1);
int readDNA(const int* DNA, Physics *world);

#endif
