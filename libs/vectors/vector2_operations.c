/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vecto2_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cascrizz <cascrizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:05:01 by cascrizz          #+#    #+#             */
/*   Updated: 2026/01/16 12:17:41 by cascrizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector2 add_vector2(t_vector2 v1, t_vector2 v2)
{
  return ((t_vector2){v1.x + v2.x, v1.y + v2.y});
}
t_vector2 sub_vector2(t_vector2 v1, t_vector2 v2)
{
  return ((t_vector2){v1.x - v2.x, v1.y - v2.y});
}

t_vector2 div_vector2(t_vector2 v1, t_vector2 v2)
{
  if (!v2.x || !v2.y){
    write(1, "ERROR : division by a vector2 who contain 0", 43);
    exit(1);
  }
  return ((t_vector2){v1.x / v2.x, v1.y / v2.y});
}

t_vector2 mul_vector2(t_vector2 v1, t_vector2 v2)
{
  return ((t_vector2){v1.x * v2.x, v1.y * v2.y});
}

t_vector2 scal_mul_vector2(t_vector2 v1, double scal)
{
  return ((t_vector2){v1.x * scal, v1.y * scal});
}
t_vector2 scal_div_vector2(t_vector2 v1, int scal)
{
  if (!scal)
  {
    write(1, "ERROR : division by a vector2 who contain 0", 39);
    exit(1);
  }
  return ((t_vector2){v1.x / scal, v1.y / scal});
}

double norm_vector2(t_vector2 vec)
{
  return (sqrt(vec.x * vec.x + vec.y * vec.y));
}

void set_norm_vector2(t_vector2 *vec, double scal)
{
  double norm;

  norm = norm_vector2(*vec);
  vec->x = (vec->x / norm) * scal;
  vec->y = (vec->y / norm) * scal;
}

