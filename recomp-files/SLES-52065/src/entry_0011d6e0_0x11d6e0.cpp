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

// Function: entry_0011d6e0
// Address: 0x11d6e0 - 0x11d710
void entry_0011d6e0_0x11d6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d6e0_0x11d6e0");
#endif

    switch (ctx->pc) {
        case 0x11d6e8u: goto label_11d6e8;
        case 0x11d6fcu: goto label_11d6fc;
        case 0x11d708u: goto label_11d708;
        default: break;
    }

    ctx->pc = 0x11d6e0u;

    // 0x11d6e0: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D6E0u;
    SET_GPR_U32(ctx, 31, 0x11D6E8u);
    ctx->pc = 0x11D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6E0u;
    // 0x11d6e4: 0x26650104  addiu       $a1, $s3, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D6E0u, 0x11D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6E8u;
label_11d6e8:
    // 0x11d6e8: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D6E8u;
    {
        const bool branch_taken_0x11d6e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6E8u;
        // 0x11d6ec: 0x27a40370  addiu       $a0, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6e8) {
            ctx->pc = 0x11D710u;
            return;
        }
    }
    ctx->pc = 0x11D6F0u;
    // 0x11d6f0: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x11d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x11d6f4: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D6F4u;
    SET_GPR_U32(ctx, 31, 0x11D6FCu);
    ctx->pc = 0x11D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6F4u;
    // 0x11d6f8: 0x266503c4  addiu       $a1, $s3, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D6F4u, 0x11D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6FCu;
label_11d6fc:
    // 0x11d6fc: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x11d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x11d700: 0xc080664  jal         func_201990
    ctx->pc = 0x11D700u;
    SET_GPR_U32(ctx, 31, 0x11D708u);
    ctx->pc = 0x11D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D700u;
    // 0x11d704: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11D700u, 0x11D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D708u;
label_11d708:
    // 0x11d708: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11D708u;
    {
        const bool branch_taken_0x11d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D708u;
        // 0x11d70c: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d708) {
            ctx->pc = 0x11D71Cu;
            return;
        }
    }
    ctx->pc = 0x11D710u;
}
