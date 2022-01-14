#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    string dud;
    ifstream instream;

    for (int arg = 1; arg < argc; ++arg) //loop each input file
    {
      int numLines = -1;
      instream.open(argv[arg]);
      if(!instream.fail())
      {
        numLines++;
        while (getline(instream, dud)) //loop through current file
        {
          numLines++;
          //getline(instream, dud);
        }
      }

      instream.close();
      std::cout << argv[arg] << ": " << numLines << '\n';

    }

    exit(0); // this means that the program executed correctly!
}
