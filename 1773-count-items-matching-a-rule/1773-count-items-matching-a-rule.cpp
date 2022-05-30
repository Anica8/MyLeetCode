class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int c=0;
        for(int i=0;i<items.size();i++){
            if(ruleKey=="type"){
                if(ruleValue==items[i][0])
                    c+=1;
            }else if(ruleKey=="color"){
                if(ruleValue==items[i][1])
                    c+=1;
            }else if(ruleKey=="name"){
                if(ruleValue==items[i][2])
                    c+=1;
            }
        }
        return c;
    }
};