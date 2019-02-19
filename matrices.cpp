#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

main (){
     int a;
     cin>>a;
     int i, j;
     
    int b[200][200];
    int e[200][200];
    int suma[200][200];
     
     for (i=0;i<a;i++){
         
         for(j=0;j<a;j++){
                           cout<<"Introduzca el termino"<<i<<","<<j<<"=";
                           cin>>b[i][j];
                           
                           }
                           }
                           for (i=0;i<a;i++){
         
                               for(j=0;j<a;j++){
                                                 
                           cout<<b[i][j];
                           
                           }
                           cout<<endl;
                           }
                                 for (i=0;i<a;i++){
         
                                 for(j=0;j<a;j++){
                                                  
                           cout<<"Introduzca el termino"<<i<<","<<j<<"=";
                           cin>>e[i][j];
                           
                           }
                           }
                           for (i=0;i<a;i++){
         
                               for(j=0;j<a;j++){
                                                 
                           cout<<e[i][j];
                           
                           }
                           cout<<endl;
                           }  
                           
                           for(i=0;i<a;i++){
                                            
                                            for(j=0;j<a;j++){
                           
                           suma[i][j] = b[i][j] + e[i][j];
                             
                           cout<<suma[i][j]<<endl;
                           }
                           }
                           getch();
                           
                           
                           }
                           
