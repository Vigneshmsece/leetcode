
class Solution {
public:
    bool rotateString(string a, string b) {
        if(a=="" && b=="")
            return true;
        if(a=="")
            return false;
        if(b=="")
            return false;
        if(a==b)
            return true;
        
        int count = a.length();
        while(count>0 && a!=b){
            a+=a[0];
            a.erase(a.begin()+0);
            count-=1;
        }
        return a==b;
    }
        
    
};
