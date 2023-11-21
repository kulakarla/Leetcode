#include <iostream>
#include <vector>
#include <string>

using namespace std;


bool isAnagram(string s, string t);

bool isAnagram(string s, string t) {
        int mem1[26];

        fill(begin(mem1), end(mem1), 0);

        if( s.length() != t.length() ){
            return false;
        }

        for (int i = 0; i < s.length(); i++){
            mem1[int(s[i]) - 97] += 1;
            mem1[int(t[i]) - 97] -= 1;


        }
        for(int j = 0; j < size(mem1); j++){
            if ( mem1[j] != 0){
                return false;
            }
        }

        return true;
        

}

vector<vector<string>> groupAnagrams(vector<string>& strs);

int main() {

    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> groupAnagramsStuff = groupAnagrams(words);

    cout << "this IS IT" << endl;

    return 0;
}


vector<vector<string>> groupAnagrams(vector<string>& strs){
    vector<vector<string>> final;

    while(strs.size() != 0){
        string currentWord = strs.back();
        vector<string> currentWordAnagrams;
        currentWordAnagrams.push_back(currentWord);
        strs.pop_back();

        for(int i = 0; i < strs.size(); i++){
            if(strs[i].length() != currentWord.length()){
                continue;
            }else{
                if(isAnagram(currentWord, strs[i])){
                    currentWordAnagrams.push_back(strs[i]);
                    strs.erase(strs.begin() + i);

                }
            }
        }

        final.push_back(currentWordAnagrams);


    }

    return final;

}







