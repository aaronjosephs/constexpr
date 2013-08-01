CC=clang++
CFLAGS=-std=c++11 -stdlib=libc++

all: constexprsqrt.cpp
	$(CC) $(CFLAGS) $? -o sqrttest

clean:
	rm constexpr
