#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>

using namespace std;
int main()
{
    int a, b;
    cout<<"Welcome, This is the new bartering system for the new generation."<<endl;
    cout<<"\nHere you can buy and sell items and our system will give you the best value available for you item\nat the time."<<endl;
    cout<<"The value of items is dynamic and changes based on conditions of items and demand of the items at the time."<<endl;
    cout<<" 1. Login\n 2. Exit\n";
    cin>>a;
    if(a==1)
    {
        char uname[20];
        char upass[8];
        int i;
        cout<<"Enter Username"<<endl;
        gets(uname);
        cout<<"Enter Password"<<endl;
        login(user[20], pass[20]);
    }
    else if(a==2)
    {
        exit();
    }
    cout<<"What do you want to do: "<<endl;
    cout<<"\n1. Buy Item\n2. Sell Item\n 3. See coins\n4. Logout."<<endl;
    cin>>b;
    switch(b)
    {
        
    case 1: cout<<"What do you want to buy: "<<endl;
    break;
    case 2: cout<<"What do you want to sell: "<<endl;
    break;
    case 3: cout<<"You have "<<coin<<" coins in your wallet."<<endl;
    break;
    case 4: cout<<"You have successfully logged out"<<endl;
    break;
    }
}
void login(char user[20], char pass[20])
{

    for(i=0; i<8; i++)
    {
        uname[i]=getch();
        cout<<"*";
    }
    uname[i]='\0';

    printf("\n\nPress any key to continue");
    getch();

    if(!strcmp(uname,"user") && !strcmp(upass,"user"))
    {
        cout<<"\n\nLogged In";
    }
    else
    {
        cout<<"\n\nIncorrect";
    }
}

int decrement(int price,int manuf,int cond){
	int newprice,a=2019;
	if(manuf-2019>=1){
		int b=2019-manuf;
		while(b!=0){
			if(newprice>=(price*0.6){
				newprice=price-(price*0.05);
				b--;
			}
			else{
				break;
			}
		}
		int c;
		cout<<"Select option: \n";
		cout<<"1.New";
		cout<<"2.Used";
		cout<<"3.Unboxed";
		cin>>c;
		switch(c){
			case 1:
				newprice-=(newprice*0.01);
			case 2:
				newprice-=(newprice*0.03);
			case 3:
				newprice-=(newprice*0.02);
			
			
		}	
	} 
}
