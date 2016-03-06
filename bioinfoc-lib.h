int getHammingDistance(char *str1, char *str2){
    int len1, len2, index, count = 0;
    
    len1 = strlen(str1);
    len2 = strlen(str2);
    
    if(len1 != len2) return -1;
    for(index = 0; index < len1; index++){
        if(str1[index] != str2[index]) count++;
    }
    
    return count;
}