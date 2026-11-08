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

// Function: entry_0014ab4c
// Address: 0x14ab4c - 0x14ab7c
void entry_0014ab4c_0x14ab4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ab4c_0x14ab4c");
#endif

    switch (ctx->pc) {
        case 0x14ab64u: goto label_14ab64;
        case 0x14ab6cu: goto label_14ab6c;
        default: break;
    }

    ctx->pc = 0x14ab4cu;

    // 0x14ab4c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x14ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x14ab50: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x14ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14ab54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14ab58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ab5c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14AB5Cu;
    SET_GPR_U32(ctx, 31, 0x14AB64u);
    ctx->pc = 0x14AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB5Cu;
    // 0x14ab60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14AB5Cu, 0x14AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB64u;
label_14ab64:
    // 0x14ab64: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x14AB64u;
    SET_GPR_U32(ctx, 31, 0x14AB6Cu);
    ctx->pc = 0x14AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB64u;
    // 0x14ab68: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x14AB64u, 0x14AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB6Cu;
label_14ab6c:
    // 0x14ab6c: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x14ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14ab70: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14ab74: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x14ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14ab78: 0xaea30014  sw          $v1, 0x14($s5)
    ctx->pc = 0x14ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x14ab7cu;
}
