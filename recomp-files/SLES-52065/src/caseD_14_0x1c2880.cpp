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

// Function: caseD_14
// Address: 0x1c2880 - 0x1c289c
void caseD_14_0x1c2880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x1c2880");
#endif

    switch (ctx->pc) {
        case 0x1c2890u: goto label_1c2890;
        default: break;
    }

    ctx->pc = 0x1c2880u;

    // 0x1c2880: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2884: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2888: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C2888u;
    SET_GPR_U32(ctx, 31, 0x1C2890u);
    ctx->pc = 0x1C288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2888u;
    // 0x1c288c: 0x24a51a50  addiu       $a1, $a1, 0x1A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C2888u, 0x1C2890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2890u;
label_1c2890:
    // 0x1c2890: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1c2890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c2894: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x1C2894u;
    {
        const bool branch_taken_0x1c2894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2894u;
        // 0x1c2898: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2894) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C289Cu;
}
