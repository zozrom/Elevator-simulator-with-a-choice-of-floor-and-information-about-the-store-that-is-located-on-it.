#include <iostream>
using namespace std;
int main() {
	

	//This five - story building, on each floor of which there are various stores.
	//Write a simulator of the elevator with a floor picker and get information 
	//	 about the store that is on it
	int n;
	for (; ; )
	{
		do
		{
			cout << "Enter the floor";
			cin >> n;
		} while (n <= 0 || n > 5);
		enum floor { One = 1, Two, Three, Four, Five }Shop_Adidas, Shop_Nike, Shop_Reabok, Shops_Puma, Shop_Asics;
		Shop_Adidas = One;
		Shop_Nike = Two;
		Shop_Reabok = Three;
		Shops_Puma = Four;
		Shop_Asics = Five;
		
		if (n == Shop_Adidas)
		{
			cout << "On this floor Shop_Adidas" << endl;

		}
			 if(n== Shop_Nike)
			{
			cout << "On this floor Shop_Nike" << endl;
			}
				 if (n ==Shop_Reabok)
					{
							cout << "On this floor Shop_Reabok " << endl;
					}
						 if (n ==Shops_Puma)
						{
								cout << "On this floor  Shops_Puma" << endl;
							}
						 
													if(n == Shop_Asics)		{
														cout << "On this floor  Shop_Asics" << endl;
																		}
													cout << "\n";
	}
	
	       return 0;

   }