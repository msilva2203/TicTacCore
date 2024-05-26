.PHONY: all game glfw clean

all:		game glfw

game:
			cd ./Game && mkdir Build/ && cd ./Build && cmake .. && make

glfw:		
			cd ./GLFW && mkdir Build/ && cd ./Build && cmake .. && make

clean:		
			cd ./Game && rm -r ./Build
			cd ./GLFW && rm -r ./Build