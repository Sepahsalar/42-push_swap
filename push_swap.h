/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:04:07 by asohrabi          #+#    #+#             */
/*   Updated: 2023/12/01 17:55:13 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				n;
	int				i;
	struct s_list	*next;
}					t_list;

typedef struct s_shorten
{
	int		in_word;
	char	**array;
	int		index;
	char	*s;
	char	*word_start;
}			t_shorten;

t_list	*parse_args(int argc, char **argv);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **list, t_list *new);
int		ft_min(t_list *list);
int		ft_max(t_list *list);
int		ft_atoi(const char *str);
char	**ft_split(char *s, char c);
void	sa(t_list **list_a, int i);
void	sb(t_list **list_b, int i);
void	ss(t_list **list_a, t_list **list_b);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_b, t_list **list_a);
void	ra(t_list **list_a, int i);
void	rb(t_list **list_b, int i);
void	rr(t_list **list_a, t_list **list_b);
void	rra(t_list **list_a, int i);
void	rrb(t_list **list_b, int i);
void	rrr(t_list **list_a, t_list **list_b);
void	ft_free(t_list **list);
int		check_sorted(t_list *list);
int		check_dup(t_list *list);
void	check_args(char **argv);
void	ft_sort(t_list **list_a);
int		find_index(t_list *list, int nbr);
int		cal_insert_index_b(t_list *list_b, int nbr);
int		cal_insert_index_a(t_list *list_a, int nbr);
int		cal_rrr_ab(t_list *list_a, t_list *list_b, int nbr);
int		cal_rr_ab(t_list *list_a, t_list *list_b, int nbr);
int		cal_rarrb_ab(t_list *list_a, t_list *list_b, int nbr);
int		cal_rrarb_ab(t_list *list_a, t_list *list_b, int nbr);
int		cal_rrr_ba(t_list *list_a, t_list *list_b, int nbr);
int		cal_rr_ba(t_list *list_a, t_list *list_b, int nbr);
int		cal_rarrb_ba(t_list *list_a, t_list *list_b, int nbr);
int		cal_rrarb_ba(t_list *list_a, t_list *list_b, int nbr);
int		cal_push_ab(t_list *list_a, t_list *list_b);
int		cal_push_ba(t_list *list_a, t_list *list_b);
void	apply_rrr(t_list **list_a, t_list **list_b, int nbr, char c);
void	apply_rr(t_list **list_a, t_list **list_b, int nbr, char c);
void	apply_rarrb(t_list **list_a, t_list **list_b, int nbr, char c);
void	apply_rrarb(t_list **list_a, t_list **list_b, int nbr, char c);

#endif