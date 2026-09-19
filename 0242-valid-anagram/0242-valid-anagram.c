bool isAnagram(char* s, char* t) {
    int count[26]={0};
    int i=0;
    while(s[i]!='\0')
    {
        count[s[i]-'a']++;
        i++;
    }
    i=0;
    while(t[i]!='\0')
    {
        count[t[i]-'a']--;
        i++;
    }

    for(int i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            return false;
        }
        
    }
    return true;
}