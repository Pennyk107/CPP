#pragma once
#include "stdafx.h"
#include "Seller.h"
#include "Color.h"
#include <iostream>
#include <tchar.h>
#include <conio.h>
#include <stdlib.h>

#include <string>
#include <fstream>
#include <time.h>
#include <iosfwd>
#include <vector>

int count1;
//vector <Table>:: iterator iter;
vector <Table> Seller::tables; 
Table Seller::table=Table();
Color * color= &Seller::table;
//Furniture Seller::furniture=Furniture();
int Seller::CountTable = 0;
int Seller:: test=2;
int Seller:: lang=2;

using namespace std;

 bool Seller:: order_ru(){  
	// Seller my_seller;
	//Color *color;

	ifstream file, f;
	string val_Vendor; 
	string val_Material;
	string val_name;	
    int val_Width;
	int val_Num;
	int val_Length;
	int val_Height;
	string val_state;
	string val_colors;
	string line;
		std::cout << "Придумайте название модели стола" << std::endl;
		std::cin >> table.name;		
		int a;
		string Vendors[6] = {"Россия","Беларусь","Венгрия","Польша","Болгария","Англия"};
 		std::cout<<"Введите страну-производителя:" << std::endl;
		for (int i = 0; i < 6; i++){
			std::cout << i+1 << " - " << Vendors[i] << std::endl;
		}
		cin >>a;
		if (a > 0 && a < 7){
			table.Set_Vendor(Vendors[a-1]);
		}		
		else{ 
			std::cout << "Ошибка выбора. Повторите ввод" << std::endl;
			_getch();
			return false;
		}
		system("cls");
									
						
		a = 0;
		string Materials[6] = {"Стекло","Стекло_металл","Дерево_металл","Дерево","Металл","Пластик"};
		std::cout << "Выберите материал стола: " << std::endl;
		for (int i = 0; i < 6; i++){
			std::cout << i+1 << " - " << Materials[i] << std::endl;
		}
		cin >>a;
		if (a > 0 && a < 7){
			table.Set_Material(Materials[a-1]);
		}		
		else{ 
			std::cout << "Ошибка выбора. Повторите ввод" << std::endl;
			_getch();
			return false;
		}
		system("cls");
			std::cout<<"Введите количество ножек (1-4)"<<endl;
				cin>>Seller::table.Num;
				if (Seller::table.Num<=0 && Seller::table.Num>4 ){
					std::cout<<"Ошибка ввода."<<endl;
					return false;
				}		
		system("cls");
		std::cout << "Задайте размеры стола: " << std::endl << std::endl;
		std::cout << " -------------------"  << std::endl;
		std::cout << "|                   |" << std::endl;
		std::cout << "|                   |" << std::endl;
		std::cout << "|                   |" << std::endl;
		std::cout << " ------------------- " << std::endl;
		std::cout << "  |укажите ширину|(см) " << std::endl;
		std::cout << "   --------------    " << std::endl;
		std::cin >> Seller::table.Width;
		if (Seller::table.Width < 0 && Seller::table.Width > 400){
			std::cout << "Ошибка указания размеров стола." <<endl;	
			_getch();
			return false;
			}		
		system("cls");	
		std::cout << " -------------------"  << std::endl;
		std::cout << "|                   |" << std::endl;
		std::cout << "|                   |  |укажите длину|(см)" << std::endl;
		std::cout << "|                   |   --------------" << std::endl;
		std::cout << " ------------------- " << std::endl;
		std::cin >> Seller::table.Length;
		if (Seller::table.Length < 0 && Seller::table.Length > 300){
			std::cout << "Ошибка указания размеров стола." <<endl;
			_getch();
			return false;
			}
		system("cls");
		std::cout << "---------------------"  << std::endl;
		std::cout << "||                 ||" << std::endl;
		std::cout << "|                   |  |укажите высоту|(см)" << std::endl;
		std::cout << "|                   |   --------------" << std::endl;
		std::cin >> Seller::table.Height;
		if (Seller::table.Height < 0 && Seller::table.Height > 150){
			std::cout << "Ошибка указания размеров стола." <<endl;
			return false;
			_getch();
			}
		system("cls");
		
		Seller::table.choose_color_ru();


		std::cout << "Какое количество столов желаете заказать?" << std::endl;
		std::cin >> count1;
		for (int i = 0; i < count1; i++)
		{
		Table my_table(table.name,table.GetVendor(),table.GetMaterial(),table.Num, table.Height,table.Width,table.Length, table.state, table.colors);

		tables.push_back(my_table);
		}
		return true;
		system("cls");	
}

			
bool Seller::Catalog_ru(){
	system("cls");
	int i=0;
	if (tables.empty())
	{
		std::cout << "Столов в наличии нет." << std::endl;
		
		_getch();
		return false;
	}
	else{
		//cout<<tables[0]<<endl;
		//cout<<tables[1]<<endl;
		_getch();
			/*for (iter = tables.begin(); iter != tables.end(); ++iter)
        cout<<iter->tables[i]<<endl;*/
		for (i = 0; i < tables.size(); i++)
		{
			std::cout << Seller::tables.at(i) << std::endl;
		}
		_getch();
		return true;
		}
}
bool Seller::Catalog_en(){
	system("cls");
	if (tables.empty())
	{
		std::cout << "Tables not available" << std::endl;		
		_getch();
		return false;
	}
	else{
		for (int i = 0; i < tables.size(); i++)
		{
			std::cout << tables[i] << std::endl;
		}
		_getch();
		return true;
		}

}

bool Seller::sell_table_ru(){
	string TableName;
	if (tables.empty()){
		system("cls");
		std::cout << "Каталог пуст!" << std::endl;
		_getch();
		return false;
	
	}
	
	if (Seller::test == '13'){
		if(Seller::lang==1){
			Seller::Catalog_ru();
		}
		if (Seller::lang==2){
			Seller::Catalog_en();
		}
	}
	std::cout << "Введите название стола: ";
	std::cin >> TableName;
	for (int i = 0; i <= Seller::tables.size(); i++)
	{
		if (Seller::tables[i].name == TableName){
			Seller::tables.erase(tables.begin()+i);
			CountTable++;
			cout<<"Поздравляем с покупкой!"<<endl;
			_getch();
			return true;
		}
		
		
			
	}
	std::cout<<"Стола с таким названием не существует"<<endl;
			_getch();
			return false;
}
bool Seller::CountDown_ru(){
	fstream fp("count.txt");
	if (fp.is_open()){
	system("cls");
	fp<< "В наличии: " << Seller::tables.size()<< std::endl;
	fp<< "За сегодня продано: "<< Seller::CountTable << std::endl;
	std::cout << "В наличии: " << Seller::tables.size()<< std::endl;
	std::cout << "За сегодня продано: "<< Seller::CountTable << std::endl;
	_getch();
	return true;
	}
	else{
		cout<<"Ошибка открытия файла"<<endl;
		_getch();
		return false;
	}

}

bool Seller::Perimetr_ru(){
	if (Seller:: tables.empty()){
		system("cls");
		cout << "Невозможно расчитать периметр стола. Столы отсутсвуют!" << endl;
		_getch();
		return false;
	}
	std::cout << "Введите название стола: " << std::endl;
	string TableName2;
	double PerimeterResult;
	std::cin >> TableName2;
	for (int i = 0; i < Seller::tables.size(); i++)
	{
		if (Seller::tables[i].name == TableName2){
			Seller::tables[i].Perimetr = (Seller::tables[i].Height+Seller::tables[i].Width)*2;
			std::cout << std::endl << "Периметр Вашего стола равен: " << Seller::tables[i].Perimetr <<std::endl << std::endl; 
			_getch();
			return true;
		}		
	}
	std::cout<<"Стола с таким названием не существует"<<endl;
			_getch();
			return false;	
}

	

 bool Seller::order_en(){  
	 Seller my_seller;
	
	ifstream file, f;
	string val_Vendor; 
	string val_Material;
	string val_name;	
    int val_Width;
	int val_Num;
	int val_Length;
	int val_Height;
	string val_state;
	string val_colors;
	string line;
	
		std::cout << "Come up with a table model name" << std::endl;
		std::cin >> table.name;
		
		int a;
		string Vendors[6] = {"Russia","Belarus","Hungary","Poland","Bulgary","UK"};
 		std::cout<<"Enter country of origin:" << std::endl;
		for (int i = 0; i < 6; i++){
			std::cout << i+1 << " - " << Vendors[i] << std::endl;
		}
		cin >>a;
		if (a > 0 && a < 7){
			table.Set_Vendor(Vendors[a-1]);
		}		
		else{ 
			std::cout << "Selection error. Retype" << std::endl;
			return false;
		}
		system("cls");
									
						
		a = 0;
		string Materials[6] = {"Glass","Glass_metal","Three_metal","Three","Metall","Plastic"};
		std::cout << "Select table material: " << std::endl;
		for (int i = 0; i < 6; i++){
			std::cout << i+1 << " - " << Materials[i] << std::endl;
		}
		cin >>a;
		if (a > 0 && a < 7){
			table.Set_Material(Materials[a-1]);
		}		
		else{ 
			std::cout << "Selection error. Retype" << std::endl;
			return false;
		}
		system("cls");
			std::cout<<"Enter the number of legs (1-4)"<<endl;
				cin>>Seller::table.Num;
				if (Seller::table.Num<=0 && Seller::table.Num>4 ){
					std::cout<<"Input Error"<<endl;
					return false;
				}		
		system("cls");
		std::cout << "Set the table dimensions: " << std::endl << std::endl;
		std::cout << " -------------------"  << std::endl;
		std::cout << "|                   |" << std::endl;
		std::cout << "|                   |" << std::endl;
		std::cout << "|                   |" << std::endl;
		std::cout << " ------------------- " << std::endl;
		std::cout << "  |specify the width|(cm) " << std::endl;
		std::cout << "   --------------    " << std::endl;
		std::cin >> Seller::table.Width;
		if (Seller::table.Width < 0 && Seller::table.Width > 400){
			std::cout << "Error specifying table dimensions." <<endl;			
			return false;
			}		
		system("cls");	
		std::cout << " -------------------"  << std::endl;
		std::cout << "|                   |" << std::endl;
		std::cout << "|                   |  |specify the length|(cm)" << std::endl;
		std::cout << "|                   |   --------------" << std::endl;
		std::cout << " ------------------- " << std::endl;
		std::cin >> Seller::table.Length;
		if (Seller::table.Length < 0 && Seller::table.Length > 300){
			std::cout << "Error specifying table dimensions." <<endl;
			return false;
			}
		system("cls");
		std::cout << "---------------------"  << std::endl;
		std::cout << "||                 ||" << std::endl;
		std::cout << "|                   |  |specify the height|(cm)" << std::endl;
		std::cout << "|                   |   --------------" << std::endl;
		std::cin >> Seller::table.Height;
		if (Seller::table.Height < 0 && Seller::table.Height > 150){
			std::cout << "Error specifying table dimensions." <<endl;
			return false;
			}
		system("cls");		
		Seller::table.choose_color_en();
		std::cout << "How many tables would you like to order?" << std::endl;
		std::cin >> count1;
		for (int i = 0; i < count1; i++)
		{
		Table my_table(table.name,Seller::table.GetVendor(),Seller::table.GetMaterial(), Seller::table.Num, Seller::table.Height,Seller::table.Width,Seller::table.Length, Seller::table.state, Seller::table.colors);
    	tables.push_back(my_table);
		}
		return true;
		system("cls");	 
}



bool Seller::sell_table_en(){
	system("cls");
	string TableName;
	if (tables.empty()){
	
		std::cout << "The directory is empty!" << std::endl;
		_getch();
		return false;
	
	}
	std::cout << "Open directory?" << std::endl;
	int key = _getch();
	
	if (key == 13){
		Seller::Catalog_en();
	}
	std::cout << "Enter table name: ";
	std::cin >> TableName;
	for (int i = 0; i <= tables.size(); i++)
	{
		if (tables[i].name == TableName){
			tables.erase(tables.begin()+i);
			CountTable++;
			cout<<"Congratulations on your purchase!"<<endl;
			_getch();
			return true;
		}
	}
}
bool Seller::CountDown_en(){
	ofstream fp("count.txt", ios::app);
	if (fp.is_open()){
	system("cls");
	fp << "In stock: " << tables.size()<< std::endl;
	fp << "Sold today: "<<CountTable << std::endl;
	std::cout << "In stock: " << tables.size()<< std::endl;
	std::cout << "Sold today: "<<CountTable << std::endl;
	_getch();
	return true;
	}
	else{
		std::cout<<"File open error"<<endl;
		return false;
	}

}

bool Seller::Perimetr_en(){
	system("cls");
	if ( tables.empty()){
		system("cls");
		cout<<"Unable to calculate table perimeter. There are no tables!"<<endl;
		_getch();
		return false;
	}
	std::cout << "Enter table name: " << std::endl;
	string TableName2;
	double PerimeterResult;
	std::cin >> TableName2;
	for (int i = 0; i < tables.size(); i++)
	{
		if (tables[i].name == TableName2)
			tables[i].Perimetr = (tables[i].Height+tables[i].Width)*2;
			std::cout << std::endl << "The perimeter of your table is: " << tables[i].Perimetr <<std::endl << std::endl; 
			_getch();

		break;
	}
	return true;

} 
