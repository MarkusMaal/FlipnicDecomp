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

// Function: entry_0011aad0
// Address: 0x11aad0 - 0x11ab08
void entry_0011aad0_0x11aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aad0_0x11aad0");
#endif

    switch (ctx->pc) {
        case 0x11aad8u: goto label_11aad8;
        case 0x11aae0u: goto label_11aae0;
        case 0x11aae8u: goto label_11aae8;
        case 0x11ab00u: goto label_11ab00;
        default: break;
    }

    ctx->pc = 0x11aad0u;

    // 0x11aad0: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x11AAD0u;
    SET_GPR_U32(ctx, 31, 0x11AAD8u);
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x11AAD0u, 0x11AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAD8u;
label_11aad8:
    // 0x11aad8: 0xc07cb16  jal         func_1F2C58
    ctx->pc = 0x11AAD8u;
    SET_GPR_U32(ctx, 31, 0x11AAE0u);
    ctx->pc = 0x1F2C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2C58u, 0x11AAD8u, 0x11AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAE0u;
label_11aae0:
    // 0x11aae0: 0xc07bde2  jal         func_1EF788
    ctx->pc = 0x11AAE0u;
    SET_GPR_U32(ctx, 31, 0x11AAE8u);
    ctx->pc = 0x1EF788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF788u, 0x11AAE0u, 0x11AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAE8u;
label_11aae8:
    // 0x11aae8: 0x8e230534  lw          $v1, 0x534($s1)
    ctx->pc = 0x11aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
    // 0x11aaec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aaf0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AAF0u;
    {
        const bool branch_taken_0x11aaf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAF0u;
        // 0x11aaf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaf0) {
            ctx->pc = 0x11AB08u;
            return;
        }
    }
    ctx->pc = 0x11AAF8u;
    // 0x11aaf8: 0xc07dea4  jal         func_1F7A90
    ctx->pc = 0x11AAF8u;
    SET_GPR_U32(ctx, 31, 0x11AB00u);
    ctx->pc = 0x1F7A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7A90u, 0x11AAF8u, 0x11AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB00u;
label_11ab00:
    // 0x11ab00: 0xc07dfd6  jal         func_1F7F58
    ctx->pc = 0x11AB00u;
    SET_GPR_U32(ctx, 31, 0x11AB08u);
    ctx->pc = 0x11AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB00u;
    // 0x11ab04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7F58u, 0x11AB00u, 0x11AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB08u;
}
