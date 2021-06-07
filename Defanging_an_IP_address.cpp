class Solution {
public:
    string defangIPaddr(string address) {
    
        string IP = "";
        
        for (int i = 0; i < address.size(); i++) {
            
            if (address[i] =='.') {
                IP += '[';
                IP += '.';
                IP += ']';
            }
            
            else {
                IP += address[i];
            }
        }
        return IP;
    }
};
