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
int N; 
cin >> N; 
int stars  , spaces , cnt ;
int row = 1; 
while (row <= N) {
    
    stars = 2 * row - 1;
    spaces = N - row; 
    cnt = 1; 
    while (cnt <= spaces) {
        cout << ' '; 
        ++cnt; 
    }

    cnt = 1; 

    while (cnt <= stars) {
        cout << "*"; 
        ++cnt; 
    }

    row++;
    cout << "\n"; 
}


while (row > 0 ) {

    stars = 2 * row - 1;
    spaces = N - row;
    cnt = 1;
    while (cnt <= spaces) {
        cout << ' ';
        ++cnt;
    }

    cnt = 1;

    while (cnt <= stars) {
        cout << "*";
        ++cnt;
    }

    row--;
    cout << "\n";
}







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
return 0;

}

