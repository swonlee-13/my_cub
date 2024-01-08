/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongwol <seongwol@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:32:05 by seongwol          #+#    #+#             */
/*   Updated: 2024/01/08 22:17:12 by seongwol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXECUTE_H
# define EXECUTE_H
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <mlx.h>
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define FOV 90
# define WIN_HOR 500
# define WIN_VER 500

typedef int bool;

typedef struct s_vector
{
	int x;
	int	y;
}	t_vector;

typedef struct s_coordinate
{
	int	x;
	int	y;
}	t_coordinate;

typedef struct s_image
{
	void	*img;
	int		x;
	int		y;
}	t_image;

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	void	*mlx;
	void	*mlx_win;
}	t_data;

typedef struct s_player
{
	struct s_vector	vec;
	struct s_coordinate	coor;
}	t_player;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
int		ft_key_action(int key, t_data *img);
#endif
