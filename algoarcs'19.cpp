#include<iostream>
int decrement(int price, int manuf,int cond ){
	int newprice,a=2019;
	if(manuf-2019>=1){
		int b=2019-manuf;
		while(b!=0){
			if(newprice>=60%price){
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
