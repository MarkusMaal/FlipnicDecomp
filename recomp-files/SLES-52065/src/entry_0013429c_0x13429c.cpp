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

// Function: entry_0013429c
// Address: 0x13429c - 0x1342a8
void entry_0013429c_0x13429c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013429c_0x13429c");
#endif

    switch (ctx->pc) {
        case 0x1342a4u: goto label_1342a4;
        default: break;
    }

    ctx->pc = 0x13429cu;

    // 0x13429c: 0xc04d0b0  jal         func_1342C0
    ctx->pc = 0x13429Cu;
    SET_GPR_U32(ctx, 31, 0x1342A4u);
    ctx->pc = 0x1342A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13429Cu;
    // 0x1342a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1342C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1342C0u, 0x13429Cu, 0x1342A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342A4u;
label_1342a4:
    // 0x1342a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1342a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1342a8u;
}
