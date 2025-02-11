// Prototypes for executing builtin_bind function.
#ifndef FISH_BUILTIN_BIND_H
#define FISH_BUILTIN_BIND_H

#include "../maybe.h"

class Parser; using parser_t = Parser;
class IoStreams; using io_streams_t = IoStreams;
maybe_t<int> builtin_bind(parser_t &parser, io_streams_t &streams, const wchar_t **argv);

#endif
