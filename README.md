# basic2dEngine
Just a basic engine with SFML (drawing some stuffs in a window lol)


dependencies:
  -g++
  
  -SFML installed in your system.
  
  
To compile the engine:

    $git clone https://github.com/Semedi/basic2dEngine.git
    $cd basic2dEngine
    $g++ -c main.cpp game.cpp entityMap.cpp entity.cpp form.cpp
    $g-- main.o game.o entityMap.o entity.o form.o -o app -lsfml-graphics -lsfml-window -lsfml-system
    $./app
    
To cleanup:
    $rm *.o
    
    
sorry, i will create a makefile soon xD
