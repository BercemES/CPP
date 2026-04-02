/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:31:34 by bekinci-          #+#    #+#             */
/*   Updated: 2025/11/27 18:31:35 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <fstream>
# include <iostream>

class Replace
{
private:
    std::string filename;
    std::string s1;
    std::string s2;
    std::string content;

public:
    Replace(const std::string &filename, const std::string &s1, const std::string &s2);
    int		readFile();
    void	replaceStrings();
    int		writeFile() const;
};

#endif
