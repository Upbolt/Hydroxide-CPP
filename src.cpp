#include <Windows.h>

int main() {
  return 0;
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
  switch(dwReason) {
    case DLL_PROCESS_ATTACH:
      CreateThread(NULL, 0, [](LPVOID) -> DWORD{ return main(); }, NULL, 0, NULL);
      break;
  }
  
  return TRUE;
}
