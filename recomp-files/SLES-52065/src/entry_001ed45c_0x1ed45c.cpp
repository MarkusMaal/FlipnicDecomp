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

// Function: entry_001ed45c
// Address: 0x1ed45c - 0x1ed47c
void entry_001ed45c_0x1ed45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed45c_0x1ed45c");
#endif

    ctx->pc = 0x1ed45cu;

    // 0x1ed45c: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1ed45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x1ed460: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED460u;
    {
        const bool branch_taken_0x1ed460 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED460u;
        // 0x1ed464: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed460) {
            ctx->pc = 0x1ED47Cu;
            return;
        }
    }
    ctx->pc = 0x1ED468u;
    // 0x1ed468: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1ed468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ed46c: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1ed46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x1ed470: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1ed470u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ed474: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED474u;
    {
        const bool branch_taken_0x1ed474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED474u;
        // 0x1ed478: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed474) {
            ctx->pc = 0x1ED4B8u;
            return;
        }
    }
    ctx->pc = 0x1ED47Cu;
}
