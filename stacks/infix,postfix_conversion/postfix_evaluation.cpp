#include<iostream> 
#include<stack>
#include<math.h>
using namespace std;

int postfix_eval(string s){
    stack<int> st;

    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();

            switch (s[i]){
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1-op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '^':
                    st.push(pow(op1,op2));
                    break;
            }
        }
    }

    return st.top();
}

string string_post_eval(string s){
    stack<string> st;
    stack<char> ch;

    for(int i=0;i<s.length();i++){
        if((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            ch.push(s[i]);
        }else{
            string op1,op2;
            if(ch.size()>1){
                op2=ch.top();
                ch.pop();
                op1=ch.top();
                ch.pop();
            }else if(ch.size()==1){
                op2=ch.top();
                ch.pop();
                op1=st.top();
                st.pop();
            }else{
                op2=st.top();
                st.pop();
                op1=st.top();
                st.pop();
            }

            switch(s[i])
            {
            case '+':
                st.push("("+ op1+"+"+op2+ ")");
                break;
            case '-':
                st.push("(" +op1+"-"+op2+ ")");
                break;
            case '*':
                st.push("(" +op1+"*"+op2+ ")");
                break;
            case '/':
                st.push("(" +op1+"/"+op2+ ")");
                break;
            }
        }
    }

    return st.top();
}

int main(){
string s="46+2/5*7+";
string s2="AB-CD+*";
string s3="ab+cd+/de*-";
cout<<string_post_eval(s3);
}