// ques 1
//  take positive integer input and tell if it is even or odd

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter A Number : ";
//     int x;
//     cin>>x;
//     if(x==0){
//         cout<<x<<" 0is considerd as a even number.";
//     }
//     else if(x%2==0){
//         cout<<x<<" is an even number.";
//     }
//     else if(x%2!=0){
//         cout<<x<<" is odd number.";
//     }else{
//         cout<<x<<"invalid input!";
//     }
// }



// Ques 2
// TAKE POSTIVE INTEGER  INPUT AND TELL IF IT IS DIVISIBLE BY 5 OR NOT

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"ENTER A NUMBER : ";
//     cin>>x;
//     if (x%5==0)
//     {
//         cout<<x<<" is divisible by 5.";
//     }else{
//         cout<<x<<" is not divisible by 5.";
//     }
//     return 0;
// }


// QUES 3

// given an integer. print the absolute value of that integer



// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"ENTER A NUMBER : ";
//     cin>>x;
//     if (x<0)
//     {
//         cout<<"Absolute value of the input number is "<<-1*x;
//     }else{
//         cout<<"Absolute value of the input number is "<<x;
//     }
//     return 0;
// }






// Ques 4

// if cost price and selling price of an item is input through an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. also determine how much profit he made or loss hi incurred

// #include<iostream>
// using namespace std;
// int main(){
//     int cp,sp;
//     cout<<"Enter cost price of the item : ";
//     cin>>cp;
//     cout<<"Enter sell price of the item : ";
//     cin>>sp;
//     if(cp>sp){
//         cout<<"he have loss of rupeess "<<cp-sp;
//     }
//     else{
//         cout<<"He have made profite of rupeess "<<sp-cp;
//     }
//     return 0;
// }



// Ques 5

// take positive input and tell if it is a three digit number or not

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;
//     if(x>=100 &&  x<1000)
//     {
//         cout<<x<<" is a three digit Number.";
//     }else{
//         cout<<x<<" is not a three digit Number.";
//     }
//     return 0;
// }




// Ques 6

//  take input integer which is divisible by 3 and 5 both

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;
//     if(x%3==0 && x%5==0)
//     {
//         cout<<x<<" is divisible by 3 and 5 both";
//     }else if(x%5==0){
//         cout<<x<<" is divided by 5 but it cannot be divided by 3";
//     }else if(x%3==0){
//         cout<<x<<" is divisible by 3 but cannot be divided by 5";
//     }else{
//         cout<<"Invalid Input!";
//     }
//     return 0;
// }


// Ques 7
// Take 3 postive integers input and print the greatest of them

// take three postive integers input and output and print the gretest of them

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y,z;
//     cout<<"ENTER THE NUMBER: ";
//     cin>>x;
//     cout<<"ENTER THE NUMBER: ";
//     cin>>y;
//     cout<<"ENTER THE NUMBER: ";
//     cin>>z;
//     if(x>y){
//         if(x>z){
//             cout<<x<<" is the biggest among all three.";
//         }else{
//             cout<<z<<" is the biggest among all the three numbers.";
//         }
//     }else if(y>x){
//         if(y>z){
//             cout<<y<<" is the the biggest among all three numbers.";
//         }else{
//             cout<<z<<" is the biggest among all three numbers.";
//         }
//     }else if(z>x){
//         if(z>y){
//             cout<<z<<" is biggest among all the three numbers.";
//         }else{
//             cout<<y<<" is biggest among all three numbers.";
//         }
//     }
//     return 0;
// }



// second method




// #include<iostream>
// using namespace std;
// int main(){
//     int x,y,z;
//     cout<<"ENTER THE NUMBER: ";
//     cin>>x;
//     cout<<"ENTER THE NUMBER: ";
//     cin>>y;
//     cout<<"ENTER THE NUMBER: ";
//     cin>>z;
//     if(x>y && x>z){
//         cout<<x<<" is biggest among all three.";
//     }else if(y>x && y>z){
//         cout<<y<<" is greatest among all three numbers.";
//     }else{
//         cout<<z<<" is greatest between all the three numbers.";
//     }
//     return 0;
// }



// ques 8

// ALPHABET OR NOT 



// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter the character: ";
//     cin>>ch;
//     // a to z -> 97 to 122
//     // A to Z -> 65 to 90
//     int ascii = (int)ch;
//     if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
//         cout<<"the character is an alphabet";
//     }
//     else{
//         cout<<"the character is not an alphabet";
//     }
//     return 0;
// }


 
















































