int strStr(char* haystack, char* needle) {
    int count = 0;
    int ptr = 0;
    int m = strlen(haystack);
    int n = strlen(needle);

    for (int i = 0; i < m; i++) {
        ptr = i;
        for (int j = 0; j < n; j++) {
            if (haystack[i] == needle[j]) {
                count++;
                i++;
            } else {
                count = 0;
            }
            if (count == n) {
                return ptr;
            }
        }
        count =0;
        i=ptr;
    }
    return -1;
}
