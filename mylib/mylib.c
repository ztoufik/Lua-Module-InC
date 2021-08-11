#include "lua.h"
#include "lauxlib.h"

static int l_greet(lua_State* L)
{
    const char * greet="hello john doe";
    lua_pushstring(L, greet);
    return 1;
}

static const struct luaL_Reg mylib [] = {
    {"greet", l_greet}, //Your function name, and the function reference after
    {NULL, NULL}
};

int luaopen_mylib (lua_State *L) {

    //luaL_openlib(L, "mylib", mylib, 0);
    luaL_newlib(L, mylib);

    return 1;
}
