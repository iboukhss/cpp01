#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char* argv[])
{
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
        return 1;
    }

    std::string infile = argv[1];
    std::string outfile = infile + ".replace";
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream ifs(infile.c_str(), std::ios::binary);
    if (!ifs) {
        std::cerr << "Failed to open input file '" << infile << "'\n";
        return 1;
    }

    std::ostringstream oss;
    oss << ifs.rdbuf();
    std::string content = oss.str();

    std::string result;

    size_t i = 0;
    while (i < content.size()) {
        if (content.compare(i, s1.size(), s1) == 0) {
            result += s2;
            i += s1.size();
        }
        else {
            result += content[i];
            ++i;
        }
    }

    std::ofstream ofs(outfile.c_str(), std::ios::binary);
    if (!ofs) {
        std::cerr << "Failed to open output file '" << outfile << "'\n";
        return 1;
    }

    ofs << result;
    return 0;
}
