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
// 
// 
// another answer 
// 
//int N;

//cin >> N;
//
//int pos = 0;
//
//while (pos < N) {
//    string str;
//    cin >> str;
//
//    // there are 8 different ways to make 2 letters no in lower/upper cases
//    if (str == "no" || str == "No" || str == "nO" || str == "NO" ||
//        str == "on" || str == "oN" || str == "On" || str == "ON")
//        cout << str << " ";
//
//    pos++;
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
//Problem #3: Multiplication table
//● Read an integer N and M, then print NxM lines for their multiplication table.
//● Input 3 4
//int n, m; 
//cin >> n >> m; 
//int cnt = n ; 
//int first_number = 1   ,second_number ;
//while (cnt--) {
//
//    
//    second_number = 1; 
//    while (second_number <= m) {    
//        cout << first_number << " x " << second_number << " = " << first_number * second_number << '\n';
//        second_number++; 
//    }
//
//    cout << "\n"; 
//    first_number++; 
//   
//
//}


/*Practice: Special Sum
● Read T for number of test cases.For each test case read integer N : number
of numbers.Then read N numbers a, b, c, ….. and compute the sum of :
○(a, b * b, c * c * c, d * d * d * d, e * e * e * e * e……)
○ That is the k - th number is repeated k times
*/
//int T; 
//cin >> T; 
//while (T--) {
//    int n, number, index= 0 ,sum = 0 , result= 1 ;
//    cin >> n; 
//    while (n--) {
//        cin >> number;
//        if (index == 0) {
//            sum += number; 
//        }
//        else {
//            int cnt = 0; 
//            while (cnt <= index) {
//                
//                result *=  number;
//                cnt++; 
//            }
//           
//            sum += result;
//            result = 1; 
//        }
//        index++;
//        
//       
//    }
//    cout << sum; 

//int T , value ,sum=0, result= 1 ; 
//cin >> T; 
//while(T--){
//    int n; 
//    cin >> n; 
//    for (int i = 0; i < n; i++) { 
//        cin >> value;
//        int result = 1; 
//        for (int j = 0; j < i + 1; j++) 
//            result *= value; 
//        
//
//        sum += result; 
//        
//
//
//    }
//    cout << sum;
//
//
//}


/*
Practice: Pair of numbers
● Read N, M, SUM.Find all pairs that has
A + B == SUM where
○ 1 <= A <= N
○ 1 <= B <= M
*/
//int n, m, sum,cnt=0; cin >> n >> m >> sum; 
//
//for (int i = 1; i <= n; i++) {
//    int j = sum - i; //sum = i + j 
//    if (j >= 1 && j <= m) {
//        cnt++; 
//    }
//
//
//
//}
//cout << cnt; 
//=======================================
/*Practice: Triples of numbers
● Read N, M, W.Find all triples that has
A + B <= C where
○ 1 <= A <= N
○ A <= B <= M
○ 1 <= C <= W*/
//int n; 
//cin >> n; 
//int a = 0 , b = 1  ,sum  ; 
//for (int i = 0 ; i < n; i++ ) {
//
//    if (i == 0) {
//        cout << a << " " << b << " ";
//
//    }
//    sum = a + b; 
//  
//    cout << sum<<" ";
//    a = b; 
//    b = sum; 
//    
//
//
//
//
//
//
//   
//
//
//
//}

//int n; 
//cin >> n; 
//
//for (int i = 0; i < n; i++) {
//    for (int j = 0 ; j < n; j++) {
//        if (j == i || j == n - i - 1) {
//            cout << "*"; 
//        }
//        else {
//            cout << " "; 
//        }
//
//    }
//    cout << "\n"; 
//}

//int cnt = 0; 
//for (int x = 50 ; x <= 300 ; x++) {
//
//    for (int y = 70; y <= 400; y++) {
//        if (x < y && (x+y)% 7 == 0 ) {
//            cnt++; 
//
//        }
//
//   }
//    
//}
//cout << cnt; 

////===========================another solve =================///


/*
     Count how many (a, b, c, d) with following property:
     ○ 1 <= a, b, c, d <= 200
     ○ a + b = c + d
*/
//int cnt = 0; 
//for (int a = 1; a <= 200; a++) {
//    for (int b = 1; b <= 200; b++) {
//        for (int c = 1; c <= 200; c++) {
//            int d = a+b-c; 
//            if (d >= 1 && d <= 200) {
//                cnt++;
//            }
//            
//
//        }
//    }
//
//}
//cout << cnt; 



/*===================another solution=============================*/

//int cnt = 0;
//for (int a = 1; a <= 200; a++) {
//    for (int b = 1; b <= 200; b++) {
//        for (int c = 1; c <= 200; c++) {
//            for (int d = 1; d <= 200; d++) {
//                if ((a + b) == (c + d)) {
//                    cnt++; 
//                }
//           }
//
//        }
//    }
//
//}
//cout << cnt;

/*=====================================================*/
//Read integer N(< 500), then print all prime numbers <= N
//    ○ Output should be comma separated, as below
//    ■ Don’t print comma after the last number
//    ● Input ⇒ Output
//    ○ 18 ⇒ 2, 3, 5, 7, 11, 13, 17
//    ■ No comma after last number!
/*=======================================================*/

//int n; 
//cin >> n; 
//bool first_print = true; 
//for (int i = 2; i <= n; i++) {
//    bool notPrime = false;
//    for (int j = 2; j <= n; j++) {
//        if (i % j == 0 && i != j  ) {
//            notPrime = true; 
//            break; 
//        }
//
//    }
//    if (!notPrime) { 
//        if (!first_print)
//            cout << ","; 
//        cout << i;
//        first_print = false; 
//
//
//    }
//}


/*================================================*/


/*
Homework 6:
Digits sum in range
 ● Read three numbers N, A, B. Print the summation of the numbers between 1
and N whose sum of digits is between A and B.
 ● Input / Output
 ○ 20 2 5 ⇒ 84
 ■ Numbers whose sums of digits are between 2 and 5, are: 2,3,4,5,11,12,13,14, 20.
 ● E.g. digits sum of 13 is 4 : which is between (2, 5)
 ○ 10 1 2 ⇒ 13
 ○ 100 4 16 ⇒ 4554

*/
int n, a, b; 
cin >> n >> a >> b; 
int sum = 0;
int sum_digits = 0; 
int digit ,div; 

for (int i = 1; i <= n; i++) {
    div = i;
    while (div > 0 ) {
        
        digit = div%10;
        div /= 10; 
        sum_digits+= digit;

    }
    if (sum_digits >= a && sum_digits <= b) {
        sum += i; 
    }
    sum_digits = 0; 



}
cout << sum; 


return 0;

}

