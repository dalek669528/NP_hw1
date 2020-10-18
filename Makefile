CC = g++ 
all:npshell
npshell:shell.cpp
	$(CC) -o $@ $<

clean:
	rm -rf npshell
