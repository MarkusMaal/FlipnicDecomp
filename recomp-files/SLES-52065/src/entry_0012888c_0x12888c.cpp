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

// Function: entry_0012888c
// Address: 0x12888c - 0x1288a4
void entry_0012888c_0x12888c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012888c_0x12888c");
#endif

    ctx->pc = 0x12888cu;

    // 0x12888c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x12888cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x128890: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x128890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128894: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128898: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x128898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12889c: 0xc04a2e8  jal         func_128BA0
    ctx->pc = 0x12889Cu;
    SET_GPR_U32(ctx, 31, 0x1288A4u);
    ctx->pc = 0x1288A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12889Cu;
    // 0x1288a0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BA0u, 0x12889Cu, 0x1288A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288A4u;
}
