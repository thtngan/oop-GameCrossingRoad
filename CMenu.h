#pragma once
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <windows.h>
#include <conio.h>


using namespace std;

#include "CButton.h"
#include "CConsole.h"
#include "CMap.h"
#include "CObject.h"
#include "CConsole.h"
class CMenu
{
private:
	CMap map;
public:
	CMenu() = default;
	~CMenu() = default;

	void menu();
};

