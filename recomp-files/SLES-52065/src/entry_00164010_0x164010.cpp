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

// Function: entry_00164010
// Address: 0x164010 - 0x16401c
void entry_00164010_0x164010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164010_0x164010");
#endif

    switch (ctx->pc) {
        case 0x164018u: goto label_164018;
        default: break;
    }

    ctx->pc = 0x164010u;

    // 0x164010: 0xc055dd8  jal         func_157760
    ctx->pc = 0x164010u;
    SET_GPR_U32(ctx, 31, 0x164018u);
    ctx->pc = 0x164014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164010u;
    // 0x164014: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157760u, 0x164010u, 0x164018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164018u;
label_164018:
    // 0x164018: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x164018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x16401cu;
}
