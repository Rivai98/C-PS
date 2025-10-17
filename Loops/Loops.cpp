//

#include <iostream>
using namespace std; 

int main()
{

//################## Homework 1 - Easy challenge 1-5 #############################
    /*
    Problem #1: Print Range
        ? Given a starting number X and an ending number Y, print all numbers
        between X and Y inclusive, each on a line.
        ? Input 3 7
        ? Output
        ? 3
        ? 4
        ? 5
        ? 6
        ? 7
    */

    /*int start, end; 
	cin >> start >> end; 
    while (start <= end) {
        cout << start << endl; 
        start++; 

    }
	*/


   /* Problem #2:
    Line Of Characters
        ● Input : Read an integer N followed by a single character
        ● Output : Print the character N times as below
        ● Input ⇒ Output
        ○ 5 Y ⇒ YYYYY
        ○ 3 # ⇒ ###


    int number; 
    char character; 
    cin >> number >> character;
    while (number-- ) {
        cout << character;

    }*/

  /*  Problem #3:
    Print left angled triangle
        ● Read integer N, then print a left angled triangle that has N rows as below :*/


    /*int n; 
    cin >> n; 
    int counter = 1;
    int rows = 1; 
    while (n-- ) {
        
        
        while (counter) {
            cout << "*";
            counter--; 
        }
        cout << "\n";
        rows++; 
        counter = rows; 

    }*/

    //#############another solve##############

   /* int n, rows = 1 ,stars_count; 
    cin >> n; 
    while (rows <= n) {
        stars_count = 1; 
        while (stars_count <= rows) {
            cout << "*"; 
            stars_count++;
        }
        cout << "\n"; 
        rows++; 
       

    }*/
    //########################################




  /*  Problem #4:
    Print face down left angled triangle
        ● Read integer N, then print a face down left angled triangle that has N rows.


    int n;
    cin >> n;
    int counter = n;
    while (n--) {


        while (counter) {
            cout << "*";
            counter--;
        }
        cout << "\n";

        counter = n;

    }*/

   /* ###Problem #5: Special Average
        ● Read integer N, followed by reading N numbers.Print 2 values
        ○ The average of the numbers in odd positions(1st, 3rd, 5th, …)
        ○ The average of the numbers in even positions(2nd, 4th, 6th, …)
        ● Input
        ○ 6 10 100 20 200 30 600
        ● Output
        ○ 20  300
        ● Explantation
        ○(10 + 20 + 30) / 3 = 20
        ○(100 + 200 + 600) / 3 = 300*/



    /*int n, cnt=0; 
    double number, sum_even = 0, sum_odd = 0, odd_counter = 0, even_counter = 0;
    cin >> n; 
    while (n--) {
        cin >> number; 
        cnt++; 
        if (cnt % 2 == 0) {
            sum_even += number; 
            even_counter++; 
        }
        else {
            sum_odd += number; 
            odd_counter++; 
        }

       


    }
    double average_even = sum_even / even_counter; 
    double average_odd = sum_odd / odd_counter; 
    cout << average_even << " " << average_odd; 




    */


//========================================================//
///========================Medium Challenges===============//
//Problem #1:
//Print diamond
//● Read an integer N, then print diamond of 2N rows as below
//int N; 
//cin >> N; 
//int stars  , spaces , cnt ;
//int row = 1; 
//while (row <= N) {
//    
//    stars = 2 * row - 1;
//    spaces = N - row; 
//    cnt = 1; 
//    while (cnt <= spaces) {
//        cout << ' '; 
//        ++cnt; 
//    }
//
//    cnt = 1; 
//
//    while (cnt <= stars) {
//        cout << "*"; 
//        ++cnt; 
//    }
//
//    row++;
//    cout << "\n"; 
//}
//
//row = N; 
//while (row > 0 ) {
//
//    stars = 2 * row - 1;
//    spaces = N - row;
//    cnt = 1;
//    while (cnt <= spaces) {
//        cout << ' ';
//        ++cnt;
//    }
//
//    cnt = 1;
//
//    while (cnt <= stars) {
//        cout << "*";
//        ++cnt;
//    }
//
//    row--;
//    cout << "\n";
//}







//========================================================//
//Problem #2: Special multiples 1
//● Read an integer N : print all numbers that satisfy the following property
//○ Either number is divisible by 8
//○ Or divisible by both 4 and 3
//● Input : 100
////● Output : 0 8 12 16 24 32 36 40 48 56 60 64 72 80 84 88 96
//int number , cnt =-1 ; 
//cin >> number; 
//while (cnt <= number) {
//    cnt++; 
//    if (cnt % 8 == 0  ) {
//        cout << cnt << " "; 
//        continue; 
//        
//    }
//    if(cnt % 4 == 0 && cnt % 3 == 0) {
//        cout << cnt << " "; 
//    }
//    
//
//}
// =====================================================///
//Problem #3: Special multiples 2
//● Read an integer N(1 <= 30) : Print the first N numbers that are
//○ multiple of 3 but not multiple of 4
//● Input : 11
//● Output : 3 6 9 15 18 21 27 30 33 39 42
//● Notice
//○ 12 is divisible by both 3 and 4 ⇒ so excluded

    //int N, cnt= 1, number = 0 ; 
    //cin >> N; 
    //while (cnt <= N) {
    //
    //    if (number % 3 == 0 && number%4 != 0 ) {
    //         
    //        cout << number<<" ";
    //        number++;
    //        ++cnt; 
    //    }
    //    number++; 
    //    
    //
    //}

///secont solution more effection
//int n, start = 3 ;
//cin >> n; 
//while (n) {
//    if (start % 4 != 0) --n,cout << start << " "; 
//    start += 3; 
//}






//==================================================///


//int T; 
//cin >> T;
//int N, num , min; 
//while (T--) {
//    cin >> N; 
//    min = INT_MAX; 
//    while (N--) {
//        cin >> num; 
//        if (num < min) {
//            min = num; 
//        }
//
//    }
//    cout << min; 
//
//    cout << "\n"; 
//}

//=============================================================///

//Problem #1: Find NOs
//● Read integer N, then read N strings.
//○ Print only the strings(of 2 letters).
//○ These 2 letters must be letter ‘N’ and letter ‘O’
//■ Regardless of lower or upper case
//■ Regardless of the 2 letters order
//■ E.g.print “No”, “ON”, “no”    but ignore e.g.“YEs”, “Noooo”
//■ That is : a word of 2 letters only N and O
//● Input
//○ 9 Yss NO noOO oN Mostafa no nN  oOOooo oO
//● Output
//○ NO oN no

//int n, num_os, num_ns; 
//cin >> n; 
//while (n) {
//    string word; 
//    cin >> word;
//    int cnt = 0;
//    num_os = 0; 
//    num_ns = 0; 
//    while (cnt < word.length()) {
//        char character = word[cnt]; 
//        if (character == 'N' || character == 'n') num_ns++; 
//        if (character == 'o' || character == 'O') num_os++; 
//        cnt++; 
// 
//    }
//
//    if (num_os == 1 && num_ns == 1) {
//        cout << word << " "; 
//    }
//
//    --n; 
//
//
//
//}
//================================================================///
///

//int n,last_digit ,  reverse = 0 ; 
//cin >> n; 
//while (n >  0  ) {
//
//    last_digit = n % 10; 
//    n = n / 10; 
//    reverse = reverse * 10 + last_digit; 
//    
//
//
//}
//cout << reverse << " " << reverse * 3 ;


//=====================================================///

int n, m; 
cin >> n >> m; 
int cnt = n ; 
int first_number = 1   ,second_number ;
while (cnt--) {

    
    second_number = 1; 
    while (second_number <= m) {    
        cout << first_number << " x " << second_number << " = " << first_number * second_number << '\n';
        second_number++; 
    }

    cout << "\n"; 
    first_number++; 
   

}










return 0;

}

