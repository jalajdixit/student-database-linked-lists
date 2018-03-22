student: studentdb.o stud_add.o stud_show.o stud_delete.o stud_reverse.o stud_read.o stud_count.o stud_sort.o stud_exit.o stud_mod.o stud_save.o
	cc studentdb.o stud_add.o stud_show.o stud_delete.o stud_reverse.o stud_read.o stud_count.o stud_sort.o stud_exit.o stud_mod.o stud_save.o -o student

studentdb.o: studentdb.c
	cc -c studentdb.c

stud_add.o: stud_add.c
	cc -c stud_add.c

stud_count.o: stud_count.c
	cc -c stud_count.c

stud_delete.o: stud_delete.c
	cc -c stud_delete.c

stud_exit.o: stud_exit.c
	cc -c stud_exit.c

stud_mod.o: stud_mod.c
	cc -c stud_mod.c

stud_read.o: stud_read.c
	cc -c stud_read.c

stud_reverse.o: stud_reverse.c
	cc -c stud_reverse.c

stud_show.o: stud_show.c
	cc -c stud_show.c

stud_sort.o: stud_sort.c
	cc -c stud_sort.c

stud_save.o: stud_save.c
	cc -c stud_save.c

#MakeFile for Student Database Project
