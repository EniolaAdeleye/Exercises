class Solution {
public:
    string interpret(string command) {
        string output = "";
        
        for (int i = 0; i < command.size(); i++) {

            if (command[i] == 'G') {
                output += 'G';
            }
            
            else if (command[i] == '(' && command[i+1] == ')') {
                output += 'o';
            }
            
            else if (command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l') {
                output += "al";
            }
            
        }
        
        return output;
    }
};
