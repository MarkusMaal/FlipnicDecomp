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
// Address: 0x190f18 - 0x190f4c
void caseD_3_0x190f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x190f18");
#endif

    ctx->pc = 0x190f18u;

    // 0x190f18: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x190F18u;
    {
        const bool branch_taken_0x190f18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F18u;
        // 0x190f1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f18) {
            ctx->pc = 0x190F58u;
            return;
        }
    }
    ctx->pc = 0x190F20u;
    // 0x190f20: 0x8e030660  lw          $v1, 0x660($s0)
    ctx->pc = 0x190f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x190f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190f28: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x190F28u;
    {
        const bool branch_taken_0x190f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190f28) {
            ctx->pc = 0x190F4Cu;
            return;
        }
    }
    ctx->pc = 0x190F30u;
    // 0x190f30: 0x8e040664  lw          $a0, 0x664($s0)
    ctx->pc = 0x190f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x190f34: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x190f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x190f38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x190f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190f3c: 0x148301d6  bne         $a0, $v1, . + 4 + (0x1D6 << 2)
    ctx->pc = 0x190F3Cu;
    {
        const bool branch_taken_0x190f3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x190f3c) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x190F44u;
    // 0x190f44: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x190F44u;
    {
        const bool branch_taken_0x190f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F44u;
        // 0x190f48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f44) {
            ctx->pc = 0x1916A0u;
            return;
        }
    }
    ctx->pc = 0x190F4Cu;
}
