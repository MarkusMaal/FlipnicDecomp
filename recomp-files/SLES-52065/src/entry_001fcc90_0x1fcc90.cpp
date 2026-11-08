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

// Function: entry_001fcc90
// Address: 0x1fcc90 - 0x1fccb0
void entry_001fcc90_0x1fcc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcc90_0x1fcc90");
#endif

    ctx->pc = 0x1fcc90u;

    // 0x1fcc90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fcc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcc94: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1fcc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1fcc98: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1fcc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fcc9c: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x1fcc9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fcca0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCCA0u;
    {
        const bool branch_taken_0x1fcca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCA0u;
        // 0x1fcca4: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcca0) {
            ctx->pc = 0x1FCCB0u;
            return;
        }
    }
    ctx->pc = 0x1FCCA8u;
    // 0x1fcca8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCCA8u;
    {
        const bool branch_taken_0x1fcca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCA8u;
        // 0x1fccac: 0x709023  subu        $s2, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcca8) {
            ctx->pc = 0x1FCCCCu;
            return;
        }
    }
    ctx->pc = 0x1FCCB0u;
}
