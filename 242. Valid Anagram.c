bool isAnagram(char* s, char* t) {
    if(strlen(s)!=strlen(t)){
        return false;
    }  
    int hash1[26] ={0};
    int hash2[26]={0};
    for(int i=0;s[i]!='\0';i++){
        hash1[s[i]-'a']++;
        hash2[t[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(hash1[i]!=hash2[i]){
            return false;
        }
        
    }
  return true;
}
