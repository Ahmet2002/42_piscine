#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void rush(int width, int height){
	int i = 0;
	int j = 0;

	while(i < height){
		if(i == 0){
		while(j < width){
			if(j == 0) ft_putchar('A');
			else if(j == width - 1) ft_putchar('C');
			else ft_putchar('B');
			j++;
			}
		}else if(i == height - 1){
			while(j < width){
				if(j == 0) ft_putchar('C');
				else if(j == width - 1) ft_putchar('A');
				else ft_putchar('B');
				j++;
			}
		}else {
			while(j < width){
				if(j == 0 || j == width - 1) ft_putchar('B');
				else ft_putchar(' ');
				j++;
			}
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int main(){
	rush(5, 3);
	return 0;
}
