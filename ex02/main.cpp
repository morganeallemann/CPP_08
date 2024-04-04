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

#include "MutantStack.hpp"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>

int main(){
    std::cout << "\033[31mTEST WITH MUTANT STACK \033[0m" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
/* -------------------------------------------------- */
    std::cout << "\033[31mTEST WITH LIST\033[0m " << std::endl;
/* -------------------------------------------------- */
    std::list<int> mstack2; // Utilisation de std::list comme conteneur

    mstack2.push_back(5);
    mstack2.push_back(17);
    std::cout << mstack2.back() << std::endl; // Utilisation de back() pour accéder au sommet
    mstack2.pop_back(); // Utilisation de pop_back() pour retirer un élément
    std::cout << mstack2.size() << std::endl; // Utilisation de size() pour obtenir la taille

    mstack2.push_back(3);
    mstack2.push_back(5);
    mstack2.push_back(737);
    // [...]

    mstack2.push_back(0);

    // Parcourir la liste à l'aide d'itérateurs
    std::list<int>::iterator it2 = mstack2.begin();
    std::list<int>::iterator ite2 = mstack2.end();
    ++it2;
    --it2;
    while (it2 != ite2) {
        std::cout << *it2 << std::endl;
        ++it2;
    }

    // Création d'une pile std::stack à partir de la liste
    std::stack<int, std::list<int> > s2(mstack2);
    return (0);
}

