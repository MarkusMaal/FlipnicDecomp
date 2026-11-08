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

// Function: entry_001e7920
// Address: 0x1e7920 - 0x1e7930
void entry_001e7920_0x1e7920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7920_0x1e7920");
#endif

    ctx->pc = 0x1e7920u;

    // 0x1e7920: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7920u;
    {
        const bool branch_taken_0x1e7920 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7920u;
        // 0x1e7924: 0x83843  sra         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7920) {
            ctx->pc = 0x1E7930u;
            return;
        }
    }
    ctx->pc = 0x1E7928u;
    // 0x1e7928: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1e7928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e792c: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x1e792cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1e7930u;
}
