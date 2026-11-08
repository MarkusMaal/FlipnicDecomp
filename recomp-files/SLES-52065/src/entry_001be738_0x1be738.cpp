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

// Function: entry_001be738
// Address: 0x1be738 - 0x1be754
void entry_001be738_0x1be738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be738_0x1be738");
#endif

    switch (ctx->pc) {
        case 0x1be740u: goto label_1be740;
        case 0x1be748u: goto label_1be748;
        case 0x1be750u: goto label_1be750;
        default: break;
    }

    ctx->pc = 0x1be738u;

    // 0x1be738: 0xc06f9a0  jal         func_1BE680
    ctx->pc = 0x1BE738u;
    SET_GPR_U32(ctx, 31, 0x1BE740u);
    ctx->pc = 0x1BE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE680u, 0x1BE738u, 0x1BE740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE740u;
label_1be740:
    // 0x1be740: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE740u;
    SET_GPR_U32(ctx, 31, 0x1BE748u);
    ctx->pc = 0x1BE744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE740u;
    // 0x1be744: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE740u, 0x1BE748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE748u;
label_1be748:
    // 0x1be748: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE748u;
    SET_GPR_U32(ctx, 31, 0x1BE750u);
    ctx->pc = 0x1BE74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE748u;
    // 0x1be74c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE748u, 0x1BE750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE750u;
label_1be750:
    // 0x1be750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1be754u;
}
