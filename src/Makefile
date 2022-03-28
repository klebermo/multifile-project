all: main

main: ${obj_dir}/Main.o
	g++ -L ${release_dir} -o ${release_dir}/project -Wl,-rpath='./' ${obj_dir}/Main.o -lone -ltwo

${obj_dir}/Main.o: Main.cpp
	g++ -I ${lib_one_header} -I ${lib_two_header} -c Main.cpp -o ${obj_dir}/Main.o
