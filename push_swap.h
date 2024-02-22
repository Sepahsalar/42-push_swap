/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:04:07 by asohrabi          #+#    #+#             */
/*   Updated: 2024/02/22 18:30:28 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list_m
{
	int				n;
	int				i;
	struct s_list_m	*next;
}					t_list_m;

t_list_m	*parse_args(int argc, char **argv);
t_list_m	*ft_lstlast_m(t_list_m *lst);
t_list_m	*ft_lstnew_m(int content);
int			ft_lstsize_m(t_list_m *lst);
void		ft_lstadd_back_m(t_list_m **list, t_list_m *new);
int			ft_min(t_list_m *list);
int			ft_max(t_list_m *list);
int			ft_atoi_m(const char *str);
void		sa(t_list_m **list_a, int i);
void		sb(t_list_m **list_b, int i);
void		ss(t_list_m **list_a, t_list_m **list_b);
void		pa(t_list_m **list_a, t_list_m **list_b);
void		pb(t_list_m **list_b, t_list_m **list_a);
void		ra(t_list_m **list_a, int i);
void		rb(t_list_m **list_b, int i);
void		rr(t_list_m **list_a, t_list_m **list_b);
void		rra(t_list_m **list_a, int i);
void		rrb(t_list_m **list_b, int i);
void		rrr(t_list_m **list_a, t_list_m **list_b);
void		ft_free(t_list_m **list);
int			check_sorted(t_list_m *list);
int			check_dup(t_list_m *list);
void		check_args(char **argv);
void		ft_sort(t_list_m **list_a);
int			find_index(t_list_m *list, int nbr);
int			cal_insert_index_b(t_list_m *list_b, int nbr);
int			cal_insert_index_a(t_list_m *list_a, int nbr);
int			cal_rrr_ab(t_list_m *list_a, t_list_m *list_b, int nbr);
int			cal_rr_ab(t_list_m *list_a, t_list_m *list_b, int nbr);
int			cal_rarrb_ab(t_list_m *list_a, t_list_m *list_b, int nbr);
int			cal_rrarb_ab(t_list_m *list_a, t_list_m *list_b, int nbr);
int			cal_rrr_ba(t_list_m *list_a, t_list_m *list_b, int nbr);
int			cal_rr_ba(t_list_m *list_a, t_list_m *list_b, int nbr);
int			cal_rarrb_ba(t_list_m *list_a, t_list_m *list_b, int nbr);
int			cal_rrarb_ba(t_list_m *list_a, t_list_m *list_b, int nbr);
int			cal_push_ab(t_list_m *list_a, t_list_m *list_b);
int			cal_push_ba(t_list_m *list_a, t_list_m *list_b);
void		apply_rrr(t_list_m **list_a, t_list_m **list_b, int nbr, char c);
void		apply_rr(t_list_m **list_a, t_list_m **list_b, int nbr, char c);
void		apply_rarrb(t_list_m **list_a, t_list_m **list_b, int nbr, char c);
void		apply_rrarb(t_list_m **list_a, t_list_m **list_b, int nbr, char c);

#endif
