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

// Function: entry_0011e818
// Address: 0x11e818 - 0x11e844
void entry_0011e818_0x11e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e818_0x11e818");
#endif

    switch (ctx->pc) {
        case 0x11e824u: goto label_11e824;
        case 0x11e830u: goto label_11e830;
        default: break;
    }

    ctx->pc = 0x11e818u;

    // 0x11e818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e81c: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11E81Cu;
    SET_GPR_U32(ctx, 31, 0x11E824u);
    ctx->pc = 0x11E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E81Cu;
    // 0x11e820: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11E81Cu, 0x11E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E824u;
label_11e824:
    // 0x11e824: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11e824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e828: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x11E828u;
    SET_GPR_U32(ctx, 31, 0x11E830u);
    ctx->pc = 0x11E82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E828u;
    // 0x11e82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x11E828u, 0x11E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E830u;
label_11e830:
    // 0x11e830: 0x2623000f  addiu       $v1, $s1, 0xF
    ctx->pc = 0x11e830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x11e834: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E834u;
    {
        const bool branch_taken_0x11e834 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E834u;
        // 0x11e838: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e834) {
            ctx->pc = 0x11E844u;
            return;
        }
    }
    ctx->pc = 0x11E83Cu;
    // 0x11e83c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x11e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x11e840: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x11e840u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x11e844u;
}
