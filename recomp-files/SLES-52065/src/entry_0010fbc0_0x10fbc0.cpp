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

// Function: entry_0010fbc0
// Address: 0x10fbc0 - 0x10fbcc
void entry_0010fbc0_0x10fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbc0_0x10fbc0");
#endif

    ctx->pc = 0x10fbc0u;

    // 0x10fbc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10fbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbc4: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x10FBC4u;
    SET_GPR_U32(ctx, 31, 0x10FBCCu);
    ctx->pc = 0x10FBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FBC4u;
    // 0x10fbc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x10FBC4u, 0x10FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBCCu;
}
