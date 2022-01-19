/* Write a function that takes a string of braces, and determines if the order of the braces is valid. It should return true if the string is valid, and false if it's invalid.

All input strings will be nonempty, and will only consist of parentheses, brackets and curly braces: ()[]{}. */

/*
    Programmet använder sig av logiken av datorstrukturen stack. Alltså det som kommer in sist 
    åker ut först. Därav om det senaste var en matchande "brace" så tas den senast tillagda 
    (som fortfarande finns kvar i stacken) bort. Om det inte är en matching så returna false. 

*/


#include <iostream>
#include <vector>

bool valid_braces(std::string braces);

int main() {

    // Tester för att visa att koden fungerar
    bool at1 = valid_braces("()");  // sant
    bool at2 = valid_braces("[(])");  // falsk
    bool at3 = valid_braces("[](){}");  // sant
    bool at4 = valid_braces("}}]]))}])");   // falsk
    bool at5 = valid_braces("([{}])");  // sant

    // bool true -> 1, bool false -> 0
    std::cout << at1 << ' ' << at2 << ' ' << at3 << ' ' << at4 << ' '<< at5 << std::endl; 

    return 0;
}

bool valid_braces(std::string braces) {

    int len_brace = braces.length();
    std::vector <char> stack;

    for(int i = 0; i < len_brace; ++i) {

        switch(braces[i]) {
            case '(': 
                stack.push_back(braces[i]);
                break;
                
            case '[': 
                stack.push_back(braces[i]);
                break;
            
            case '{':
                stack.push_back(braces[i]);
                break;

            case ')':
                if (!stack.empty()) {
                    if (stack.back() == '(')
                        stack.pop_back();
                    else 
                        return false;
                }
                else if(stack.empty())
                    return false;
                break;

            case ']':
                if (!stack.empty()) {
                    if (stack.back() == '[')
                        stack.pop_back();
                    else
                        return false;
                }
                else if (stack.empty())
                    return false;
                break;

            case '}':
                if (!stack.empty()) {
                    if (stack.back() == '{')
                        stack.pop_back();
                    else 
                        return false;
                }
                else if (stack.empty())
                    return false;
                break;
            
            default:
                std::cout << "Not permitted char" << std::endl;
        }   
    }
    if (stack.empty())
        return true;
    else
        return false;
}
