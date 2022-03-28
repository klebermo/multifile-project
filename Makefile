export base_dir := ${CURDIR}
export obj_dir := ${base_dir}/build
export release_dir := ${base_dir}/release

export main_src := ${base_dir}/src

export lib_one_header := ${base_dir}/src/libone/include
export lib_one_src := ${base_dir}/src/libone

export lib_two_header := ${base_dir}/src/libtwo/include
export lib_two_src := ${base_dir}/src/libtwo

lib_one := ${lib_one_src}
lib_two := ${lib_two_src}
libraries := $(lib_one) $(lib_two)
player    := ${main_src}

.PHONY: all $(player) $(libraries)
all: $(player)

$(player) $(libraries): | ${obj_dir} ${release_dir}
	$(MAKE) --directory=$@

$(player): $(libraries)

clean:
	rm build/*.o
	rm release/*.a
	rm release/*.so
	rm release/project
