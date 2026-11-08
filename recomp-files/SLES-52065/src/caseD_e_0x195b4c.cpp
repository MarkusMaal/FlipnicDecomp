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

// Function: caseD_e
// Address: 0x195b4c - 0x195b7c
void caseD_e_0x195b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x195b4c");
#endif

    switch (ctx->pc) {
        case 0x195b64u: goto label_195b64;
        default: break;
    }

    ctx->pc = 0x195b4cu;

    // 0x195b4c: 0x0  nop
    ctx->pc = 0x195b4cu;
    // NOP
    // 0x195b50: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x195b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x195b54: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195b54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x195b58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x195b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x195b5c: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x195B5Cu;
    SET_GPR_U32(ctx, 31, 0x195B64u);
    ctx->pc = 0x195B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B5Cu;
    // 0x195b60: 0x24a5ff98  addiu       $a1, $a1, -0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x195B5Cu, 0x195B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B64u;
label_195b64:
    // 0x195b64: 0x440007f  bltz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x195B64u;
    {
        const bool branch_taken_0x195b64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x195b64) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195B6Cu;
    // 0x195b6c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195B6Cu;
    {
        const bool branch_taken_0x195b6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x195B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B6Cu;
        // 0x195b70: 0x8f8386f4  lw          $v1, -0x790C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b6c) {
            ctx->pc = 0x195B7Cu;
            return;
        }
    }
    ctx->pc = 0x195B74u;
    // 0x195b74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195B74u;
    {
        const bool branch_taken_0x195b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B74u;
        // 0x195b78: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b74) {
            ctx->pc = 0x195B98u;
            return;
        }
    }
    ctx->pc = 0x195B7Cu;
}
