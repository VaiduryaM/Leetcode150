//71. Simplify Path


class Solution {
public:
    string simplifyPath(string path) {
        
        string fullPath;
        stack<string> p;

        for(int i=0; i< path.length();i++){

            if(path[i]=='/') continue;         

            //iterate till you get full folder name i.e., till next /
            string folderName;
            while(i< path.length() && path[i] != '/'){
                folderName += path[i];
                i++;
            }

            //one period found - nothing to do
            if(folderName == ".") continue;
            //two periods found - pop last folder name
            else if(folderName == ".."){
                if(!p.empty()) p.pop();
            }
            else p.push(folderName);

        }

        //construct string with slashes
        while(!p.empty()){
            fullPath = "/" + p.top() + fullPath; //+fullpath at last because stack is LIFO
            p.pop();
        }

        if(fullPath.length() == 0) return "/";



        return fullPath;
    }


};