#pragma once
#include "stdafx.h"
#include "Seller.h"
#include <iostream>
#include <tchar.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <iosfwd>


//vector <Table>:: iterator iter;
//vector <Table> tables; 
using namespace std;
	

//корр ввода +

double Table::operator++(){
	if (Seller::lang==49)
	{
	Seller:: Perimetr_ru();
	}
	if (Seller::lang==50)
	{
		Seller:: Perimetr_en();
	}
	return Perimetr;

} 



ostream& operator << (ostream &out, Table &obj){
	if (Seller::lang==49)
	{
		std::cout << std::endl << std::endl << "Название: " << obj.name << std::endl;
		std::cout << "Производитель: "<<  obj.GetVendor() << std::endl;
		std::cout << "Материал: " << obj.GetMaterial() << std::endl;
		std::cout << "Количество ножек: " << obj.Num << std::endl;
		std::cout << "Высота: " << obj.Height << std::endl;
		std::cout << "Ширина: " << obj.Width << std::endl;
		std::cout << "Длина: " << obj.Length << std::endl;
		std::cout << "Цвет: "<< obj.colors << std::endl;
		std::cout << "Тип покрытия: "<< obj.state << std::endl;
		_getch();
	}
	if (Seller::lang==50)
	{
		std::cout << std::endl << std::endl << "Name: " << obj.name << std::endl;
		std::cout << "Manufacturer: "<<  obj.GetVendor() << std::endl;
		std::cout << "Material: " << obj.GetMaterial() << std::endl;
		std::cout << "Number of legs: " << obj.Num << std::endl;
		std::cout << "Height: " << obj.Height << std::endl;
		std::cout << "Width: " << obj.Width << std::endl;
		std::cout << "Length: " << obj.Length << std::endl;
		std::cout << "Color: "<< obj.colors << std::endl;
		std::cout << "Coating type: "<< obj.state << std::endl;
		_getch();	
	}
	return out;
}


bool Table:: choose_color_ru(){
int a1;
		string Colors[6] = {"Белый","Чёрный","Красный","Бордовый","Берюзовый","Синий"};
		std::cout << "Выберите Цвет стола: " << std::endl;
		for (int i = 0; i < 6 ; i++){
			std::cout << i+1 << " - " << Colors[i] << std::endl;
		}
		cin >> a1;
		if (a1 > 0 && a1 < 7){
			Seller::table.colors = (Colors[a1-1]);
		}		
		else{ 
			std::cout << "Ошибка выбора. Повторите ввод" << std::endl;
			_getch();
			return false;
		}
		system("cls");
		std::cout << "Выберите тип материала: " << std::endl;
		std::cout << "1 - Матовый" << std::endl;
		std::cout << "2 - Глянцевый" << std::endl;
		int key10 = _getch();			
		switch (key10){		
		case '1': Seller::table.state = "Матовый";
		case '2': Seller::table.state = "Глянцевый";		
			}
}

bool Table:: choose_color_en(){
int a1;
		string Colors[6] = {"White","Black","Red","Burgundy","Turquoise","Blue"};
		std::cout << "Select Table Color: " << std::endl;
		for (int i = 0; i < 6 ; i++){
			std::cout << i+1 << " - " << Colors[i] << std::endl;
		}
		cin >> a1;
		if (a1 > 0 && a1 < 7){
			Seller::table.colors = (Colors[a1-1]);
		}		
		else{ 
			std::cout << "Selection error. Retype" << std::endl;
			return false;
		}
		system("cls");
		std::cout << "Select material type: " << std::endl;
		std::cout << "1 - Mate" << std::endl;
		std::cout << "2 - Glossy" << std::endl;
		int key10 = _getch();
		
			
		switch (key10){
		
		case '1': Seller::table.state = "Mate";

		case '2': Seller::table.state = "Glossy";
		
			}
}
		