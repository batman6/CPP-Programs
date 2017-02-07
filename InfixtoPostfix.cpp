//Defining Preprocessor Directory
#include <iostream>
#include <new>
using namespace std;


//constant variable name for better understanding
const char POWER = '^',MULTIPLY = '*', DIVIDE = '/', MINUS = '-', PLUS = '+',OPENBRACKET = '(',CLOSEBRACKET = ')';

//defining stack for storing operators
class Stack {
private:
    int Top;
    int size;
    char *array;
public:
	// Constructors
    Stack(int n): Top(-1) {
        size = n;
        array = new char[n];
    }

	//Destructors
    ~Stack() {
        delete[] array;
    }

	//Adding operator to stack
    void push(char n) {
        array[++Top] = n;
    }

	//removing operator from stack
    char pop() {
        return array[Top--];
    }

	//returning top of stack
    char top() {
        return array[Top];
    }

	//checking weathear the stack is null
    bool isNull() {
        if(Top == -1)
            return true;
        return false;
    }

	// function to get the precedence of operator
    bool isLowPrecedence(char ch) {
        char c = top();
        if(isNull() || c == '(') {
            return true;
        }
        switch(ch) {
            case POWER:
                return true;
                break;
            case MULTIPLY:
                if(c == PLUS || c==MINUS)
                    return true;
                break;
            case DIVIDE:
                if(c == PLUS || c==MINUS)
                    return true;
                break;
        }

        return false;
    }
};

//stating of main function
int main() {
	//defining variables
    char ch;
    string str;
    int trigger = 1;
	//repeating for multiple times
    do {
		//asking for input
        cout << "Enter the Infix Expression: ";
        cin >> str;
        Stack stack(str.length());
        int i,len = str.length();

		//giving answer
        cout << "Postfix of the Expression is: ";
		//repeating for each word and operator
        for(i=0;i<len;i++) {
            ch = str[i];
            if(ch == ' ')
                continue;
            if(isalnum(ch)) {
                cout << ch;
            } else if (ch == '(') {
                stack.push(ch);
            } else if (ch == ')') {
                while(1) {
                    ch = stack.pop();
                    if(ch == OPENBRACKET)
                        break;
                    cout << ch;
                }
            } else {
                if(stack.isLowPrecedence(ch)) {
                    stack.push(ch);
                } else {
                    do {
                        cout << stack.pop();
                    }while(!stack.isLowPrecedence(ch));
                    stack.push(ch);
                }
            }
        }
		//Flushing the stack
        while(!stack.isNull()) {
            cout << stack.pop();
        }

        cout << endl << "\t >> Press Enter to Continue (0 to quit) ::";
        while(cin.get(ch) && ch != '\n')continue;
        getline(cin,str,'\n');
        if(str == "0") {
            trigger = 0;
        }
    }while(trigger);
    return 0;
}

