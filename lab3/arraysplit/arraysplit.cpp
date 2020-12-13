#include <bits/stdc++.h>
#include"arraysplit.h" 
using namespace std;
void checkallsums(int* arr, int n, bool* curr_elements, int no_of_selected_elements, 
			bool* soln, int* min_diff, int sum, int curr_sum, int curr_position) 
{ 

	if (curr_position == n) 
		return; 

	
	if ((n/2 - no_of_selected_elements) > (n - curr_position)) 
		return; 

	checkallsums(arr, n, curr_elements, no_of_selected_elements, 
			soln, min_diff, sum, curr_sum, curr_position+1); 

	no_of_selected_elements++; 
	curr_sum = curr_sum + arr[curr_position]; 
	curr_elements[curr_position] = true; 

	if (no_of_selected_elements == n/2) 
	{ 
		if (abs(sum/2 - curr_sum) < *min_diff) 
		{ 
			*min_diff = abs(sum/2 - curr_sum); 
			for (int i = 0; i<n; i++) 
				soln[i] = curr_elements[i]; 
		} 
	} 
	else
	{ 
		checkallsums(arr, n, curr_elements, no_of_selected_elements, soln, 
				min_diff, sum, curr_sum, curr_position+1); 
	} 

	curr_elements[curr_position] = false; 
} 

void arraysplit(int *arr, int n) 
{ 
	bool* curr_elements = new bool[n]; 

	bool* soln = new bool[n]; 

	int min_diff = INT_MAX; 

	int sum = 0; 
	for (int i=0; i<n; i++) 
	{ 
		sum += arr[i]; 
		curr_elements[i] = soln[i] = false; 
	} 

	checkallsums(arr, n, curr_elements, 0, soln, &min_diff, sum, 0, 0); 

	cout << "The first subset is: "; 
	for (int i=0; i<n; i++) 
	{ 
		if (soln[i] == true) 
			cout << arr[i] << " "; 
	} 
	cout << "\nThe second subset is: "; 
	for (int i=0; i<n; i++) 
	{ 
		if (soln[i] == false) 
			cout << arr[i] << " "; 
	} 
} 