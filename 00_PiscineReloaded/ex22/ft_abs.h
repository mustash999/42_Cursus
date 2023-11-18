/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:32:58 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/08 22:40:02 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(n) ({ 							\
					int abs_result; 		\
					if (n < 0) { 			\
						abs_result = -n; 	\
					} else { 				\
						abs_result = n; 	\
					} 						\
					abs_result; 			\
				})
#endif