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

// Function: entry_0015c990
// Address: 0x15c990 - 0x15c9ac
void entry_0015c990_0x15c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c990_0x15c990");
#endif

    switch (ctx->pc) {
        case 0x15c998u: goto label_15c998;
        default: break;
    }

    ctx->pc = 0x15c990u;

    // 0x15c990: 0xc055d4c  jal         func_157530
    ctx->pc = 0x15C990u;
    SET_GPR_U32(ctx, 31, 0x15C998u);
    ctx->pc = 0x15C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C990u;
    // 0x15c994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157530u, 0x15C990u, 0x15C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C998u;
label_15c998:
    // 0x15c998: 0x8ea22c1c  lw          $v0, 0x2C1C($s5)
    ctx->pc = 0x15c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15c99c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c9a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15c9a4: 0xc055dec  jal         func_1577B0
    ctx->pc = 0x15C9A4u;
    SET_GPR_U32(ctx, 31, 0x15C9ACu);
    ctx->pc = 0x15C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C9A4u;
    // 0x15c9a8: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577B0u, 0x15C9A4u, 0x15C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C9ACu;
}
