class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
        string newaddress;
        for(int i=0; i<n; i++){
            if(address[i]=='.'){
                newaddress+="[.]";
            }else{
                newaddress+=address[i];
            }
        }
        return newaddress;
    }
};