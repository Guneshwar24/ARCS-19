#include<stdio.h>
int main()
{
	int op,i_type;
	printf("Do you want to buy or sell: \n");
	printf("Press 1 to buy and 2 for selling an item: ");
	scanf("%d",&op);
	if(op==1)
	{
		printf("What type of item are you looking for?\n");
		printf("1.Watches\n2.Mobiles\n3.Laptop\n4.Headphones");
		printf("Choose your option: ");
		scanf("%d",&i_type);
		{
			if(i_type==1)
			{
				printf("\nThe items you can buy are: \n");
				printf("1.CASIO 2018");
				printf("\n2.CASIO 2013");
				printf("\n3.SONATA 2015");
				printf("\n4.SONATA 2016");
				printf("\n5.TIMEX 2017");
				int ch1, val1[5];
				scanf("%d", &ch1);
				printf("\nThe value of the item is %d",val1[ch1 +1]);
			}
			else if(i_type==2)
			{
				printf("\nThe items you can buy are: \n");
				printf("1.Apple Iphone 7 2016");
				printf("\n2.MOTO G4 2015");
				printf("\n3.Redmi Note 4 2015");
				printf("\n4.One Plus 6 2018");
				printf("\n5.Samsung Note 8 2017");
				int ch2, val2[5];
				
				scanf("%d", &ch2);
				printf("\nThe value of the item is %d",val2[ch2+1]);
			}
			else if(i_type==3)
			{
					printf("\nThe items you can buy are: \n");
				printf("1.Apple MacBook Pro 2014");
				printf("\n2.Dell Inspiron 2018");
				printf("\n3.Apple MacBook Air 2019");
				printf("\n4.Leno Ideapad 2017");
				printf("\n5.HP Pavallion 2018");
				int ch3, val3[5];
				printf("\n Choose the item you wish to buy: ");
				scanf("%d", &ch3);
				printf("\nThe value of the item is %d",val3[ch3+1]);
			}
			else if(i_type==4)
			{
					printf("\nThe items you can buy are: \n");
				printf("1.Bluedio 2018");
				printf("\n2.JBL 2015");
				printf("\n3.BOSE 2017");
				printf("\n4.Sony 2018");
				printf("\n5.Philips 2016");
				int ch4, val4[5];
				printf("\n Choose the item you wish to buy: ");
				scanf("%d", &ch4);
				printf("\nThe value of the item is %d",val4[ch4+1]);
				}
			}
		}
	
	return(0);
}
