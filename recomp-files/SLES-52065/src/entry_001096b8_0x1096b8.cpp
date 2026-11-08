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

// Function: entry_001096b8
// Address: 0x1096b8 - 0x1096cc
void entry_001096b8_0x1096b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001096b8_0x1096b8");
#endif

    ctx->pc = 0x1096b8u;

    // 0x1096b8: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x1096b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1096bc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1096BCu;
    {
        const bool branch_taken_0x1096bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1096C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096BCu;
        // 0x1096c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096bc) {
            ctx->pc = 0x1096CCu;
            return;
        }
    }
    ctx->pc = 0x1096C4u;
    // 0x1096c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1096C4u;
    {
        const bool branch_taken_0x1096c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096C4u;
        // 0x1096c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096c4) {
            ctx->pc = 0x10973Cu;
            return;
        }
    }
    ctx->pc = 0x1096CCu;
}
