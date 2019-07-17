#pragma once
#include "VertretungsplanCPP.h"

class Stunde
{
public:
	Stunde();
	~Stunde();
};


class Vertretungsstunde : private Stunde
{
public:
	Vertretungsstunde();
	~Vertretungsstunde();
};