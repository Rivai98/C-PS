// Selection( Control Flow ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int main()
{

    // PROBELM #2 Sort 3 Numbers: 
    /*int n1, n2, n3 , temp = 0 ; 
    cin >> n1 >> n2 >> n3; 
    if (n1 > n2) {
        temp = n1; 
        n1 = n2; 
        n2 = temp;
        

    }
    if (n1 > n3) {
        temp = n1; 
        n1 = n3; 
        n3 = temp; 
    }
    if (n2 > n3) {
        temp = n2; 
        n2 = n3; 
        n3 = temp; 
    }*/



    //cout << n1 << " " << n2 << " " << n3; 

    //======================================================//
    //  PROBLEM #3 : Maximum but contrained    // 

  /*  int n1, n2, n3; 
    cin >> n1 >> n2 >> n3; 
    int res = -1; 

    if (n1 < 100 && n1 > res) res = n1; 
    if (n2 < 100 && n2 > res) res = n2; 
    if (n3 < 100 && n2 > res) res = n3; 
    cout << res << "\n"; */
     
    // //======================================================//
    //   PROBLEM #4 : Conditionals Count
   /* int x, n1, n2, n3 , n4 ,n5 ; 
    cin >>x>> n1 >> n2 >> n3>> n4 >>n5 ; 
    int cnt = 0; 
    cnt += (n1 <= x);
    cnt += (n2 <= x);
    cnt += (n3 <= x);
    cnt += (n4 <= x);
    cnt += (n5 <= x);
    cout << cnt << " " << 5 - cnt; */



   
    
   

    //======================================================//
    //

   /* int n; 
	cout << "Enter a number: ";
    cin >> n; 

    bool is_valid = (n >= 10000);
    int first_last_digit = n % 10; 
    n /= 10; 
	int second_last_digit = n % 10;
    n /= 10; 
	int third_last_digit = n % 10;

    int sum = first_last_digit + second_last_digit + third_last_digit;
    if (is_valid) {
        
       
        if (sum % 2 == 0) {
            if (first_last_digit % 2 != 0 || second_last_digit % 2 != 0 || third_last_digit % 2 != 0) {
                cout << "This is a good number"; 
            }
            else {
				cout << "This is a bad number";
            }

        }
        else {
            cout << "this is a great number "; 
        }
    }
    else {
        cout << "This is a smaller number"; 

    }*/

	//======================================================//


    /*int n, result ,num;

    cin >> n; 
    cin >> result;
    n -= 1; 
    
    if (n > 0) { n -= 1;  cin >> num; if (num > result) result = num; }
    if (n > 0) { n -= 1;  cin >> num; if (num > result) result = num; }
    if (n > 0) { n -= 1;  cin >> num; if (num > result) result = num; }
    if (n > 0) { n -= 1;  cin >> num; if (num > result) result = num; }
    if (n > 0) { n -= 1;  cin >> num; if (num > result) result = num; }
    if (n > 0) { n -= 1;  cin >> num; if (num > result) result = num; }
    if (n > 0) { n -= 1;  cin >> num; if (num > result) result = num;}
    if (n > 0) { n -= 1;  cin >> num; if (num > result) result = num; }
    if (n > 0) { n -= 1;  cin >> num; if (num > result) result = num; }
    
    cout << result<<"\n";
	return 0;
    */
	//======================================================//

// HOMEWORK 3 : INTERVALS #1 
int cnt = 0,x,  start, end; 
cin >> x >> start >> end; 

if (x >= start && x <= end) cnt++;
cin >> start >> end; 
if (x >= start && x <= end) cnt++;
cin >> start >> end;
if (x >= start && x <= end) cnt++;
cout << cnt << "\n";




//======================================================//

// HOMEWORK 3 : INTERVALS #2
int  s1, e1, s2, e2, start ,end  ;
cin>> s1 >> e1 >> s2 >> e2 ;
start = s1 >= s2 ? s1 : s2; 
end = e1 <= e2 ? e1 : e2;

if (start > end) {
    cout << "-1 \n"; 
    return 0 ; 
}

cout << "interval is [" << start << "," << end << "]\n";
return 0;







    
}

 