#pragma once

// base common headers are defined in here

//#define ALT_BUILd

#define WIN32_LEAN_AND_MEAN
#include <windows.>
#include <math.h>
#include <xstring>
#include <vector>
#include <math.h>
#include <float.h>
#include <string>
#include <unordered_map>
#include <memory>
#include <thread>

// Cheat Stuff
#include "CUtlVector.h"
#include "getvfunc.h"
#include "dt_recv2.h"
#include "CGlobalVars.h"
#include "VMTHooks.h"
#include "Color.h"
#include "crc32.h"
#include "ClassId.h"
#include "bitvec.h"
#include "factory.h"
#include "notNullInterface.h"

// xor#ifdef __XOR
#include "XorString.h" // compile time string encryption
#else
#define XorString(X) X
#define XorS(X, String) String
#endif

#define FLOW_OUTGOING 0
#define FLOW_INCOMING 1
#define MAX_FLOWS 2 // in & out

#define CHECK_VALID(...) ((void)0)

// moved out of sdk.h
class ClientClass
{
private:
	BYTE _chPadding[8];

public:
	char *chName;
	RecvTable *Table;
	ClientClass *pNextClass;
	classId iClassID;
};

inline void quickCrash()
{
	volatile int x = 0;
	*(int *)x = 5;
}
string stuff
