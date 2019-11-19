// stocks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <iomanip>
using namespace std;

	int main()
	{
		double numsharedpurchase;//number of shared purchases
		double purchaseprice;//purchased price of stock
		double commisspercentage;//commission rate
		double saleprice;// sale price
		double commissofstock;//cost of stock before commission
		double commissonpurch;//commission on purchase
		double totcostofpurch;//total cost of purchase
		double salerev;// sale revenue before commission
		double commissonsale;// commission on sale
		double totalrev;//total revenue from sale
		double proforloss;//profit or loss on sale
		cout << "Enter number of shares purchased,purchased price of stock commision rate and saleprice" << endl;
		cin >> numsharedpurchase >> purchaseprice >> commisspercentage >> saleprice;

		commissofstock = numsharedpurchase * purchaseprice;//This will be the value of the cost of stock before commission
		commissonpurch = commissofstock * commisspercentage;// This will be the value of commission on purchase
		totcostofpurch = commissofstock + commissonpurch;//this will be the value of the total cost of purchase
		salerev = numsharedpurchase * saleprice;// this will be the value of the sale revenue before commission
		commissonsale = salerev * commisspercentage;// this will be the value of the commisssion on sale
		totalrev = salerev - commissonsale;//this will be the value ofthe total revenue from sale
		proforloss = totalrev - totcostofpurch;//this will be the value of  the profit or loss on sale
		cout << setprecision(2) << fixed<< "                                                    " << endl;
		cout <<  "                                                    " << endl;
		cout << "************************* TRANSACTION DETAILS **********" << endl;
		cout << left << setw(15) << "Cost of stock before commission" << right << setw(16) << " $" << commissofstock << endl;//print the vcost of stock before commission
		cout << left << setw(15) << "commission on purchase" <<  right << setw(25) << " $" <<setw(8)<< commissonpurch << endl;//orint the commission on purchase
		cout << left << setw(15) << "Total cost of purchase"  << right << setw(25)<< " $" << totcostofpurch << endl;//print the total cost of purchase
		cout << "                                                    " << endl;
		cout << left << setw(15) << "Sale revenue before commission" << right << setw(17) << " $" << salerev << endl;//print the sale revenue before commssion
		cout << left << setw(15) << "commission on sale" << right << setw(29) << " $" << setw(8)<<commissonsale << endl;// print the commission on sale
		cout << left << setw(15) << "Total revenue from sale" <<  right << setw(24) << "$" << totalrev << endl;// print total revenue from sale
		cout << "                                                    " << endl;
		cout << left << setw(15) << "profit or loss on sale" <<  right << setw(25)<< " $" << setw(8)<<proforloss << endl;//print the profit or loss on sale
    return 0;
	/*Enter number of shares purchased,purchased price of stock commision rate and saleprice
150 234.87 .03 250.00


************************* TRANSACTION DETAILS **********
Cost of stock before commission               $35230.50
commission on purchase                        $ 1056.91
Total cost of purchase                        $36287.42

Sale revenue before commission                $37500.00
commission on sale                            $ 1125.00
Total revenue from sale                       $36375.00

profit or loss on sale                        $   87.58
Press any key to continue . . .*/
}
