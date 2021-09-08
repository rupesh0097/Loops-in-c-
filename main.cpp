#include  <iostream>
using namespace std;

int main(){
	//using while loop to print number 1 to 5.
	int i = 0;
	while (i<=5){
	cout << i << endl;
	++i;
	}

	//creating a program to to find sum of all positive number using while loop.
	int number,sum = 0;
	cout << "Enter the number: ";
	cin >> number;

	while (number > 0){
		sum += number;

		cout << "Enter anothe number: ";
		cin >> number;
	}

	cout << "The sum of given numbers are; " << sum << endl;
	

	//C++ program to print 1 to 5 using do-while loop.
		int j = 0;
		do{
			cout << j << endl;
			++j;
		}
	  while (j <=5);     

	
	//C++ for loop
	for(int i = 1; i <=5; ++i){
	cout << "Hello world" << endl;
	}
	
	//C++ program to find sum of first n natural number.
	int num, sum;
	sum = 0;

	cout << "Enter the n number :";
	cin >> num;

	for( int i=1; i <=num; ++i){
		sum += i;
	}

	cout << "Total sum is:" << sum << endl << endl;


  //C++ Range based For loop
  	int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
    for (int n : num_array) {
        cout << n-1 << endl;     
    }											


	//C++ Infinite loop
	for (int i = 1; i>0; ++i){
		cout << "R~K~Y";
	}

	return 0;

}