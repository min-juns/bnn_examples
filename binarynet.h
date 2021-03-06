#ifndef VTA_BUNDLE_BINARYNET
#define VTA_BUNDLE_BINARYNET


#include <stdint.h>

// ---------------------------------------------------------------
//                       Common definitions
// ---------------------------------------------------------------
#ifndef _GLOW_BUNDLE_COMMON_DEFS
#define _GLOW_BUNDLE_COMMON_DEFS

// Glow bundle error code for correct execution.
#define GLOW_SUCCESS 0

// Type describing a symbol table entry of a generated bundle.
struct SymbolTableEntry {
  // Name of a variable.
  const char *name;
  // Offset of the variable inside the memory area.
  uint64_t offset;
  // The number of elements inside this variable.
  uint64_t size;
  // Variable kind: 1 if it is a mutable variable, 0 otherwise.
  char kind;
};

// Type describing the config of a generated bundle.
struct BundleConfig {
  // Size of the constant weight variables memory area.
  uint64_t constantWeightVarsMemSize;
  // Size of the mutable weight variables memory area.
  uint64_t mutableWeightVarsMemSize;
  // Size of the activations memory area.
  uint64_t activationsMemSize;
  // Alignment to be used for weights and activations.
  uint64_t alignment;
  // Number of symbols in the symbol table.
  uint64_t numSymbols;
  // Symbol table.
  const SymbolTableEntry *symbolTable;
};

#endif

#ifdef __cplusplus
extern "C" {
#endif

// ---------------------------------------------------------------
//                          Bundle API
// ---------------------------------------------------------------
// Model name: "binarynet"
// Total data size: 12328(bytes)
// Placeholders:
//   Name: "input"
//   Size: 3072 (elements)
//   Size: 12288 (bytes)
//   Offset: 0 (bytes)
//
//   Name: "output"
//   Size: 10 (elements)
//   Size: 40 (bytes)
//   Offset: 12288 (bytes)
//
extern BundleConfig binarynet_config;
void binarynet_load_module(uint8_t *constantWeight);
void binarynet_destroy_module();
int binarynet(uint8_t *constantWeight, uint8_t *mutableWeight, uint8_t *activations);

#ifdef __cplusplus
}
#endif
#endif //VTA_BUNDLE_BINARYNET
