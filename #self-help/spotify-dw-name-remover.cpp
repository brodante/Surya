#incclude<iostream.h>
#include<fstream.h>
using namespace std;

int main()
{
  string f;
  cout<<"Enter the name(with extension) of file you want to open.\n\n\t";
  cin>>f;
  ifstream file;
  file.open(f, ios_base::app);
  unbuffer
  getline(file,backup);
  file.close();

}
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void renameFiles(const wstring& path) {
    WIN32_FIND_DATAW fd;
    HANDLE hFind = FindFirstFileW((path + L"\\*").c_str(), &fd);

    if (hFind == INVALID_HANDLE_VALUE) return;

    do {
        wstring name = fd.cFileName;
        wstring fullPath = path + L"\\" + name;

        if (name.find(L"[SPOTIFY-DOWNLOADER.COM] ") == 0 && name.rfind(L".mp3") == name.length() - 4) {
            wstring newName = name.substr(25);
            wstring newPath = path + L"\\" + newName;

            if (MoveFileW(fullPath.c_str(), newPath.c_str()))
                wcout << L"Renamed '" << name << L"' to '" << newName << L"'." << endl;
        }
    } while (FindNextFileW(hFind, &fd) != 0);

    FindClose(hFind);
}

int wmain() {
    wstring path;
    getline(wcin, path);

    if (GetFileAttributesW(path.c_str()) != INVALID_FILE_ATTRIBUTES && GetFileAttributesW(path.c_str()) & FILE_ATTRIBUTE_DIRECTORY)
        renameFiles(path);
    else
        wcerr << L"Invalid path." << endl;

    return 0;
}
