cmake -H. -B_build_unix -DCMAKE_INSTALL_PREFIX=$CPPLIB/snippets
cmake --build _build_unix --config Release --target install
