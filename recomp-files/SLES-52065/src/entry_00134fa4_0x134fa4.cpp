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

// Function: entry_00134fa4
// Address: 0x134fa4 - 0x134fb4
void entry_00134fa4_0x134fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134fa4_0x134fa4");
#endif

    ctx->pc = 0x134fa4u;

    // 0x134fa4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x134fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x134fa8: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x134fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x134fac: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x134FACu;
    SET_GPR_U32(ctx, 31, 0x134FB4u);
    ctx->pc = 0x134FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134FACu;
    // 0x134fb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x134FACu, 0x134FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134FB4u;
}
