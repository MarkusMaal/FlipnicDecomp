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

// Function: entry_001125a8
// Address: 0x1125a8 - 0x1125c0
void entry_001125a8_0x1125a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001125a8_0x1125a8");
#endif

    ctx->pc = 0x1125a8u;

    // 0x1125a8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1125a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1125ac: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1125acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1125b0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1125B0u;
    {
        const bool branch_taken_0x1125b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1125B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125B0u;
        // 0x1125b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125b0) {
            ctx->pc = 0x11259Cu;
            return;
        }
    }
    ctx->pc = 0x1125B8u;
    // 0x1125b8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1125b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1125bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1125bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1125c0u;
}
