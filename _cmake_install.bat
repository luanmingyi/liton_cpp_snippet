cmake -H. -B_build_win32 -DCMAKE_INSTALL_PREFIX=%CPPLIB%\snippets
cmake --build _build_win32 --config Release --target INSTALL
