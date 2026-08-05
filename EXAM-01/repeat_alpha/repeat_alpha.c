#include<unistd.h>
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        int repeat;
        char c;
        while(av[1][i] != '\0')
        {
            c = av[1][i];
            if(c >= 'a' && c <= 'z')
            {
                repeat = c - 'a' + 1;
            }
            else if(c >= 'A' && c <= 'Z')
            {
                repeat = c - 'A' + 1;
            }
            else
            {
                repeat = 1;
            }
            while(repeat > 0){
                write(1, &c, 1);
                repeat--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}