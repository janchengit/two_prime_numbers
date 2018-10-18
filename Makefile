cc = gcc
prom = checkprime
obj = main.o

$(prom): $(obj)
	$(cc) -o $(prom) $(obj)

main.o: main.c
	$(cc) -c main.c

clean:
	rm -rf $(obj) $(prom)
