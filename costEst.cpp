/*
 * costEst.cpp
 *
 *  Created on: Jul 20, 2015
 *      Author: MM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

char answer, userChoice1, userChoice2, userChoice3;
string userName;
int priceConcrete, priceSteel, numSmCol, numBigCol, lengthSmCol, widthSmCol, heightSmCol, lengthBigCol, widthBigCol, heightBigCol;

answer = 'y';

while (answer == 'y') {

cout<<"Welcome. Please select that fits your purposes for today"<<endl;

//printing border
cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+"<< endl;
//printing material border
cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "(a)" << setw(1) << "|" << setw(15) << left << "Concrete Estimate" << setw(1) << "|" << endl;
//printing border
cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;
//printing material border
cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "(b)" << setw(1) << "|" << setw(15) << left << "Steel Estimate" << setw(1) << "|" << endl;
//printing border
cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;
//printing material border
cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "(c)" << setw(1) << "|" << setw(15) << left << "" << setw(1) << "|" <<endl;
//printing border
cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;
//printing material border
cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "(d)" << setw(1) << "|" << setw(15) << left << "" << setw(1) << "|" << "|" << endl;
cin>>userChoice1;
if(userChoice1 == 'a') {

	cout<<"Please enter the dimensions of the small column";

	cout<<"length: "<<endl;
	cin>>lengthSmCol;
	cout<<"width: "<<endl;
	cin>>widthSmCol;
	cout<<"height: "<<endl;
	cin>>heightSmCol;

cout<<"Enter number of small columns to calculate for"<<endl;
cin>>numSmCol;
cout<<"Please enter the dimensions of the big column"<<endl;
cout<<"Length: "<<endl;
cin>>lengthBigCol;
};

int costConcreteCol, costT16Col, costT10Col, totalSmallCol, volumeSmallCol, totalFloorCosts, costConcrete;
string name;

costConcrete = 30;
costT16Col = 12*50;
costT10Col = 52*20;
volumeSmallCol = (.612);
costConcreteCol = volumeSmallCol * costConcrete;
totalSmallCol = costConcreteCol + costT10Col + costT16Col;
totalFloorCosts = totalSmallCol * 12;

cout<<"Total Floor Costs: "<<"$"<<totalFloorCosts<<endl;

cout<<"Please enter your name"<<endl;
cin>>name;
cout<<"Thank you "<<name<<", would you like to estimate the total floor costs again (y/n)?"<<endl;
cin>>answer;

};

cout<<"Studio 14 Material Costs Table:"<< endl;

return 0;

}
