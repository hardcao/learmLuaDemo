extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}
#include <stdio.h>

int main(int argc, const char * argv[])
{
  lua_State *L = luaL_newstate();
  luaopen_base(L);
  luaL_openlibs(L);

  int ret = luaL_dofile(L, "test.lua");
  if (ret != 0)
    {
      printf("load test.lua failed");
      return 1;
    }

  lua_getglobal(L, "showValue");
  lua_pushstring(L, "William");
  lua_pushstring(L, "Hsueh");
  
  lua_pcall(L, 2, 0, 0);

  lua_close(L);

  return 0;
}