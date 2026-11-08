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

// Function: caseD_3
// Address: 0x1a69a4 - 0x1a69cc
void caseD_3_0x1a69a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1a69a4");
#endif

    ctx->pc = 0x1a69a4u;

    // 0x1a69a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a69a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a69ac: 0x1c40002a  bgtz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A69ACu;
    {
        const bool branch_taken_0x1a69ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69ACu;
        // 0x1a69b0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69ac) {
            ctx->pc = 0x1A6A58u;
            return;
        }
    }
    ctx->pc = 0x1A69B4u;
    // 0x1a69b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a69b8: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x1a69b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a69bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a69c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a69c4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A69C4u;
    {
        const bool branch_taken_0x1a69c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69C4u;
        // 0x1a69c8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69c4) {
            ctx->pc = 0x1A6A58u;
            return;
        }
    }
    ctx->pc = 0x1A69CCu;
}
