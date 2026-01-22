#include <iostream>
#include<cassert>
using namespace std;

int main() {

	//Practice: Find first and 2nd Maximum values

		/*int arr[100], n ;

		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		int max = arr[0], max_2;

		for (int i = 1; i < n; ++i) {
			if (arr[i] >= max) {
				max_2 = max;
				max = arr[i];
			}
			else if (arr[i] > max_2 && arr[i] != max) {
				max_2 = arr[i];
			}
		}
		cout << max << " " << max_2; */

		/*========================================*/

		/*Practice: Find pair of max sum - FASTER*/
		/*int arr[100], n;

		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		int max_idx = 0, max_idx_2 = 0, sum= 0 ;

		if (arr[0] >= arr[1]) {
			max_idx = 0, max_idx_2 = 1;
		}
		else
			max_idx = 1, max_idx_2 = 0;
		for (int i = 1; i < n; ++i) {
			if (arr[i] >= arr[max_idx]) {
				max_idx = i;
			}
			else if (arr[i] >= arr[max_idx_2] && i != max_idx) {
				max_idx_2 = i;
			}
		}
		cout << max_idx << " " << max_idx_2<<endl;
		sum += arr[max_idx]+ arr[max_idx_2];
		cout << sum; */
		//===========================================///


		// Reverse in place

		/*int arr[200], n ;
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

		for (int i = 0; i < n / 2; i++) {
			int temp = arr[i];
			arr[i] = arr[  n - i -1 ];
			arr[n - i - 1] = temp;

		}
		for (size_t i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}*/


		// ==============================// 
		/* Find Frequent Number without using Frequesncy Array */
		/*int n , numbers[200];
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> numbers[i];

		int max_repeat = -1, max_value = -1;

		for (int i = 0; i < n; i++) {

			int repeat = 0;
			for (int j = 0; j < n; j++) {
				repeat += numbers[i] == numbers[j];
				cout << repeat << "\n";
			}
			if (max_repeat < repeat) {
				max_repeat = repeat, max_value = numbers[i];
			}


		}
		cout << max_value << " repeated " << max_repeat; */

		//=======================================//

	/*int n, numbers[150];
	cin >> n;
	int frequency[150 + 1] = {0};
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
		frequency[numbers[i]]++;
	}

	int max_pos = -1 ;
	for (int i = 0; i < 151; i++) {

		if (max_pos == -1 || frequency[max_pos] < frequency[i])
		{
			max_pos = i;

		}

	}
	cout << max_pos << " repeated " << frequency[max_pos]<<" times ";*/

	///================================================================//

	//Problem #1: Is increasing array ?
	//● Read an Integer N, then read N(<= 200) integers.
	//● Print YES if the array is increasing.
	//○ An array is increasing if every element is >= the previous number
	//● Inputs
	//○ 4
	//○ 5
	//○ 2
	//1 2 2 5   ⇒ YES
	//1 0 7 8 9  ⇒ NO[0 is < 1, the previous number] - 10 10 ⇒ YES

	//int n,  numbers[200]; 
	//cin >> n; 
	//for (int i = 0; i < n; i++) {
	//	cin >> numbers[i]; 
	//}
	//bool f = 1; 
	//for (int i = 0; i < n - 1; i++) {
	//	if (numbers[i] > numbers[i + 1]) {
	//		f = 0;
	//		break;
	//	}
	//
	//}
	//if (f) cout << "YES";
	//else cout << "NO"; 


	//============================================///

	//Problem #2: Replace MinMax

	//int n, numbers[200]; 
	//cin >> n; 
	//for (int i = 0; i < n; ++i) {
	//	cin >> numbers[i]; 
	//}
	//
	//int max_idx, min_idx; 
	//if (numbers[0] > numbers[1]) {
	//	max_idx = 0, min_idx = 1; 
	//
	//}
	//else {
	//	max_idx = 1, min_idx = 0; 
	//
	//
	//}
	//for (size_t i = 2; i < n; i++)
	//{
	//	if (numbers[max_idx] <= numbers[i]) {
	//		max_idx = i;
	//	}
	//	else if (numbers[min_idx] > numbers[i]) {
	//		min_idx = i; 
	//	}
	//}
	//int temp = numbers[max_idx]; 
	//numbers[max_idx] = numbers[min_idx]; 
	//numbers[min_idx] = temp; 
	//
	//for (size_t i = 0; i < n; i++) 
	//{
	//	if (i) {
	//		cout << " "; 
	//	}
	//	cout << numbers[i];
	//}

	/* ============================================= */


	//Problem #3: Unique Numbers of ordered list

	//int n, in,idx = -1 ,size = 0 ,   num[1000] {-1};
	//cin >> n; 
	//for (int i = 0; i < n; i++) { 
	//	cin >> in;
	//	if (i == 0) {
	//		idx++; 
	//		num[idx] = in;
	//		size++;
	//	}
	//	else if(in > num[idx]) {
	//		idx++; 
	//		num[idx] = in;
	//		size++; 
	//	}
	//	
	//}
	//
	//for (int i = 0; i < size; i++) {
	//	cout << num[i] << " ";
	//}


	/// ======================= another solution =======================

	//int n, value, last_value = -1 ; 
	//cin >> n; 
	//for (int i = 0; i < n; i++) {
	//	cin >> value;
	//	if (value != last_value) {
	//		cout << value<< " ";
	//	}
	//	last_value = value; 
	//}


	/////Problem #4: Is Palindrome? ///// 

	//int n, num[100000 + 1]; 
	//cin >> n; 
	//for(int i = 0; i < n; i++) {
	//	cin >> num[i]; 
	//}
	//int backward ; 
	//for (int i = 0; i < (n/2); i++) {
	//	backward = n - i - 1; 
	//	if (num[i] != num[backward]) {
	//		cout << "NO";
	//		return 0; 
	//	}
	//}
	//
	//cout << "YES"; 





	//====================================//
	//  Problem #5: Smallest pair ////

	//int t; 
	//cin >> t; 
	//while (t--) {
	//
	//
	//
	//	int n, A[200 + 1];
	//	cin >> n;
	//	for (int i = 0; i < n; i++) {
	//		cin >> A[i];
	//	}
	//
	//
	//	int sum, smallest_sum = A[0] + A[1] + 2 - 1;
	//	for (int i = 0; i < n; i++ ) {
	//		sum = 0;
	//		for (int j = i + 1; j < n; j++ ) {
	//			sum = A[i] + A[j] + (j+1) - (i+1);
	//			if (smallest_sum >= sum) {
	//				smallest_sum = sum;
	//			}
	//		}
	//
	//	}
	//
	//	cout << smallest_sum<<"\n";
	//}
	// ======================================================///


	/// Medium Problems
	///Problem #1: Find the 3 minimum values


	//int num[1000 + 1], n; 
	//cin >> n; 
	//for (int i = 0; i < n; i++) {
	//	cin >> num[i]; 
	//}
	//
	//int first_min = INT_MAX, second_min= INT_MAX, third_min= INT_MAX;
	//
	//
	//for (int i = 0; i < n; i++) {
	//
	//	if (num[i] <= first_min) {
	//		third_min = second_min; 
	//		second_min = first_min; 
	//		first_min = num[i]; 
	//	}
	//	else if (num[i]<= second_min) {
	//		third_min = second_min; 
	//		second_min = num[i]; 
	//
	//	}
	//	else if (num[i] <= third_min) {
	//		third_min = num[i]; 
	//	}
	//	
	//
	//}
	//cout << first_min << " " << second_min << " " << third_min << " "; 


	//====================================================// 
	//================= another solve ===================// 

	//int n, mn[3]; 
	//cin >> n; 
	//for (int i = 0; i < n; i++) {
	//	int value; 
	//	cin >> value; 
	//	if (i < 3) {
	//		mn[i] = value; 
	//	}
	//	else {
	//		int max_pos = 0 ; 
	//		for (int j = 1; j < 3; i++) {
	//			if (mn[max_pos] < mn[j]) {
	//				max_pos = j; 
	//			}
	//
	//
	//		}
	//		if (value < mn[max_pos]) {
	//			mn[max_pos] = value;
	//		}
	//		
	//	}
	//
	//}
	//
	//int mx_pos = 0,tmp;
	//for (int j = 1; j < 3; ++j) {
	//	if (mn[mx_pos] < mn[j])
	//		mx_pos = j;
	//}
	//// swap max with last
	//tmp = mn[2];
	//mn[2] = mn[mx_pos];
	//mn[mx_pos] = tmp;
	//
	//// Swap first 2 elements if needed
	//if (mn[0] > mn[1]) {
	//	tmp = mn[0];
	//	mn[0] = mn[1];
	//	mn[1] = tmp;
	//}
	//
	//for (int i = 0; i < 3; i++)
	//	cout << mn[i] << " ";
	//===============================================// 
	///Problem #2: Search for a number
	//Input     
	//5
	//1 2 7 3 7
	//3
	//7 9 2
	//Output
	//○ 4    [7 exists in 2 positions(2 and 4).The last is 4)
	//○ - 1  [9 doesn’t exist)
	//○ 1    [2 exists only in position 1]



	//int arr[200 + 1];
	// 
	//int n; 
	//cin >> n; 
	//for (int i = 0; i < n; i++) {
	//	cin >> arr[i]; 
	//
	//}
	//
	//int q; 
	//cin >> q; 
	//int last = -1; 
	//while (q--) {
	//	int number; 
	//	cin >> number; 
	//	for (int i = n-1 ; i >= 0  ; i--) {
	//		if (arr[i] == number) {
	//			last = i; 
	//			break; 
	//		}
	//
	//	}
	//	cout << last << "\n"; 
	//	last = -1; 
	//
	//}
	///=====================another solve ===============/// 
	//const int len = 500 + 1; 
	//int pos[len]; 
	//for (int i = 0; i < len; i++)  pos[i] = -1; 
	//int n; 
	//cin >> n; 
	//
	//for (int i = 0; i < n; i++) {
	//	int num; 
	//	cin >> num; 
	//	pos[num] = i;
	//}
	//
	//int q; 
	//cin >> q; 
	//while (q--) {
	//	int x; 
	//	cin >> x; 
	//	cout << pos[x] << "\n"; 
	//}



	//// ======================================================///

	// Problem #3: Find most frequent number
	// Example for array: 7    
	// -1 2 - 1 3 - 1 5 5

	//int arr[770 + 1]; 
	//int pos_arr[270 + 1] = {0};
	//int neg_arr[500 + 1] = {0};
	//int n; 
	//cin >> n; 
	//for (int i = 0; i < n; i++) {
	//	cin >> arr[i]; 
	//	if (arr[i] >=  0 ) {
	//		pos_arr[arr[i]]++; 
	//	}
	//	else {
	//		neg_arr[-arr[i]]++; 
	//	}
	//}
	//int number, max_freq = 0 ; 
	//int length_pos_arr = sizeof(pos_arr) / sizeof(pos_arr[0]); 
	//for (int i = 0; i < length_pos_arr; i++) {
	//	if (max_freq < pos_arr[i]) {
	//		max_freq = pos_arr[i]; 
	//		number =  i; 
	//	}
	//	
	//
	//}
	//
	//int length_neg_arr = sizeof(neg_arr) / sizeof(neg_arr[0]);
	//for (int i = 0; i < length_neg_arr; i++) {
	//	if (max_freq < neg_arr[i]) {
	//		max_freq = neg_arr[i];
	//		number = -1 * i;
	//	}
	//	
	//
	//}
	//cout << "number : " << number << " repeated " << max_freq << " times " << endl;



	//============================================//

	// ================ another solving for this problem =================// 
	//const int len = 500 + 270 + 1;
	//int freq[len]{0};
	//int n; 
	//cin >> n; 
	//int value; 
	//for (int i = 0; i < n; i++) {
	//	cin >> value; 
	//	value = value + 500; 
	//	freq[value]++; 
	//}
	//int max_freq=0 ,number ;
	//
	//for (int i = 0; i < len; i++) {
	//	if (max_freq < freq[i]) {
	//		max_freq = freq[i]; 
	//		number = i; 
	//	}
	//}
	//cout << number - 500 << " has repeated " << max_freq << " times "; 
	//

	//=======================================================///

	// Problem #4: Digits frequency
	//2 78 307
	//0 1
	//1 0
	//2 0
	//3 1
	//4 0
	//5 0
	//6 0
	//7 2
	//8 1
	//9 0

	//const int len = 10; 
	//int freq[len] = { 0 } ;
	//int n,value , number; 
	//cin >> n; 
	//while (n--) {
	//	cin >> value; 
	//	if(value == 0 )
	//		freq[0]++; 
	// 
	//	while (value > 0) {
	//		number = value % 10;
	//		freq[number]++; 
	//		value = value / 10;
	//		
	//	}
	//
	//}
	//for (int i = 0; i < len; i++) {
	//	cout << i << " " << freq[i] << "\n";
	//}


	//=================================================//
	// 
	// Problem #5: Unique Numbers of unordered list

	// Input:13       
	// 1 5 5 2 5 7 2 3 3 3 5 2 7
	//●Output : 1 5 2 7 3
	//const int len= 901;
	//	int arr[900 + 1]; 
	//	bool freq[len]{false};
	//	int n;
	//	cin >> n; 
	//	for (int i = 0; i < n; i++) {
	//		cin >> arr[i]; 
	//		freq[arr[i]]=true; 
	//	}
	//	for (int i = 0; i < n; i++) {
	//		if (freq[arr[i]] == true ) {
	//			cout <<arr[i] << " "; 
	//			freq[arr[i]] = false; 
	//		}
	//	}

	///============ another solve ===============// 
	//const int len = 500 + 1; 
	//int is_visited[len]{0};
	//
	//int n; 
	//cin >> n; 
	//
	//for (int i = 0; i < n; i++) {
	//	int value; 
	//	cin >> value;
	//	assert(value >= 0 && value <= 500);
	//	if (!is_visited[value]) {
	//		cout << value << " "; 
	//		is_visited[value] = 1; 
	//	}
	//}
	// ===============================================// 


	//===================Problem #6: Sorting numbers=====================///
	// using nested loop
	//int arr[900 + 1]; 
	//int n; 
	//cin >> n; 
	//for(int i = 0; i < n; i++) {
	//	cin >> arr[i]; 
	//}
	//
	//int second = 1, tmp ; 
	//
	//for (int i = 0; i < n; i++) {
	//
	//	for (int j = i+1 ; j < n ; j++) {
	//		if (arr[i] >= arr[j]) {
	//			tmp = arr[i]; 
	//			arr[i] = arr[j];
	//			arr[j] = tmp; 
	//		}
	//	}
	//
	//}
	//
	//for (int i = 0; i < n; i++) {
	//	cout << arr[i] << " "; 
	//}

	//=====================another solve =========================///
	/*const int len = 500 + 1;
	int frq[len] = { 0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		frq[value]++;

	}
	for (int i = 0; i < len; i++) {

		while (frq[i]) {
			cout << i << " ";
			--frq[i];
		}

	}*/
	/// this a count sort algorithm most efficiction if values are small 

	// ======================================= /// 

	/*Problem #1: Recamán's sequence*/
	//const int size = 200 + 1;
	//int is_visited[20101+1]{0};
	//int rec[size]{ 0 } ;
	//is_visited[0] = 1; 
	//for (int i = 1; i < size; i++) {
	//	int lst_index = i - 1; 
	//	int value = rec[i - 1] - lst_index - 1; 
	//	if (value > 0 && is_visited[value] == 0 ) {
	//		rec[i] = value; 
	//	}
	//	else {
	//		value = rec[i - 1] + lst_index + 1; 
	//		rec[i] = value; 
	//		
	//	}

	//	is_visited[value]++; 


	//}
	///*for (int i = 0; i < 200; i++) {
	//	cout << rec[i] << " "; 
	//}*/
	//int index; 
	//cin >> index;
	//cout << rec[index]; 

///Problem #2: Fixed Sliding Window

////========== first solve with nested loop ==============// 
//int arr[200+1], sw[200+1];
//int k, n; 
//cin >> k >> n; 
//int max_sum=INT_MIN, max_idx; 
//for (int i = 0; i < n; i++) {
//
//	cin>>arr[i]; 
//
//}
//
//for (int i = 0; i < n - 2; i++) {
//	int value_idx = i,  sum = 0;
//	for (int j = 0; j < k; j++) {
//		sw[j] = arr[value_idx];
//		value_idx++; 
//		sum += sw[j]; 
//		if (sum >= max_sum) {
//			max_sum = sum; 
//			max_idx = value_idx; 
//		}
//
//	}
//}
//cout << max_idx-3 << " " <<max_idx-2 << " "<< max_idx-1 ;

//======================second solve by me===============================//
//int arr[200 + 1], sw[200 + 1];
//int k, n; 
//cin >> k >> n; 
//int max_sum=INT_MIN, max_idx; 
//for (int i = 0; i < n; i++) {
//
//	cin>>arr[i]; 
//}
//
//for (int i = 0; i < n - 2; i++) {
//	sw[0] = arr[i];
//	sw[1] = arr[i + 1]; 
//	sw[2] = arr[i + 2]; 
//	int sum = sw[0] + sw[1] + sw[2]; 
//	if (sum >= max_sum) {
//		max_sum = sum; 
//		max_idx = i + 2; 
//
//	}
//	
//}
//cout << max_idx - 2 << " " << max_idx - 1 << " " << max_idx; 
//==================== solution using cumulative or prefix sum array==========// 
//int arr[200]{0}, k, n, max_sum = INT_MIN, min_index;
//cin >> k >> n; 
//for (int i = 1; i <= n; i++) {
//	cin >> arr[i]; 
//	arr[i] += arr[i-1]; 
//}
//
//for (int i = k; i <= n; i++) {
//	if (arr[i] - arr[i - k] > max_sum) {
//		max_sum = arr[i] - arr[i - k]; 
//		min_index = i - k + 1; 
//	}
//}
//cout << min_index - 1 << " " << min_index + k - 2 <<" " << max_sum;
//
//
///=========================================================/// 
// Problem #4: Josephus Problem

int is_removed[199]{ 0 };
int n, k ;
cin >> n>> k; 

int last_pos = 0 ; 
for (int i =0 ; i < n; i++ ) {
	 
	int remaining_alive = n - i;

	int current_k = k; 
	if (k % remaining_alive == 0) {
		current_k = remaining_alive; 
	}
	else {
		current_k = k % remaining_alive; 
	}

	int last_person = -1; 
	for (int j = 0; j < current_k; ) {

		if (is_removed[last_pos] == 0) {
			last_person = last_pos; 
			j++; 
		}
		last_pos = (last_pos + 1) % n; 
	}
	is_removed[last_person] = 1; 
	cout << last_person + 1<<" ";

	

}



	return 0;
}