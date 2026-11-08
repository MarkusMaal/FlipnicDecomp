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

// Function: entry_00203308
// Address: 0x203308 - 0x203314
void entry_00203308_0x203308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203308_0x203308");
#endif

    switch (ctx->pc) {
        case 0x203310u: goto label_203310;
        default: break;
    }

    ctx->pc = 0x203308u;

    // 0x203308: 0xc081c20  jal         func_207080
    ctx->pc = 0x203308u;
    SET_GPR_U32(ctx, 31, 0x203310u);
    ctx->pc = 0x20330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203308u;
    // 0x20330c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x203308u, 0x203310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203310u;
label_203310:
    // 0x203310: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x203310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    ctx->pc = 0x203314u;
}
