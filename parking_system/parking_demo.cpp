//Max parking available for Taxi=20
//Max parking available for car=20
//Max parking available for Bus=10
//Max parking available for Other vechile=10
//Max parking available for vechiles=60
//charge for A taxi Rs 100
//charge for A car Rs 300
//charge for A bus Rs 500
//charge for A other type vechile Rs 500





#include <iostream>
//#include<conio>
#include<windows.h>
#include<stdlib.h>
#include<unistd.h>

using namespace std;


int main()
{
	int  U_input,Menu_input;
	int c1;
	int amount=0,count=0,choice;
	int taxi_count=0;
	int car_count=0;
	int bus_count=0;
	int other_count=0;
	
	if(count<60){
	

		
	mainhome:
	
	cout<<"\t\t\t@@@****Menu*****@@@ "<<endl;//menu
	cout<<"\t\t\tPree 1 to park a vechile"<<endl;
	cout<<"\t\t\tPress 2 to show the record "<<endl;
	cout<<"\t\t\tPress 3 to delete the record "<<endl;
	cout<<"\t\t\tPress 4 to exit"<<endl;
 
	cout<<"\t\t\t\t";
	cin>>Menu_input;
	system("cls");
	if(Menu_input==1){
	//	system("cls");
	push:
	cout<<"\t\t\tPress 1 for Taxi "<<endl;
	cout<<"\t\t\tPress 2 for Car "<<endl;
	cout<<"\t\t\tPress 3 for Bus "<<endl;
	cout<<"\t\t\tPress 4 for other Type vechile "<<endl;
    cout<<"\t\t\t\t";
	cin>>U_input;
	system("cls");
	if(U_input==1)
     {
     	//system("cls");
     	if(taxi_count<20)
		{
		
		amount+=100;
		taxi_count++;
		count++;
		//cout<<"\t\t\tGive your details"<<endl;
		cout<<"\t\t\tYour taxi is parked successfully"<<endl;
	}
	else
	{
		
		cout<<"\t\t\tSorry!!!   Parking For Taxi is Full"<<endl;
		goto mainhome;
	}
	
	cout<<"\t\t\tEnter 1 if u want to park any other veichleor Press other key to go to main menu"<<endl;
	cout<<"\t\t\t\t";
	cin>>c1;
	if(c1==1){
	system("cls");
	goto push;
}
		else
		{
			cout<<"\t\t\t wait we are moving towards main menu"<<endl;
			sleep(5);
		system("cls");
		goto mainhome;
	}
	
	}
 else if(U_input==2)
	{
		if(car_count<20){
		
		amount+=300;
		car_count++;
		count++;
		cout<<"\t\t\tYour car is parked successfully"<<endl;
	}
			else
	{
		
		cout<<"\t\t\tSorry!!!   Parking For Car is Full"<<endl;
		
		goto mainhome;
	}
	
	cout<<"\t\t\tEnter 1 if u want to park any other veichleor Press other key to go to main menu"<<endl;
			cout<<"\t\t\t";
	cin>>c1;
			
	if(c1==1){
	system("cls");
	goto push;}
		else{
			cout<<"\t\t\t wait we are moving towards main menu"<<endl;
			sleep(5);
		system("cls");
		goto mainhome;
}
	
	}
	
 else	if(U_input==3)
	{
		if(bus_count<10){
		
		amount+=500;
		bus_count++;
		count++;
		cout<<"\t\t\tYour Bus is parked successfully"<<endl;
	}
		else
	{
		
		cout<<"\t\t\tSorry!!!   Parking For Taxi is Full"<<endl;
		goto mainhome;
	}
	
cout<<"\t\t\tEnter 1 if u want to park any other veichle"<<endl;
		cout<<"\t\t\t";
	cin>>c1;
	if(c1==1){
	system("cls");
	goto push;}
		else{
			cout<<"\t\t\t wait we are moving towards main menu"<<endl;
			sleep(5);
		system("cls");
		goto mainhome;
}
	
	}
else	if(U_input==4)
	{
		if(other_count<10){
		
		amount+=500;
		other_count++;
		count++;
		cout<<"\t\t\tYour vechile is parked successfully"<<endl;
	}	else
	{
		
		cout<<"\t\t\tSorry!!!   Parking For Taxi is Full"<<endl;
		goto mainhome;
	}
	
	cout<<"\t\t\tEnter 1 if u want to park any other veichle or Press other key to go to main menu"<<endl;
			cout<<"\t\t\t";
	cin>>c1;
	if(c1==1){
	system("cls");
	goto push;}
		else{
			cout<<"\t\t\t wait we are moving towards main menu"<<endl;
			sleep(5);
		system("cls");
		goto mainhome;
}
	
	}
	else
	{
		cout<<"\t\t\tYou have pressed a wrong button !!! "<<endl;
		cout<<"\t\t\tEnter 1 if u want to enter again"<<endl;
		cout<<"\t\t\t";
	cin>>c1;
	if(c1==1){
	system("cls");
	goto push;}
		else{
			cout<<"\t\t\tWrong option back to main menu!! wait we are moving towards main menu"<<endl;
			sleep(5);
		system("cls");
		goto mainhome;
}
	}
}
else 	if(Menu_input==2)
	{
		cout<<"\t\t\tToal required amount for the parking is Rs. "<<amount<<"/-only"<<endl;
		cout<<"\t\t\tToal number of parked vechile is "<<count<<endl;
		int C;
		cout<<"\t\t\tEnter 1 if u want to see The parked vechile details "<<endl;
		cout<<"\t\t\t";
		cin>>C;
		if(C==1)
		{
			cout<<"\t\t\tTotal parked Taxi="<<taxi_count<<endl;
			cout<<"\t\t\tTotal parked car="<<car_count<<endl;
			cout<<"\t\t\tTotal parked Bus="<<bus_count<<endl;
			cout<<"\t\t\tTotal parked Other vechile="<<other_count<<endl;
		}
		else
		{
		cout<<"\t\t\tWrong option back to main menu!! wait we are moving towards main menu"<<endl;
			sleep(5);
			system("cls");
			goto mainhome;
		}
	}
  else	if(Menu_input==3)
	{
		pop:
		if(count>0)
		{
			cout<<"\t\t******Currently parking status*******"<<endl;
			cout<<"\t\t\tToal number of parked vechile is "<<count<<endl<<"\t\t\tAnd their details "<<endl;
			cout<<"\t\t\tTotal parked Taxi="<<taxi_count<<endl;
			cout<<"\t\t\tTotal parked car="<<car_count<<endl;
			cout<<"\t\t\tTotal parked Bus="<<bus_count<<endl;
			cout<<"\t\t\tTotal parked Other vechile="<<other_count<<endl;
			cout<<"\t\t\t____________________________________________________"<<endl;
			cout<<"\t\t*****Now Temove Your Veichle*****"<<endl;
			cout<<"\t\t\tEnter The vechile details you want to remove:-"<<endl;
				cout<<"\t\t\tPress 1 to remove A Taxi "<<endl;
	cout<<"\t\t\tPress 2 to remove A Car "<<endl;
	cout<<"\t\t\tPress 3 to remove A Bus "<<endl;
	cout<<"\t\t\tPress 4 to remove other Type vechile "<<endl;
	int remove_choice;
	cout<<"\t\t\t";
	cin>>remove_choice;
	if(remove_choice==1)
	{
		if(taxi_count>0){
		
		cout<<"Taxi is removed"<<endl;
		count--;
		taxi_count--;
		amount-=100;
	}
	else
	{
		cout<<"\t\t\tNo taxi available currently in parking!!!"<<endl;
			cout<<"\t\t\t wait we are moving towards previous menu"<<endl;
			sleep(5);
			system("cls");
			goto pop;
	}
	cout<<"\t\t\tEnter 1 if u want to remove any other veichle"<<endl;
	cout<<"\t\t\t\t";
	cin>>c1;
	if(c1==1){
	system("cls");
	goto pop;
}
		else
		{
			cout<<"\t\t\twait we are moving towards main menu"<<endl;
			sleep(5);
		system("cls");
		goto mainhome;
	}
	}
	else	if(remove_choice==2)
	{
		if(car_count>0){
		
		cout<<"car is removed"<<endl;
		count--;
		car_count--;
		amount-=300;
	}
	else
	{
		cout<<"No  Car available currently in parking!!!"<<endl;
		cout<<"\t\t\t wait we are moving towards previous menu"<<endl;
			sleep(5);
			system("cls");
			goto pop;
	}
	cout<<"\t\t\tEnter 1 if u want to remove any other veichle"<<endl;
	cout<<"\t\t\t\t";
	cin>>c1;
	if(c1==1){
	system("cls");
	goto pop;
}
		else
		{
			cout<<"\t\t\tWrong option back to main menu!! wait we are moving towards main menu"<<endl;
			sleep(5);
		system("cls");
		goto mainhome;
	}
	}
	else	if(remove_choice==3)
	{
		if(bus_count>0){
		
		cout<<"Bus is removed"<<endl;
		count--;
		bus_count--;
		amount-=500;
	}
	else
	{
		cout<<"No Bus available currently in parking!!!"<<endl;
		cout<<"\t\t\t wait we are moving towards previous menu"<<endl;
			sleep(5);
			system("cls");
			goto pop;
	}
	cout<<"\t\t\tEnter 1 if u want to remove any other veichle"<<endl;
	cout<<"\t\t\t\t";
	cin>>c1;
	if(c1==1){
	system("cls");
	goto pop;
     }
		else
		{
			cout<<"\t\t\tWrong option back to main menu!! wait we are moving towards main menu"<<endl;
			sleep(5);
		system("cls");
		goto mainhome;
	}
	}
		

if(remove_choice==4)
	{
		if(other_count>0){
		
		cout<<"vechile is removed"<<endl;
		count--;
		other_count--;
		amount-=100;
	}
	else
	{
		cout<<"No other type vechile available currently in parking!!!"<<endl;
		cout<<"\t\t\t wait we are moving towards previous menu"<<endl;
			sleep(5);
			system("cls");
			goto pop;
	}
	cout<<"\t\t\tEnter 1 if u want to remove any other veichle"<<endl;
	cout<<"\t\t\t\t";
	cin>>c1;
	if(c1==1){
	system("cls");
	goto pop;
}
		else
		{
			cout<<"\t\t\tWrong option back to main menu!! wait we are moving towards main menu"<<endl;
			sleep(5);
		system("cls");
		goto mainhome;
	}
	}
	else
	{
		cout<<"Invalid option !!!! Try again"<<endl;
		cout<<"\t\t\tWrong option back to main menu!! wait we are moving towards main menu"<<endl;
			sleep(5);
		system("cls");
		goto mainhome;
	}
}
	else
	{
		cout<<"\t\t\tParking is empty!!!!Close it"<<endl;
			cout<<"\t\t\t wait we are moving towards main menu"<<endl;
			sleep(5);
		system("cls");
		goto mainhome;
	}
}
			
	else if(Menu_input==4)
	{
		cout<<"\t\t\tYou have successfully terminated the program"<<endl;
		cout<<"\t\t\tWait program is terminating<"<<endl;
		sleep(5);
		system("cls");
		
		exit(1);
	}
	
		
	cout<<"Press any digit if u want to go to Menu or Press 0 to exit from the program??"<<endl;
	cout<<"\t\t\t";
	cin>>choice;
	
	if(choice==0)
	{
		exit(1);
	}
	else
	{
		cout<<"\t\t\t wait we are moving towards main menu"<<endl;
			sleep(5);
		system("cls");
		goto mainhome;
	}

}
}

