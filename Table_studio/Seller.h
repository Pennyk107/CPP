# pragma once
#include "stdafx.h"
#include "Table.h"
#include <iostream>
#include <tchar.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <vector>
#include <iosfwd>

//static int lang;
//static int test;
using namespace std;

class Seller
{

public:
	static int lang;
	static int test;
	static int CountTable;
	static Table table;	
	static vector <Table> tables;
	Seller() {};
	~Seller() {};
static bool Perimetr_ru();
static bool Perimetr_en();
static bool sell_table_ru();
static bool sell_table_en();
static bool order_ru();
static bool order_en();
static bool Catalog_ru();
static bool Catalog_en();
static bool CountDown_ru();
static bool CountDown_en();
};