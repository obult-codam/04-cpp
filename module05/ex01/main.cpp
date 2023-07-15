#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main(void)
{
    Bureaucrat crat("crat", 41);

    Form one("one", 53, 41);
    Form two("two", 12, 12);

    crat.signForm(one);
    crat.signForm(two);
}
