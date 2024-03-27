/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>

int main(){
    std::vector<int> a;
    std::deque<int> b;
    std::list<int> c;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    b.push_back(4);
    b.push_back(5);
    c.push_back(1);
    c.push_back(2);
    c.push_back(3);
    c.push_back(4);
    c.push_back(5);
  
    int result;
    
    std::cout << "\033[95m---- TEST WITH A VECTOR CONTAINER ----\033[0m" << std::endl;
    try{
        result = easyfind(a, 5);
        std::cout << "Resultat trouvé: " << result << std::endl;
    }
    catch(std::exception &e){
		std::cout << e.what() << std::endl;
    }
    try{
        result = easyfind(a, 0);
        std::cout << "Resultat trouvé: " << result << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "\033[95m---- TEST WITH A DEQUE CONTAINER ----\033[0m" << std::endl;
    try{
        result = easyfind(b, 4);
        std::cout << "Resultat trouvé: " << result << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        result = easyfind(b, 10);
        std::cout << "Resultat trouvé: " << result << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "\033[95m---- TEST WITH A LIST CONTAINER ----\033[0m" << std::endl;
    try{
        result = easyfind(c, 2);
        std::cout << "Resultat trouvé: " << result << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        result = easyfind(c, 10);
        std::cout << "Resultat trouvé: " << result << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    return (0);
}