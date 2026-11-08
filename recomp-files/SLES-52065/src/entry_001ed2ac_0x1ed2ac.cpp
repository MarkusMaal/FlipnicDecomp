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

// Function: entry_001ed2ac
// Address: 0x1ed2ac - 0x1ed2cc
void entry_001ed2ac_0x1ed2ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed2ac_0x1ed2ac");
#endif

    ctx->pc = 0x1ed2acu;

    // 0x1ed2ac: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1ed2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x1ed2b0: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED2B0u;
    {
        const bool branch_taken_0x1ed2b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2B0u;
        // 0x1ed2b4: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2b0) {
            ctx->pc = 0x1ED2CCu;
            return;
        }
    }
    ctx->pc = 0x1ED2B8u;
    // 0x1ed2b8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1ed2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ed2bc: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1ed2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x1ed2c0: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1ed2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ed2c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1ED2C4u;
    {
        const bool branch_taken_0x1ed2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2C4u;
        // 0x1ed2c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2c4) {
            ctx->pc = 0x1ED2F8u;
            return;
        }
    }
    ctx->pc = 0x1ED2CCu;
}
