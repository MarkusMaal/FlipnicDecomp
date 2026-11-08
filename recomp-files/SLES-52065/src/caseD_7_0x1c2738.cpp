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

// Function: caseD_7
// Address: 0x1c2738 - 0x1c2754
void caseD_7_0x1c2738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1c2738");
#endif

    switch (ctx->pc) {
        case 0x1c2748u: goto label_1c2748;
        default: break;
    }

    ctx->pc = 0x1c2738u;

    // 0x1c2738: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c273c: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c273cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2740: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C2740u;
    SET_GPR_U32(ctx, 31, 0x1C2748u);
    ctx->pc = 0x1C2744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2740u;
    // 0x1c2744: 0x24a51a38  addiu       $a1, $a1, 0x1A38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C2740u, 0x1C2748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2748u;
label_1c2748:
    // 0x1c2748: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c2748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c274c: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x1C274Cu;
    {
        const bool branch_taken_0x1c274c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C274Cu;
        // 0x1c2750: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c274c) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2754u;
}
