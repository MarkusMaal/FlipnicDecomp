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

// Function: entry_0015e650
// Address: 0x15e650 - 0x15e668
void entry_0015e650_0x15e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e650_0x15e650");
#endif

    ctx->pc = 0x15e650u;

    // 0x15e650: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15e650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15e654: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15e654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e658: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15e658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e65c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x15e65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15e660: 0xc055fc8  jal         func_157F20
    ctx->pc = 0x15E660u;
    SET_GPR_U32(ctx, 31, 0x15E668u);
    ctx->pc = 0x15E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E660u;
    // 0x15e664: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157F20u, 0x15E660u, 0x15E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E668u;
}
