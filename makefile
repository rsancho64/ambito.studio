all: alcance comunic

alcance: alcance.c
	gcc alcance.c -o alcance.exe

comunic: comunic.con.global.c
	gcc comunic.con.global.c -o comunic.exe

clean:
	rm -rf *.o *.exe a.out