#ifndef OP_H
# define OP_H
# define NBR_OP 5

int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

typedef int(*t_op_ptr)(int, int);

typedef struct	s_op
{
	t_op_ptr	t_fun_addr;
	char		operator;
}				t_op;

#endif
