#pragma once
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <conio.h>
#include <string>
using namespace:: std;
class Color{
public:
	string state;
	string colors;
	Color(){}
	~Color(){}
	virtual bool choose_color_ru()=0;
	virtual bool choose_color_en()=0;
	
};

