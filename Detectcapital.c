bool detectCapitalUse(char* word) {
    int count = 0, first = 0;
    
    for (int i = 0; i < strlen(word); i++) {
        if (i == 0 && isupper(word[i])) {
            first = 1;
            count++;
        }
        else if (isupper(word[i])) {
            count++;
        }
    }

    if (count == strlen(word) || count == 0) return true;
    else if (first == 1 && count == 1) return true;
    else return false;
}