#include <iostream>
#include <stdexcept>
#include <cstdlib>

#include <Application.h>

int main(){
    Application app;
    try
    {
        app.run();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}