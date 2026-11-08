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

// Function: entry_0019381c
// Address: 0x19381c - 0x193834
void entry_0019381c_0x19381c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019381c_0x19381c");
#endif

    switch (ctx->pc) {
        case 0x19382cu: goto label_19382c;
        default: break;
    }

    ctx->pc = 0x19381cu;

label_19381c:
    // 0x19381c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19381cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_193820:
    // 0x193820: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x193820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_193824:
    // 0x193824: 0x320f809  jalr        $t9
label_193828:
    if (ctx->pc == 0x193828u) {
        ctx->pc = 0x193828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193824u;
        // 0x193828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19382Cu;
        goto label_19382c;
    }
    ctx->pc = 0x193824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19382Cu);
        ctx->pc = 0x193828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193824u;
        // 0x193828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193824u, 0x19382Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19382Cu;
label_19382c:
    // 0x19382c: 0x100000af  b           . + 4 + (0xAF << 2)
label_193830:
    if (ctx->pc == 0x193830u) {
        ctx->pc = 0x193834u;
        goto label_fallthrough_0x19382c;
    }
    ctx->pc = 0x19382Cu;
    {
        const bool branch_taken_0x19382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19382c) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x19382c:
    ctx->pc = 0x193834u;
}
