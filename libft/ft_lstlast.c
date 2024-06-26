/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <ejohnson@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:20:20 by ejohnson          #+#    #+#             */
/*   Updated: 2024/05/14 17:20:26 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;
	int		count;

	temp = lst;
	count = ft_lstsize(lst) - 1;
	while (count-- > 0)
		temp = temp->next;
	return (temp);
}
