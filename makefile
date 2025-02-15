a.out:pre.c inc_file.c macro.c com_remove.c
cc pre.o inc_file.o macro.o com_remove.o

pre.o:pre.c
cc -c pre.c
inc_file.o:inc_file.c
cc -c inc_file.c
macro.o:macro.c
cc -c macro.c
com_remove.o:com_remove.c
cc -c com_remove.c
