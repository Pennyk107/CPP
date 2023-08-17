#pragma once 
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <iosfwd>
#include <string>
#include <vector>
using namespace std;
class Furniture{
protected:
	//string Vendor; 
	string Matårial;
	string Våndor;
public:
																																																															string Vendor; string Material;	
void Set_Material(string line){
		  this->Material=line;
	 }
	string GetMaterial(){
		return this->Material;
	 }
	 void Set_Vendor(string line){
		  this->Vendor=line;
	 }
	 string GetVendor(){
		 return this->Vendor;
	 }
	Furniture() {};
	~Furniture() {};
	Furniture(char* val_Vendor, char* val_Material){
		Vendor=val_Vendor;
		Material=val_Material;
	}
	
};
		
	
