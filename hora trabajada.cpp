#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

main(){
	int hora,total;
       cout<<"Digite el numero de horas trabajadas"<<endl;
       cin>>hora;
       if(hora>40){
                   total=(((((hora-40)*20)+40)*20));
                    cout<<"Usted gana:"<<total<<endl;
                    
                    }
                    else{
                         cout<<"Usted gana:"<<hora*16<<endl;
                         }
                         getch();
                         }
                         
