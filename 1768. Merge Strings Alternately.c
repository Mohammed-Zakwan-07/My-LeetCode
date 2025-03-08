char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1), len2 = strlen(word2);
    char* result = (char*)malloc((len1 + len2 + 1) * sizeof(char));
    int i = 0, j = 0, k = 0;
    while(word1[i] && word2[j]) {
        result[k++] = word1[i++];
        result[k++] = word2[j++];
    }

    while (word1[i]) result[k++] = word1[i++];
    while (word2[j]) result[k++] = word2[j++];
    
    result[k] = '\0';
    return result;
}
