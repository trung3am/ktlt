long string2int(char *str){
    if (str[0] == '\0' || str[0]==0) return -1;
    
    int i = 0;
    while(str[i]!= '\0'){
        if(int(str[i])<48 || int(str[i])>57) {
            return -1;  
        }
        i++;
    }
    i--;
    long long int m = 1;
    long int res = 0;
    while(i>=0){
        res += (int(str[i])-48)*m;
        m*=10;
        i--;
    }
    return res;
    
}
