bin = ./out
src = ./src
.DEFAULT_GOAL := compile
.PHONY = clean

compile: mkdir
	g++ $(src)/main.cpp -o $(bin)/NETchat.exec


test: compile
	clear
	$(bin)/NETchat.exec

mkdir:
	mkdir -p $(bin)

clean:
	rm -rf $(bin)