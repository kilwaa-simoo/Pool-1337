char    *ft_strrev(char *str){
    int i = 0;
    int j;
    char temp;
    if(!str || !str[0]){
        return (str);
    }
    while(str[i]){
        i++;
    }
    i--;
    j = 0;
    while(j < i){
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
    return (str);
}