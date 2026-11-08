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

// Function: entry_001d89a0
// Address: 0x1d89a0 - 0x1d89c0
void entry_001d89a0_0x1d89a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d89a0_0x1d89a0");
#endif

    switch (ctx->pc) {
        case 0x1d89b0u: goto label_1d89b0;
        default: break;
    }

    ctx->pc = 0x1d89a0u;

label_1d89a0:
    // 0x1d89a0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d89a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d89a4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d89a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d89a8: 0xc07758e  jal         func_1DD638
    ctx->pc = 0x1D89A8u;
    SET_GPR_U32(ctx, 31, 0x1D89B0u);
    ctx->pc = 0x1D89ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89A8u;
    // 0x1d89ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD638u, 0x1D89A8u, 0x1D89B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89B0u;
label_1d89b0:
    // 0x1d89b0: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D89B0u;
    {
        const bool branch_taken_0x1d89b0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d89b0) {
            ctx->pc = 0x1D89B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D89B0u;
            // 0x1d89b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D89A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d89a0;
        }
    }
    ctx->pc = 0x1D89B8u;
    // 0x1d89b8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1D89B8u;
    {
        const bool branch_taken_0x1d89b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89B8u;
        // 0x1d89bc: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89b8) {
            ctx->pc = 0x1D8A88u;
            return;
        }
    }
    ctx->pc = 0x1D89C0u;
}
