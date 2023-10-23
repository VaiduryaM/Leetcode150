//151. Reverse Words in a String


class Solution {
public:
    string reverseWords(string s) {
        
        //reverses everything
        reverse(s.begin(), s.end());
        /*
        s=s+' ';
        
        int j =0;
        for(int i=0; i<s.length(); i++){
            if(s[i]==' '){
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
        }
         s.pop_back();  // Remove the extra space at the end
         */

         int n = s.size();
         int k = 0;
         for(int i = 0; i<n;++i){
             if(s[i] != ' ')
             {
                if(k!=0)
                    s[k++]=' ';

                int j = i;
                while(j<n && s[j]!=' ')
                s[k++] = s[j++];

                reverse(s.begin()+k-(j-i), s.begin()+k);

                i = j;
            }
         }
         cout<<"before:"<<s<<endl;
         //removes extra space/chracters
         s.erase(s.begin()+k, s.end());
         cout<<"after:"<<s<<endl;
        return s;

    }
};