#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0011bdf8
// Address: 0x11bdf8 - 0x11bdfc
void entry_0011bdf8_0x11bdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bdf8_0x11bdf8");
#endif

    ctx->pc = 0x11bdf8u;

    // 0x11bdf8: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x11bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    ctx->pc = 0x11bdfcu;
}
