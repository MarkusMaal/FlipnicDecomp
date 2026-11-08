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

// Function: entry_0011a084
// Address: 0x11a084 - 0x11a0a4
void entry_0011a084_0x11a084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a084_0x11a084");
#endif

    switch (ctx->pc) {
        case 0x11a098u: goto label_11a098;
        default: break;
    }

    ctx->pc = 0x11a084u;

    // 0x11a084: 0x0  nop
    ctx->pc = 0x11a084u;
    // NOP
    // 0x11a088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a08c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11a08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a090: 0xc07bf80  jal         func_1EFE00
    ctx->pc = 0x11A090u;
    SET_GPR_U32(ctx, 31, 0x11A098u);
    ctx->pc = 0x11A094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A090u;
    // 0x11a094: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE00u, 0x11A090u, 0x11A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A098u;
label_11a098:
    // 0x11a098: 0x52182a  slt         $v1, $v0, $s2
    ctx->pc = 0x11a098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x11a09c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x11A09Cu;
    {
        const bool branch_taken_0x11a09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a09c) {
            ctx->pc = 0x11A074u;
            return;
        }
    }
    ctx->pc = 0x11A0A4u;
}
