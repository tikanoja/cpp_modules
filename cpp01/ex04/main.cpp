/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:37:53 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/25 11:37:56 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av){
    std::ifstream inFile;
    std::ofstream outFile;
    std::string temp;
    int len = 0;
    int i;
    
    if (ac != 4){
        std::cerr << "Please provide 3 args. <filename>, <to be replaced>, <what to replace with>" << std::endl;
        return (1);
    }

    inFile.open(av[1]);

    if (!inFile){
        std::cerr << "Failed to open file!" << std::endl;
        return (1);
    }

    while (av[2][len])
        len++;
    temp = av[1];
    temp = temp + ".replace";
    outFile.open(temp);
    temp.clear();

    while (std::getline(inFile, temp)){
        i = 0;
        while (i != -1){
            i = temp.find(av[2]);
            if (i > -1)
            {
                temp.std::string::erase(i, len);
                temp.std::string::insert(i, av[3]);
            }
        }
        outFile << temp << std::endl;
    }

    inFile.close();
    outFile.close();
    return (0);
}
