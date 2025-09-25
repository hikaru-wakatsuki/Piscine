/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuramat <kmuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 09:11:08 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/21 21:55:57 by kmuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_dict
{
	char	*key;
	char	*value;
}			t_dict;

// open.c
t_dict		*input_dict(char **board);
char		**is_valid_read(char *dict_name);
// dict_split.c
char		**dict_split(char *board);
int			len_a_to_b(char *board, char a, char b, int j);
int			space_remove(char *board, int i);
// match.c
int			is_valid_first_match(char *nbr, t_dict *dict);
int			board_match(char **nbr_board, t_dict *dict);
int			is_valid_second_match(char *nbr, t_dict *dict);
int			is_valid_total_match(char *nbr, t_dict *dict);
// ft_split.c
char		**ft_split(char *str, char *charset);
int			char_set(char to_find, char *charset);
char		*ft_strndup(char *src, int n, int index);
void		ft_board_input(char *str, char *charset, char **board);
int			count_words(char *str, char *charset);
int			ft_strlen(char *base);
void		ft_putstr(char *str);
int			ft_strcmp(char *s1, char *s2);
// is_valid_free.c
void		board_free(char **board);
void		str_free(char *str);
void		dict_free(t_dict *dict);
void		dict_error(void);
void		input_error(void);
char		*search_index_key_to_value(char *nbr, t_dict *dict);
int			search_key_match(char *nbr, t_dict *dict);
// add by kotakaha
int			ft_count_new_strlen(int len);
char		*ft_malloc(int len);
char		*ft_assign_zero(void);
// search_index_key_to_word.c
int			assign_and_validate(int argc, char **argv, char **n, char **p);
int			ft_number_is_valid(char *number);
// by_kmuramat
char		*over_thousand(int quotient, char *hundred, char *ten, char *one);
char		*hundred(char *digit_multiple3, int j);
char		*hund_place(char *digit_multiple3, int j);
char		*ten(char *digit_multiple3, int j);
char		*one(char *digit_multiple3, int j);
int			two_dim_len(char *digit_multiple3, int quotient, int arr_count);
void		helper_ans(char **two_dim_arr, int *two_dim_index, char *tmp_str);
char		**make_ans_arr(int quotient, char *digit_multiple3,
				char **two_dim_arr, int *two_dim_index);
char		**ans_num(char *digit_multiple3);
#endif
