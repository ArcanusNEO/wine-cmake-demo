#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <windows.h>
#include <winnt.h>
signed main() {
  MessageBox(NULL, L"你好，世界！", L"欢迎",
             MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2);
}
