# cmake learning progress
## by Oparilames (S. Hoffmann) and an anonymous teacher
## goal for folder structure after cmake has run sucessfully
```
.
├── cmakeStuff
│   └── CMakeLists.txt
├── bin
├── include
│   ├── A.hpp
│   └── B.hpp
├── readme.md
└── src
    └── main.cpp
```

- [`./cmakeStuff/`](./cmakeStuff) contains the [`CMakeLists.txt`](./cmakeStuff/CMakeLists.txt)  and all files produced by cmake except the final executables which will be put into …
- [`./bin/`](./bin) is supposed to host all executables.
- [`./src/`](./src/) is supposed to host all implementation `.cpp` files.
- [`./include/`](./include) holds headers (declarations) and inline files.
- [`./readme.md`](./readme.md) this file 
