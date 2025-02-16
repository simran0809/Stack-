// with advanced  data structures 

 // 1 Stacks 
    // Definition : A stack is a linear data structure that follows the last IN First Out (LIFO) Part 
    //  Important Methods : Push(), Pop(), Top(), Isempty()
    
    // syntax Example :
    // #include <stack>
    //std:: stack<int> s;

    //s.push(1) ; //Pushes 1 onto the stack 
    //s.pop(); //removes the top element from the stack 
    // int topelement = s.top(); //retrives the top element without removing it .

// books one by one on table stack example 
//stack is like container to put elements  , LIFO 


 
    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
        stack<int> st;  // Define a stack of integers
    
        st.push(5);
        st.push(2);
        st.push(7);
    
        // Print the top element before popping
        cout << "Top element before pop: " << st.top() << endl;
    
        // Pop the top element
        st.pop();

        st.top();

        //st.size();
    
        // Print the new top element
        cout << "New top element after pop: " << st.top() << endl;
    
        // Print size of the stack
        cout << "Stack size: " << st.size() << endl;
    
        return 0;
    }
    


  
     