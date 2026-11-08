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

// Function: entry_0016d8d8
// Address: 0x16d8d8 - 0x16d8dc
void entry_0016d8d8_0x16d8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d8d8_0x16d8d8");
#endif

    ctx->pc = 0x16d8d8u;

    // 0x16d8d8: 0xae3001d4  sw          $s0, 0x1D4($s1)
    ctx->pc = 0x16d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
    ctx->pc = 0x16d8dcu;
}
