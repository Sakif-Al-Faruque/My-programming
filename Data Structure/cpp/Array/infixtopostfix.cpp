#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int precedence(char op){
    if(op == '+' || op == '-'){
        return 1;
    }else if(op == '*' || op == '/'){
        return 2;
    }else if(op == '^'){
        return 3;
    }else{
        return -1;
    }
}

void infixToPostfix(string exp){
    stack<char> s;
    string result;

    for(int i=0; i<exp.length(); i++){
        char c = exp[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c == 'Z') || (c == '0' && c == 9)){
            result += c;
        }else if(c == '('){
            s.push('(');
        }else if(c == ')'){
            while (s.top() != '(' && !s.empty())
            {
                char temp = s.top();
                s.pop();
                result += temp;
            }
            s.pop();
        }else{
            while (!s.empty() && precedence(c) <= precedence(s.top()))
            {
                char temp = s.top();
                s.pop();
                result += temp;
            }
            s.push(c);
        }
    }
    while (!s.empty())
    {
        char temp = s.top();
        s.pop();
        result += temp;
    }
    
    cout<<"Postfix expression: "<<result<<endl;

}

int main(){
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    infixToPostfix(exp);
    
    return 0;
}