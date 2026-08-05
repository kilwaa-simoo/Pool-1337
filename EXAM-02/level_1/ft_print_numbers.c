#include<unistd.h>
void	ft_print_numbers(void){
    int i = 0;
    char c;
    while(i <= 9){
        c = i + '0';
        write(1, &c, 1);
        i++;
    }
}