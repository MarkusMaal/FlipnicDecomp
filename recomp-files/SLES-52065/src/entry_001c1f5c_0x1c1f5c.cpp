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

// Function: entry_001c1f5c
// Address: 0x1c1f5c - 0x1c1f68
void entry_001c1f5c_0x1c1f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1f5c_0x1c1f5c");
#endif

    ctx->pc = 0x1c1f5cu;

    // 0x1c1f5c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1c1f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1F60u;
    {
        const bool branch_taken_0x1c1f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F60u;
        // 0x1c1f64: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f60) {
            ctx->pc = 0x1C1F6Cu;
            return;
        }
    }
    ctx->pc = 0x1C1F68u;
}
