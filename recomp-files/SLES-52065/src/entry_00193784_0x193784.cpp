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

// Function: entry_00193784
// Address: 0x193784 - 0x19379c
void entry_00193784_0x193784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193784_0x193784");
#endif

    switch (ctx->pc) {
        case 0x193794u: goto label_193794;
        default: break;
    }

    ctx->pc = 0x193784u;

label_193784:
    // 0x193784: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x193784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_193788:
    // 0x193788: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x193788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19378c:
    // 0x19378c: 0x320f809  jalr        $t9
label_193790:
    if (ctx->pc == 0x193790u) {
        ctx->pc = 0x193790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19378Cu;
        // 0x193790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193794u;
        goto label_193794;
    }
    ctx->pc = 0x19378Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193794u);
        ctx->pc = 0x193790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19378Cu;
        // 0x193790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19378Cu, 0x193794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193794u;
label_193794:
    // 0x193794: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_193798:
    if (ctx->pc == 0x193798u) {
        ctx->pc = 0x19379Cu;
        goto label_fallthrough_0x193794;
    }
    ctx->pc = 0x193794u;
    {
        const bool branch_taken_0x193794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193794) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x193794:
    ctx->pc = 0x19379Cu;
}
