#include <bits/stdc++.h>
using namespace std;

int main () {
	float  count, first_no, second_no, third_no, fourth_no, fifth_no, mean, mode, median;
	
	cin >> first_no >> second_no >> third_no >> fourth_no >> fifth_no;
	
	//Mean formula
	mean  = (first_no + second_no + third_no + fourth_no + fifth_no) / 5 ;

	float arr[] = {first_no, second_no, third_no, fourth_no, fifth_no};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	//cout << n << "\n";
	sort(arr, arr + n);

	cout << "The median is: " << arr[2] << "\n"; 
	cout << "The mean is : " << mean << "\n";
	
	/*
	for (int i, sizeof(arr), i++ ) {
	   count
	} */
}


