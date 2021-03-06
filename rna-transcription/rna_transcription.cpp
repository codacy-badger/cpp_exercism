#include "rna_transcription.h"
#include <map>

using std::map;

namespace transcription {
map<char, char> rna_map = {{'A', 'U'}, {'C', 'G'}, {'G', 'C'}, {'T', 'A'}};
char to_rna(char dna) { return rna_map[dna]; }
const string to_rna(string const dna) {
  string rna = "";
  for (const char& c : dna) {
    rna = rna + rna_map[c];
  }
  return rna;
}
}  // namespace transcription
