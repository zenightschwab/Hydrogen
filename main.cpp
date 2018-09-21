#include <iostream>
#include <SDL.h>

int main(int argc, char **argv)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		std::cout << "There was an error initializing SDL! SDL error: " << SDL_GetError() << std::endl;
		return -1;
	}
    std::cout << "Hello, world!" << std::endl;
    return EXIT_SUCCESS;
}