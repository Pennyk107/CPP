#pragma once
#include "stdafx.h"
#include <iostream>
#include <tchar.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <iosfwd>
#include "Furniture.h"
#include "Color.h"
#include <string>

//static vector <Table> tables;
using namespace  std;




class Table : public Furniture, public Color {
public:
	string name;
	int Num;
	int Height;
	int Width;
	int Length;
	double Perimetr;
	Table(){};
	Table(string &val_name,string &val_Vendor,string &val_Material, int &val_Num, int &val_Height, int &val_Width, int &val_Length, string &val_state, string &val_colors){ 		  
		
		name = val_name;
		Set_Vendor(val_Vendor);
		Set_Material(val_Material);
		Num=val_Num;
		Height= val_Height;
		Width=val_Width;
		Length=val_Length;
		Color::state=val_state;
		Color::colors=val_colors;
		    	
	}
	bool choose_color_ru() override;
	bool choose_color_en() override;
	
	~Table(){}
		
	double operator++();
	friend ostream& operator<< (ostream &out, Table &obj);
};
