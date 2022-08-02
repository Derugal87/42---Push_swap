/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:55:44 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/02 15:52:25 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "errno.h"
# include <stdio.h>

typedef struct s_node {
	int				data;
	int				index;
	int				pos;
	struct s_node	*next;
}	t_node;

//Functions
void		check_param(char **argv);
void		sort_int_arr(int *tab, int size);
void		check_dubl(int *arr, int argc);
void		set_pos(t_node **head, int *arr, int size);
char		**get_final_argv(char **argv);
int			get_final_size(char **final_argv);

//list_utils
void		del_node(t_node **head);
t_node		*find_node(t_node **head, int data);
t_node		*ft_lstlast_ps(t_node *lst);
t_node		*ft_lstprelast_ps(t_node *lst);
int			ft_lstsize_ps(t_node **head);
void		push(t_node **head, int data, int index, int pos);
void		print_list(t_node **a);

//operations
void		sa(t_node *a, int flag);
void		sb(t_node *b, int flag);
void		ss(t_node *a, t_node *b, int flag);
void		pa(t_node **a, t_node **b);
void		pb(t_node **a, t_node **b);
void		ra(t_node **a, int flag);
void		rb(t_node **b, int flag);
void		rr(t_node **a, t_node **b, int flag);
void		rra(t_node **a, int flag);
void		rrb(t_node **b, int flag);
void		rrr(t_node **a, t_node **b, int flag);

#endif