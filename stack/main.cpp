//
//  main.cpp
//  stack
//
//  Created by 村上候助 on 2017/10/03.
//  Copyright © 2017 村上候助. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int top, stack[100];

void initialize(){
    top = 0;
}

bool isFull(){
    return top > 100;
}

bool isEmpty(){
    return (top == 0);
}

void push(int x){
    if (isFull()){
        cout << "error" << endl;
    }
    top ++;
    stack[top] = x;
}

int pop(){
    if (isEmpty()){
        cout << "error" << endl;
    }
    top --;
    return stack[top+1];
}



int main(int argc, const char * argv[]) {
    initialize();
    int a, b;
    char s[100];
    while(scanf("%s", s) != EOF){
        if(s[0] == '+'){
            a = pop();
            b = pop();
            push(a+b);
        }
        else if(s[0] == '-'){
            a = pop();
            b = pop();
            push(b-a);
        }
        else if(s[0]== '*'){
            a = pop();
            b = pop();
            push(a*b);
        }
        else{
            push(atoi(s));
        }
    }
    
    cout << stack[1] << endl;
    
    return 0;
}
