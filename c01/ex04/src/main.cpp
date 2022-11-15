/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:38:29 by aptive            #+#    #+#             */
/*   Updated: 2022/11/04 20:07:56 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	check_arg(int argc)
{
	if (argc != 4)
	{
		std::cout << "Error : Invalid arg" << std::endl;
		return 0;
	}
	return 1;
}

void	back_begin_flux(std::ifstream &flux)
{
	flux.clear();
	flux.seekg(0, flux.beg);
}

int	count_line(std::ifstream &flux)
{
	std::string	line;
	int			i(0);

	while (!flux.eof() && getline(flux, line))
		i++;
	back_begin_flux(flux);
	return i;
}

void	put_line_in_tab(std::ifstream &flux , std::string *tab)
{
	std::string	line;
	int i(0);

	while (!flux.eof() && getline(flux, line))
	{
		tab[i] = line;
		i++;
	}
	back_begin_flux(flux);
}

void	change_line_in_tab(std::string *tab, std::string s1, std::string s2)
{
	for (int j = 0; j < (int)tab->size() - 1; j++)
	{
		if (!tab[j].compare(s1))
			tab[j] = s2;
	}
}

void	write_in_file(std::string *tab, std::string monfichier, int nb_line)
{
	std::ofstream		write_flux(monfichier.c_str());
	for (int j = 0; j < nb_line; j++)
		write_flux << tab[j] << std::endl;
}

int	main(int argc, char **argv)
{

	std::string const	monfichier(argv[1]);
	std::string			line;
	int					nb_line;

	if (!check_arg(argc))
		return 1;
	//ouverture fichier et controle ouverture
	std::ifstream	read_flux(monfichier.c_str());
	if (!read_flux.is_open())
	{
		std::cout << "Error : unable to open the file" << std::endl;
		return 1;
	}
	nb_line = count_line(read_flux);
	// new tab en fonction ligne fichier
	std::string *tab_string = new std::string[nb_line];
	if (!tab_string)
		return (1);
	// mettre les lignes dans le tableau
	put_line_in_tab(read_flux , tab_string);
	change_line_in_tab(tab_string, argv[2], argv[3]);
	//ecriture du tableau dans le fichier
	read_flux.close();
	write_in_file(tab_string, monfichier, nb_line);
	//delete memory
	delete[] tab_string;
}
