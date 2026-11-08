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

// Function: entry_001ed36c
// Address: 0x1ed36c - 0x1ed388
void entry_001ed36c_0x1ed36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed36c_0x1ed36c");
#endif

    ctx->pc = 0x1ed36cu;

    // 0x1ed36c: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1ed36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x1ed370: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED370u;
    {
        const bool branch_taken_0x1ed370 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED370u;
        // 0x1ed374: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed370) {
            ctx->pc = 0x1ED388u;
            return;
        }
    }
    ctx->pc = 0x1ED378u;
    // 0x1ed378: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1ed378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ed37c: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1ed37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x1ed380: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1ED380u;
    {
        const bool branch_taken_0x1ed380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED380u;
        // 0x1ed384: 0xa3a2001e  sb          $v0, 0x1E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed380) {
            ctx->pc = 0x1ED3E8u;
            return;
        }
    }
    ctx->pc = 0x1ED388u;
}
