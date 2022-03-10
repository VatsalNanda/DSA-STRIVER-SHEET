//
//  main.cpp
//  q1-Implement stack using arrays
//
//  Created by vatsal nanda on 10/03/22.
//

#include <iostream>
using namespace std;
int n;
cin>>n;
int arr[n];
int top=-1;
void push(int x)
{
    arr[top++]=x;
}

void pop(){
    top--;
}
int top_fun(){
    return arr[top];
}
int size(){
    return top+1;
}
bool isEmpty()
{
    return (top==-1);
}
int main(int argc, const char * argv[]) {
   
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    pop();
    top_fun();
    isEmpty();
    size();
    
    return 0;
}
