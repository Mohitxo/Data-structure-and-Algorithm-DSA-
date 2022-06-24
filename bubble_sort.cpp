#include<iostream>
using namespace std;

// void bubbleSort(vector<int>& arr, int n)
// {   
// //     for round 1 to n-1
// 	for(int i=1; i<n; i++){
		
// 		for(int j=0; j<n-1 ; j++){
			
// 			if(arr[j]>arr[j+1]){
// 				swap(arr[j],arr[j+1]);
// 			}
// 		}
// 	}
// }

// Optimised Code-
void bubbleSort(vector<int>& arr, int n)
{   
//     for round 1 to n-1
	for(int i=1; i<n; i++){
		bool swapped= false;      
		// if swapping is not happen mark it as false 

		for(int j=0; j<n-1 ; j++){
			
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped= true;
                // if any sort of swapping is happening mark it as a true 
			}
		}
		if(swapped == false)
			break;
	}
}


// in bubble sorting algorithm round 1 the first largest element will go on uska correct place 
// bubble sort perform (n-1) round of comparision
// basic principal - in bubble sort uska haar round per ith largest element uska sahi place per hota hai 
// either adjacent element compare hona per swap hona wala hain nahi to igoner hona wala main means as it is rahana wala hain
// time and  space compelxity of bubble sort :
// time - O(n^2) -> 1+2+3+4......+(n-1)+(n)=n(n-1)/2;
// with the help of optimised code we have make the best case time complexity of bubble equeal to big o of 1 - O(1)
// space complexity of algo is O(1) constant space is required 