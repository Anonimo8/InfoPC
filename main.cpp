#include <iostream>
#include<conio.h>
#include<windows.h>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
/*
	Name: InfoPC
	Copyright: tomZ INC
	Author: tomZ
	Date: 17/08/20 22:26
	Date of updated: 26/08/20 11:33 ARG
	Description: Data breach Info PC
*/

		system("title InfoPC by tomZ");
	system("color a");
	

system("E:");
system("mkdir InfoSystem");
system("systeminfo > E:/InfoSystem/sysinfo.txt "); system("cls");
system("whoami > E:/InfoSystem/whoami.txt ") ;
system("driverquery > E:/InfoSystem/driverquery.txt ");
system("ipconfig/all > E:/InfoSystem/ipconfig_all.txt ");
system("net view > E:/InfoSystem/net_view.txt "); system("cls");
system("sc query > E:/InfoSystem/sc_query.txt ");
system("tasklist > E:/InfoSystem/tasklist.txt"); //Agregar mas abajo
system("ver > E:/InfoSystem/ver.txt"); //Agregar mas abajo
system("netstat -ao > E:/InfoSystem/netstat_ao.txt"); //Agregar mas abajo
system("ipconfig/displaydns > E:/InfoSystem/display_dns.txt"); //Agregar mas abajo
system("getmac > E:/InfoSystem/getmac.txt");
system("netstat > E:/InfoSystem/netstat.txt");
								
								
								system("cls");
								
								
				fflush(stdin);			

system("D:");	
system("mkdir InfoSystem");
system("systeminfo > D:/InfoSystem/sysinfo.txt "); system("cls");
system("whoami > D:/InfoSystem/whoami.txt ") ;
system("driverquery > D:/InfoSystem/driverquery.txt ");
system("ipconfig/all > D:/InfoSystem/ipconfig_all.txt ");
system("net view > D:/InfoSystem/net_view.txt ");
system("sc query > D:/InfoSystem/sc_query.txt ");
system("tasklist > D:/InfoSystem/tasklist.txt"); //Agregar mas abajo
system("ver > D:/InfoSystem/ver.txt"); //Agregar mas abajo
system("netstat -ao > D:/InfoSystem/netstat.txt"); //Agregar mas abajo
system("ipconfig/displaydns > D:/InfoSystem/display_dns.txt");
system("getmac > D:/InfoSystem/getmac.txt");
system("netstat > D:/InfoSystem/netstat.txt");

								
				
		system("cls");
				
system("F:");
system("mkdir InfoSystem");
system("systeminfo > F:/InfoSystem/sysinfo.txt "); system("cls");
system("whoami > F:/InfoSystem/whoami.txt ") ;
system("driverquery > F:/InfoSystem/driverquery.txt ");
system("ipconfig/all > F:/InfoSystem/ipconfig_all.txt ");
system("net view > F:/InfoSystem/net_view.txt ");
system("sc query > F:/InfoSystem/sc_query.txt ");
system("tasklist > F:/InfoSystem/tasklist.txt"); //Agregar mas abajo
system("ver > F:/InfoSystem/ver.txt"); //Agregar mas abajo
system("netstat -ao > F:/InfoSystem/netstat.txt"); //Agregar mas abajo
system("ipconfig/displaydns > F:/InfoSystem/display_dns.txt");
system("getmac > F:/InfoSystem/getmac.txt");
system("netstat > F:/InfoSystem/netstat.txt");
						
						cout<<"\n\n";
						
	cout<<"Name: InfoPC"<<endl;
	cout<<"Copyright: tomZ INC"<<endl;
	cout<<"Author: tomZ"<<endl;
	cout<<"Date of creation: 17/08/20 22:26"<<endl;
	cout<<"Date of updated: 20/08/20 18:01"<<endl;
	cout<<"Description: Data breach for PC"<<endl;


		

	return 0;
}
