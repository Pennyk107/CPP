#pragma once
#include"stdafx.h"
#include "Seller.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdio>
#include <conio.h>
#include <string>
#include <locale.h>

using namespace std;

int main(){

	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "rus");
	int  key, key1, key_global, key_lang;
	Seller my_seller;
	std::cout<<"1-RUS"<<endl<<"2-EN"<<endl;
	Seller::lang=_getch();
	
	do{
	if (Seller::lang==49){
		system("cls");
	ifstream fp("title_page_ru.txt");
	if (!fp.is_open()){
		cout<<"Ошибка открытия файла"<<endl;
		_getch();
		return 1;
	}
		
		
		string line;
		 while (getline(fp, line)){     
			 cout << line<< std::endl;
		 }
	}
	
	if (Seller::lang==50){
		system("cls");
	ifstream fp("title_page_en.txt");
	if (!fp.is_open()){
		cout<<"Ошибка открытия файла"<<endl;
		_getch();
		return 1;
	}

	string line;
	 while (getline(fp, line)){     
		 cout << line<< std::endl;
        }	 
	}
	 key=_getch();
	switch(key){

	case 13:
		do{	
			system("cls");
			Seller::test=_getch();
			if(Seller::test==9){
				system("cls");
				cout<<"1-RUS"<<endl<<"2-EN"<<endl;
				Seller::lang=_getch();
			}
			if (Seller::lang==49){
				system("cls");
				cout<<"1-Открыть каталог"<<endl;          
				cout<<"2-Добавить модель в каталог"<<endl;
				cout<<"3-Купить готовый стол"<<endl;      
				cout<<"4-Произвести расчеты стола"<<endl; 
				cout<<"5-Отчет о количестве"<<endl;
			}
			if(Seller::lang==50){
				system("cls");
				cout<<"1-Open catalog"<<endl;
				cout<<"2-Book a table"<<endl;
				cout<<"3-Buy a finished table"<<endl;
				cout<<"4-Make table calculations"<<endl;
				cout<<"5-Quantity report"<<endl;
			}
			 key1=_getch();
			switch (key1){
				case 49:
					Seller::test=_getch();
					if(Seller::test==9){
						system("cls");
						std::cout<<"1-RUS"<<endl<<"2-EN"<<endl;
						Seller::lang=_getch();
					}
					if(Seller::lang==49)
					{					
						my_seller.Catalog_ru(); 
					}
					if(Seller::lang==50)
					{
						my_seller.Catalog_en();
					}

					break;
				case '2': 
					Seller::test=_getch();
					if(Seller::test==9){
						std::cout<<"1-RUS"<<endl<<"2-EN"<<endl;
						Seller::lang=_getch();
					}
					if(Seller::lang==49)
					{	
						my_seller.order_ru();
					}
					if (Seller::lang==50)
					{
						my_seller.order_en();
					}
					break;
				case '3':
					Seller::test=_getch();
					if(Seller::test==9){
						std::cout<<"1-RUS"<<endl<<"2-EN"<<endl;
						Seller::lang=_getch();
					}
					if(Seller::lang==49)
					{	
						my_seller.sell_table_ru();
					}
					if (Seller::lang==50)
					{
						my_seller.sell_table_en();
					}
					break;
					
				case '4':
						Seller::test=_getch();
					if(Seller::test==9){
						std::cout<<"1-RUS"<<endl<<"2-EN"<<endl;
						Seller::lang=_getch();
					}
					if(Seller::lang==49)
					{	


						//my_seller.table++;
						break;
					}
					if (Seller::lang==50)
					{							
						//my_seller.table++;
						break;
					}
					break;
				case '5':
						Seller::test=_getch();
					if(Seller::test==9){
						std::cout<<"1-RUS"<<endl<<"2-EN"<<endl;
						Seller::lang=_getch();
					}
					if(Seller::lang==49)
					{	
						my_seller.CountDown_ru();
						break;
					}
					if (Seller::lang==50)
					{
						my_seller.CountDown_en();
						break;
					}
					break;				
			}
		}
		while(key1!=27);
		break;
	case 48:
		system("cls");
		std::cout<<"Выберите локализации:"<<endl<<"1-RUS"<<endl<<"2-EN"<<endl;
		Seller::lang=_getch();
		if (Seller::lang=='1'){
		system("cls");
	ifstream fp("about_programm.ru.txt", ios::app);
	string line;
	 while (getline(fp, line)){     
		 cout << line<< std::endl;
        }
	 cout<<"ESC-выход"<<endl;
	_getch();
	 system("cls");
	 break;
	}
		if (Seller::lang=='2'){
		system("cls");
	ifstream fp("about_programm.en.txt", ios::app);
	string line;
	 while (getline(fp, line)){     
		 cout << line<< std::endl;
        }
	 cout<<"ESC-exit"<<endl;

	_getch();
	 system("cls");
	 break;
	}
		break;
	case 57:
		system("cls");
		std::cout<<"Выберите локализации:"<<endl<<"1-RUS"<<endl<<"2-EN"<<endl;
		Seller::lang=_getch();
		if (Seller::lang=='1'){
		system("cls");
	ifstream fp("about_autor.ru.txt", ios::app);
	string line;
	 while (getline(fp, line)){     
		 cout << line<< std::endl;
        }
	 cout<<"ESC-выход"<<endl;
	_getch();
	 system("cls");
	 break;
	}
		if (Seller::lang=='2'){
		system("cls");
	ifstream fp("about_autor.en.txt", ios::app);
	string line;
	 while (getline(fp, line)){     
		 cout << line<< std::endl;
        }
	 cout<<"ESC-exit"<<endl;
	_getch();
	 system("cls");
	 break;
	}
	
		break;
	case 9:
		system("cls");
		std::cout<<"Выберите локализации:"<<endl<<"1-RUS"<<endl<<"2-EN"<<endl;
		Seller::lang=_getch();
		break;
	}
	}
	while(key!=27);
	
	system("pause");
	return 0;
}


