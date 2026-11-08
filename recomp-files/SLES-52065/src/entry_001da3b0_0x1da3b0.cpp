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

// Function: entry_001da3b0
// Address: 0x1da3b0 - 0x1da3d0
void entry_001da3b0_0x1da3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da3b0_0x1da3b0");
#endif

    ctx->pc = 0x1da3b0u;

    // 0x1da3b0: 0x13000031  beqz        $t8, . + 4 + (0x31 << 2)
    ctx->pc = 0x1DA3B0u;
    {
        const bool branch_taken_0x1da3b0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3B0u;
        // 0x1da3b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3b0) {
            ctx->pc = 0x1DA478u;
            return;
        }
    }
    ctx->pc = 0x1DA3B8u;
    // 0x1da3b8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1da3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1da3bc: 0x14580004  bne         $v0, $t8, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA3BCu;
    {
        const bool branch_taken_0x1da3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        ctx->pc = 0x1DA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3BCu;
        // 0x1da3c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3bc) {
            ctx->pc = 0x1DA3D0u;
            return;
        }
    }
    ctx->pc = 0x1DA3C4u;
    // 0x1da3c4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1DA3C4u;
    {
        const bool branch_taken_0x1da3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3C4u;
        // 0x1da3c8: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3c4) {
            ctx->pc = 0x1DA50Cu;
            return;
        }
    }
    ctx->pc = 0x1DA3CCu;
    // 0x1da3cc: 0x0  nop
    ctx->pc = 0x1da3ccu;
    // NOP
    ctx->pc = 0x1da3d0u;
}
