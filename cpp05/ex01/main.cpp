/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muguveli <muguveli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:08:22 by muguveli          #+#    #+#             */
/*   Updated: 2024/10/09 15:30:38 by muguveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat a("mami", 1);
        Form f("Form", false, 3, 2);
        std::cout << a.getName() << " " << a.getGrade() << "\n" << f.getName() << " " << f.getRequiredSignGrade() << std::endl;
        std::cout << f.getName() << " " << f.getIsSigned() << std::endl;
        f.beSigned(a);
        std::cout << f.getName() << " " << f.getIsSigned() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
