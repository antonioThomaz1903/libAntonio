# Bibliotecas para C++


COMPILAR:  

WINDOWS:
```
gcc -c -Wall -Werror -fpic nomelib.cpp

gcc -shared -o libnome.dll nomelib.o

gcc -L. -Wall -Werror -pedantic main.cpp -lnome -o main.exe
```

LINUX:
```
gcc -c -Wall -Werror -fpic nomelib.cpp

gcc -shared -o libnome.so nomelib.o

gcc -L. -Wall -Werror -pedantic main.cpp -lnome -o main
```
