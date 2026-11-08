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

// Function: caseD_4
// Address: 0x1ab174 - 0x1ab19c
void caseD_4_0x1ab174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1ab174");
#endif

    switch (ctx->pc) {
        case 0x1ab17cu: goto label_1ab17c;
        case 0x1ab18cu: goto label_1ab18c;
        case 0x1ab194u: goto label_1ab194;
        default: break;
    }

    ctx->pc = 0x1ab174u;

    // 0x1ab174: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1AB174u;
    SET_GPR_U32(ctx, 31, 0x1AB17Cu);
    ctx->pc = 0x1AB178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB174u;
    // 0x1ab178: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AB174u, 0x1AB17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB17Cu;
label_1ab17c:
    // 0x1ab17c: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x1AB17Cu;
    {
        const bool branch_taken_0x1ab17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB17Cu;
        // 0x1ab180: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab17c) {
            ctx->pc = 0x1AB684u;
            return;
        }
    }
    ctx->pc = 0x1AB184u;
    // 0x1ab184: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x1AB184u;
    SET_GPR_U32(ctx, 31, 0x1AB18Cu);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AB184u, 0x1AB18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB18Cu;
label_1ab18c:
    // 0x1ab18c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AB18Cu;
    SET_GPR_U32(ctx, 31, 0x1AB194u);
    ctx->pc = 0x1AB190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB18Cu;
    // 0x1ab190: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB18Cu, 0x1AB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB194u;
label_1ab194:
    // 0x1ab194: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x1AB194u;
    {
        const bool branch_taken_0x1ab194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab194) {
            ctx->pc = 0x1AB684u;
            return;
        }
    }
    ctx->pc = 0x1AB19Cu;
}
