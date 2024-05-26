.PHONY: all game clean

all:		game

game:
			cd ./Game && mkdir Build/ && cd ./Build && cmake .. && make

clean:		
			cd ./Game && rm -r ./Build