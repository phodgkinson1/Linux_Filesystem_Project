#ifndef DIRECTORY_ENTRY_H
#define DIRECTORY_ENTRY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fsLow.h"
#include <sys/types.h>

#define DIR_NAME_LEN 32
#define DEFAULT_ENTRIES 50

extern int rootGlobal;

typedef struct DE
{
	char fileName[DIR_NAME_LEN];
	int extentBlockStart;
	int fileSize;
	time_t createdTime;
	time_t modifiedTime;
	time_t lastAccessedTime;
	int extentIndex;
	// isDirectory already does checking for file or directory =1 or 0
	char isDirectory;
} DE;

// Initialize a new directory
int initDir(int defaultEntries, DE *parent, int parentIndex);

#endif // DIRECTORY_ENTRY_H
