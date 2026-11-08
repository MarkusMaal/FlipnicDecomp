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

// Function: entry_0017e85c
// Address: 0x17e85c - 0x17e870
void entry_0017e85c_0x17e85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e85c_0x17e85c");
#endif

    ctx->pc = 0x17e85cu;

    // 0x17e85c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e860: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E860u;
    {
        const bool branch_taken_0x17e860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e860) {
            ctx->pc = 0x17E870u;
            return;
        }
    }
    ctx->pc = 0x17E868u;
    // 0x17e868: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E868u;
    {
        const bool branch_taken_0x17e868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E868u;
        // 0x17e86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e868) {
            ctx->pc = 0x17E878u;
            return;
        }
    }
    ctx->pc = 0x17E870u;
}
