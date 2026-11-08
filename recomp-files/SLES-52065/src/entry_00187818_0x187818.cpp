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

// Function: entry_00187818
// Address: 0x187818 - 0x187834
void entry_00187818_0x187818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187818_0x187818");
#endif

    switch (ctx->pc) {
        case 0x187820u: goto label_187820;
        case 0x187828u: goto label_187828;
        case 0x187830u: goto label_187830;
        default: break;
    }

    ctx->pc = 0x187818u;

    // 0x187818: 0xc061e20  jal         func_187880
    ctx->pc = 0x187818u;
    SET_GPR_U32(ctx, 31, 0x187820u);
    ctx->pc = 0x187880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187880u, 0x187818u, 0x187820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187820u;
label_187820:
    // 0x187820: 0xc061e1c  jal         func_187870
    ctx->pc = 0x187820u;
    SET_GPR_U32(ctx, 31, 0x187828u);
    ctx->pc = 0x187824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187820u;
    // 0x187824: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187870u, 0x187820u, 0x187828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187828u;
label_187828:
    // 0x187828: 0xc0401a4  jal         func_100690
    ctx->pc = 0x187828u;
    SET_GPR_U32(ctx, 31, 0x187830u);
    ctx->pc = 0x18782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187828u;
    // 0x18782c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x187828u, 0x187830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187830u;
label_187830:
    // 0x187830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x187830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187834u;
}
