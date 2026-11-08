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

// Function: entry_00149d58
// Address: 0x149d58 - 0x149dc0
void entry_00149d58_0x149d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149d58_0x149d58");
#endif

    switch (ctx->pc) {
        case 0x149d64u: goto label_149d64;
        case 0x149d94u: goto label_149d94;
        case 0x149da4u: goto label_149da4;
        default: break;
    }

    ctx->pc = 0x149d58u;

    // 0x149d58: 0x27a407c0  addiu       $a0, $sp, 0x7C0
    ctx->pc = 0x149d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1984));
    // 0x149d5c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149D5Cu;
    SET_GPR_U32(ctx, 31, 0x149D64u);
    ctx->pc = 0x149D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D5Cu;
    // 0x149d60: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149D5Cu, 0x149D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D64u;
label_149d64:
    // 0x149d64: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x149d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x149d68: 0x27a407c0  addiu       $a0, $sp, 0x7C0
    ctx->pc = 0x149d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1984));
    // 0x149d6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149d70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d74: 0xafa207cc  sw          $v0, 0x7CC($sp)
    ctx->pc = 0x149d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1996), GPR_U32(ctx, 2));
    // 0x149d78: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x149d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x149d7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149d80: 0xafa207d0  sw          $v0, 0x7D0($sp)
    ctx->pc = 0x149d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2000), GPR_U32(ctx, 2));
    // 0x149d84: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x149d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x149d88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149d8c: 0xc051898  jal         func_146260
    ctx->pc = 0x149D8Cu;
    SET_GPR_U32(ctx, 31, 0x149D94u);
    ctx->pc = 0x149D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D8Cu;
    // 0x149d90: 0xafa207d4  sw          $v0, 0x7D4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2004), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x149D8Cu, 0x149D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D94u;
label_149d94:
    // 0x149d94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x149d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d98: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x149d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x149d9c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149D9Cu;
    SET_GPR_U32(ctx, 31, 0x149DA4u);
    ctx->pc = 0x149DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D9Cu;
    // 0x149da0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149D9Cu, 0x149DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149DA4u;
label_149da4:
    // 0x149da4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x149da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x149da8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x149da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x149dac: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x149dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x149db0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149db4: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x149db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x149db8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x149db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x149dbc: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x149dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    ctx->pc = 0x149dc0u;
}
