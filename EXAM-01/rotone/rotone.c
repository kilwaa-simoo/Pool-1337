#include<unistd.h>
int main(int ac, char **av)
{
    if(ac == 2){
        int i = 0;
        char c;
        while(av[1][i])
        {
            c = av[1][i];
            if(c >= 'a' && c <= 'y')
            {
                c++;
            }
            else if(c == 'z'){
                c = 'a';
            }
            else if(c >= 'A' && c <= 'Y'){
                c++;
            }
            else if(c == 'Z'){
                c = 'A';
            }
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}