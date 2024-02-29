// Q1. Print all the odd numbers from 1 to 100
#include<iostream>
using namespace std;
int main(){
    int i ;
    for(i=1;i<=100;i++){
        if(i%2!=0)cout<<i<<endl;

    }

}

// Q2. Print all numbers from 1 to 100 that are divisible by 3.
#include<iostream>
using namespace std;
int main(){
    int i ;
    for(i=1;i<=100;i++){
        if(i%3==0)cout<<i<<endl;

    }

}

// Q3. Print the table of ‘n’. Here ‘n’ is an integer which the user will input
#include<iostream>
using namespace std;
int main(){
    int n,y;
    cout<<" enter the number : ";
    cin>>n;
    int i =1;
    while(i<=10){
        y = n*i;
        cout<<y<<endl;
        i++;
        }
}

// Q4. Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n,y;
    cout<<" enter the number : ";
    cin>>n;
    y =4;
    for(int i=1;i<=n;i++){
       cout<<y<<endl;
        y +=3;
        }
}

// Q5. Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n,y;
    cout<<" enter the number : ";
    cin>>n;
    y =3;
    for(int i=1;i<=n;i++){
       cout<<y<<endl;
        y *=4;
        }
}

//Q6. Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
#include<iostream>
using namespace std;
int main(){
    cout<<"small letters"<<endl;
    int x = 0;
    while(x<26){
        cout<<(char)(x +'a')<< " is " <<(int)( x+'a')<<endl;
        x++;
    }
    cout<<"Capital letters"<<endl;

     int y = 0;
    while(y<26){
        cout<<(char)(y +'A')<< " is " <<(int)( y+'A')<<endl;
        y++;
    }
    
    
}
    
    

