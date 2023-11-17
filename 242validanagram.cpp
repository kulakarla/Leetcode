#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isAnagram(string s, string t);

int main() {

    cout << "hey" << endl;


    cout << isAnagram("anagram", "nagaram") << endl;

    return 0;
}

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
