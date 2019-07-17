/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gayoub <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 00:15:50 by gayoub            #+#    #+#             */
/*   Updated: 2019/04/29 11:02:46 by gayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			main(void)
{
	int fd1;
	//int fd2;
	char *line1;
	int ret;
	//char *line2;
	//int ret;

	// KO In gnl7_2.txt
	fd1 = open("test.txt", O_RDONLY);
	while ((ret = get_next_line(fd1, &line1)) > 0)
    {
		printf("|%s|\n", line1);
		printf("|%d|\n", ret);
        ft_strdel(&line1);
    }
		printf("|%s|\n", line1);
		printf("|%d|\n", ret);

	// KO in gnl_7_3.txt
	//fd2 = open("gnl7_3.txt", O_RDONLY);
    //printf("|%d|\n",get_next_line(fd2, &line2));
    //printf("|%s|\n", line2);
	//printf("|%d|\n",get_next_line(fd2, &line2));
    //printf("|%s|\n", line2);
	//printf("|%d|\n",get_next_line(fd2, &line2));
    //printf("|%s|\n", line2);
	//printf("|%d|\n",get_next_line(fd2, &line2));
    //printf("|%s|\n", line2);

	// KO in gnl8_2.txt

	// KO in gnl8_3.txt;
	return (0);
}
