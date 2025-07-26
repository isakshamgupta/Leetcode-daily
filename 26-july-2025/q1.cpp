//3136. Valid Word

class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3)
            return false; // 606 / 677
        bool hasvowel = false;
        bool hasconsonent = false;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == '@' || word[i] == '#' || word[i] == '$') // 541 / 677
                return false;
            if (isalpha(word[i])) {
                char lower = tolower(word[i]);
                if (lower == 'a' || lower == 'e' || lower == 'i' ||
                    lower == 'o' || lower == 'u') {
                    hasvowel = true;
                } else {
                    hasconsonent = true;
                }
            }
        }
        return hasvowel && hasconsonent;
    }
};