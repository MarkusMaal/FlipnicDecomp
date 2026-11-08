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

// Function: caseD_3
// Address: 0x11d160 - 0x11d188
void caseD_3_0x11d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x11d160");
#endif

    switch (ctx->pc) {
        case 0x11d168u: goto label_11d168;
        case 0x11d178u: goto label_11d178;
        case 0x11d180u: goto label_11d180;
        default: break;
    }

    ctx->pc = 0x11d160u;

    // 0x11d160: 0xc047158  jal         func_11C560
    ctx->pc = 0x11D160u;
    SET_GPR_U32(ctx, 31, 0x11D168u);
    ctx->pc = 0x11D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D160u;
    // 0x11d164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C560u, 0x11D160u, 0x11D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D168u;
label_11d168:
    // 0x11d168: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D168u;
    {
        const bool branch_taken_0x11d168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d168) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11D170u;
    // 0x11d170: 0xc0752ba  jal         func_1D4AE8
    ctx->pc = 0x11D170u;
    SET_GPR_U32(ctx, 31, 0x11D178u);
    ctx->pc = 0x11D174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D170u;
    // 0x11d174: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AE8u, 0x11D170u, 0x11D178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D178u;
label_11d178:
    // 0x11d178: 0xc075314  jal         func_1D4C50
    ctx->pc = 0x11D178u;
    SET_GPR_U32(ctx, 31, 0x11D180u);
    ctx->pc = 0x11D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D178u;
    // 0x11d17c: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4C50u, 0x11D178u, 0x11D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D180u;
label_11d180:
    // 0x11d180: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11d180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d184: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x11d184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    ctx->pc = 0x11d188u;
}
