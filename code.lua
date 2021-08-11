local lib=package.loadlib("./mylib/mylib.so", "luaopen_mylib")()
print(lib.greet())
