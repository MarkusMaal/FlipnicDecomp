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
// Address: 0x1c27c0 - 0x1c27dc
void caseD_e_0x1c27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x1c27c0");
#endif

    switch (ctx->pc) {
        case 0x1c27d0u: goto label_1c27d0;
        default: break;
    }

    ctx->pc = 0x1c27c0u;

    // 0x1c27c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c27c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c27c4: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c27c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c27c8: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C27C8u;
    SET_GPR_U32(ctx, 31, 0x1C27D0u);
    ctx->pc = 0x1C27CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27C8u;
    // 0x1c27cc: 0x24a51a50  addiu       $a1, $a1, 0x1A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C27C8u, 0x1C27D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27D0u;
label_1c27d0:
    // 0x1c27d0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1c27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c27d4: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x1C27D4u;
    {
        const bool branch_taken_0x1c27d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27D4u;
        // 0x1c27d8: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27d4) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C27DCu;
}
