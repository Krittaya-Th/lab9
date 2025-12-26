#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double loan, rate, amount;
    
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int year = 1;
	double PrevBalance = loan;
	
	while(PrevBalance > 0){
	    double Interest = PrevBalance * (rate/100.0);
	    double Total = PrevBalance + Interest;
	    double Payment = amount;
	    
	    if(Total < Payment){
	        Payment = Total;
	    }
	    double NewBalance = Total - Payment;

	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";
	
	PrevBalance = NewBalance;
	year++;
	}
	return 0;
}