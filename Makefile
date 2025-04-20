# sets the default command to "build"
all: build

# you can safely ignore this line. if you add new commands, just add them here
.PHONY: generate build run

# to run the cmake generation step: "make generate"
generate:
	cmake -B build -DCMAKE_CXX_COMPILER=/usr/bin/clang++ -DCMAKE_C_COMPILER=/usr/bin/clang

# to run the cmake build step: "make build"
# because this is the default command, you can just run "make"
build:
	cmake --build build

# to run the program: "make run"
run: build
	./build/bin/main
