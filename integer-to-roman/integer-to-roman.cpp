class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, string> mp;
        string ans = "";
        
        mp[1] = "I";  mp[2] = "II"; mp[3] = "III"; mp[4] = "IV";
        mp[5] = "V"; mp[6] = "VI"; mp[7] = "VII"; mp[8] = "VIII";
        mp[9] = "IX"; mp[10] = "X"; mp[40] = "XL"; mp[90] = "XC";
        mp[400] = "CD"; mp[900] = "CM"; mp[50] = "L"; mp[100] = "C";
        mp[500] = "D"; mp[1000] = "M";
        while(num >= 1000){
            ans += mp[1000];
            num -= 1000;
        }
        while(num < 1000 and num >= 900){
            ans += mp[900];
            num -= 900;
        }
        while(num < 900 and num >= 500){
            ans += mp[500];
            num -= 500;
        }
        while(num < 500 and num >= 400){
            ans += mp[400];
            num -= 400;
        }
        while(num < 400 and num >= 100){
            ans += mp[100];
            num -= 100;
        }
        while(num < 100 and num >= 90){
            ans += mp[90];
            num -= 90;
        }
        while(num < 90 and num >= 50){
            ans += mp[50];
            num -= 50;
        }
        while(num < 50 and num >= 40){
            ans += mp[40];
            num -= 40;
        }
        while(num < 40 and num >= 10){
            ans += mp[10];
            num -= 10;
        }
        while(num < 10){
            ans += mp[num];
            break;
        }
        return ans;
    }
};