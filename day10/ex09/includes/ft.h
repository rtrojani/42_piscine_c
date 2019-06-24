#ifndef OP_H
# define OP_H
# define NBR_OP 5

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_usage(int a, int b);
int		mod(int a, int b);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

typedef int(*t_op_ptr)(int, int);

typedef struct	s_opp
{
	char		*char_operator;
	t_op_ptr	t_fun_addr;
}				t_opp;

#endif
