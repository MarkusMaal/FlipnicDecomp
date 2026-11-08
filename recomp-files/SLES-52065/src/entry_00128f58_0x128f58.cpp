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

// Function: entry_00128f58
// Address: 0x128f58 - 0x128f68
void entry_00128f58_0x128f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128f58_0x128f58");
#endif

    ctx->pc = 0x128f58u;

    // 0x128f58: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x128f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x128f5c: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x128f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
    // 0x128f60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128F60u;
    {
        const bool branch_taken_0x128f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F60u;
        // 0x128f64: 0xac8000a0  sw          $zero, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f60) {
            ctx->pc = 0x128F78u;
            return;
        }
    }
    ctx->pc = 0x128F68u;
}
