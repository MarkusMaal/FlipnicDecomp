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

// Function: entry_0019ff38
// Address: 0x19ff38 - 0x19ff50
void entry_0019ff38_0x19ff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ff38_0x19ff38");
#endif

    switch (ctx->pc) {
        case 0x19ff48u: goto label_19ff48;
        default: break;
    }

    ctx->pc = 0x19ff38u;

    // 0x19ff38: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x19ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x19ff3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ff3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff40: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19FF40u;
    SET_GPR_U32(ctx, 31, 0x19FF48u);
    ctx->pc = 0x19FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF40u;
    // 0x19ff44: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19FF40u, 0x19FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF48u;
label_19ff48:
    // 0x19ff48: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19FF48u;
    SET_GPR_U32(ctx, 31, 0x19FF50u);
    ctx->pc = 0x19FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF48u;
    // 0x19ff4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19FF48u, 0x19FF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF50u;
}
