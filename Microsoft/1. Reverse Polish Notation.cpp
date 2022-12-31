class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string x : tokens){
            if(x == "+"){
                //first element: 2
                int a = s.top();
                s.pop();
                
                //second element: 3
                int b = s.top();
                s.pop();
                
                s.push(a+b);
            }

            else if(x == "-"){
                //first element: 2
                int a = s.top();
                s.pop();
                
                //second element: 3
                int b = s.top();
                s.pop();
                
                s.push(b-a);
            }
        
            else if(x == "*"){
                //first element: 2
                int a = s.top();
                s.pop();
                
                //second element: 3
                int b = s.top();
                s.pop();
                
                s.push(a*b);
            }

            else if(x == "/"){
                //first element: 2
                int a = s.top();
                s.pop();
                
                //second element: 3
                int b = s.top();
                s.pop();
                
                s.push(b/a);
            }

            else{
                s.push(stoi(x));
            }
        }
        return s.top();
    }
};
