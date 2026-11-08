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

// Function: caseD_12
// Address: 0x1c2800 - 0x1c281c
void caseD_12_0x1c2800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x1c2800");
#endif

    switch (ctx->pc) {
        case 0x1c2810u: goto label_1c2810;
        default: break;
    }

    ctx->pc = 0x1c2800u;

    // 0x1c2800: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2804: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2808: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C2808u;
    SET_GPR_U32(ctx, 31, 0x1C2810u);
    ctx->pc = 0x1C280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2808u;
    // 0x1c280c: 0x24a51a70  addiu       $a1, $a1, 0x1A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C2808u, 0x1C2810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2810u;
label_1c2810:
    // 0x1c2810: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1c2810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c2814: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x1C2814u;
    {
        const bool branch_taken_0x1c2814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2814u;
        // 0x1c2818: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2814) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C281Cu;
}
