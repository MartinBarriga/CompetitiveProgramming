class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        bool lookingForLocalName;
        string email;
        map<string, bool> storagedEmails; 
        int amountOfDifferentEmails = 0;
        for(int j = 0; j < emails.size(); j++){
            lookingForLocalName = true;
            email = "";
            for(int i = 0; i < emails[j].size(); i++){
                if(lookingForLocalName == true){
                    if(emails[j][i] == '+'){
                        while(emails[j][i] != '@'){
                            i++;
                        }
                    }
                    if(emails[j][i] != '.'){
                        email.push_back(emails[j][i]);
                        if(emails[j][i] == '@') lookingForLocalName = false;
                    }
                }
                else{
                    email.push_back(emails[j][i]);
                }
            }
            if(storagedEmails.find(email) == storagedEmails.end()){
                storagedEmails[email] = true;
                amountOfDifferentEmails++;
            }  
        }
        return amountOfDifferentEmails;
    }
};