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

// Function: entry_001ff290
// Address: 0x1ff290 - 0x1ff2a0
void entry_001ff290_0x1ff290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff290_0x1ff290");
#endif

    ctx->pc = 0x1ff290u;

    // 0x1ff290: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x1ff290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x1ff294: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x1ff294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    // 0x1ff298: 0xad500008  sw          $s0, 0x8($t2)
    ctx->pc = 0x1ff298u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 16));
    // 0x1ff29c: 0xad30000c  sw          $s0, 0xC($t1)
    ctx->pc = 0x1ff29cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x1ff2a0u;
}
