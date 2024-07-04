
#include <iostream>
#include <string>
#include <unordered_map>

bool canConstruct(std::string ransomNote, std::string magazine) {
    std::unordered_map<char, int> blocknote;

    for (char c : magazine) {
        blocknote[c]++;
    }

    for (char c : ransomNote) {
        if (blocknote[c] > 0) {
             blocknote[c]--;
        }
        else {
            return false;
        }
    }

    return true;
}

int main()
{
    std::string ransomNote = "ss";
    std::string magazine = "rrtsyt";
    return canConstruct(ransomNote, magazine);
}

