int lengthOfLongestSubstring(char* s) {
    int left = 0, maxlenght = 0;
    int hashset[128] = {0};

    for (int right = 0; s[right] != '\0'; right++) {
        while (hashset[s[right]] > 0) {
            hashset[s[left]]--;
            left++;
        }
        hashset[s[right]]++;

        maxlenght = fmax(maxlenght, right - left + 1);
    }
    return maxlenght;
}
