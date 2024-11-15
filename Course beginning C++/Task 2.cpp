#include<iostream>
using namespace std;
int main() {
	const int small_room{ 25 };
	const int large_room{ 35 };
	const double tax_rate{ 0.06 };
	const int day_cleaning{ 30 };

	int number_small_rooms;
	int number_large_rooms;

	cout << "Estimate for carpet cleaning service" << endl;
	cout << "Enter number of small rooms: ";
	cin >> number_small_rooms;
	cout << "Number of small rooms: " << number_small_rooms << endl;
	cout << "Enter number of large rooms: ";
	cin >> number_large_rooms;
	cout << "Number of large rooms: " << number_large_rooms << endl;



	cout << "Price for small rooms: " << small_room * number_small_rooms << endl;
	cout << "Price for large rooms: " << large_room * number_large_rooms << endl;
	cout << "Cost $" << (small_room * number_small_rooms) + (large_room * number_large_rooms) << endl;
	cout << "Tax: " << ((small_room * number_small_rooms) + (large_room * number_large_rooms)) * tax_rate << endl;

	cout << "-------------------------------------------------------------" << endl;

	cout << "Total estimate: " << ((small_room * number_small_rooms) + (large_room * number_large_rooms)) + (((small_room * number_small_rooms) + (large_room * number_large_rooms)) * tax_rate) << endl;
	return 0;
}

