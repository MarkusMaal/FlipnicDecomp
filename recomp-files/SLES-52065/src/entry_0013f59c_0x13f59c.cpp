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

// Function: entry_0013f59c
// Address: 0x13f59c - 0x13f5cc
void entry_0013f59c_0x13f59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f59c_0x13f59c");
#endif

    switch (ctx->pc) {
        case 0x13f5b4u: goto label_13f5b4;
        case 0x13f5bcu: goto label_13f5bc;
        default: break;
    }

    ctx->pc = 0x13f59cu;

    // 0x13f59c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x13f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13f5a0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x13f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13f5a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f5a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f5ac: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13F5ACu;
    SET_GPR_U32(ctx, 31, 0x13F5B4u);
    ctx->pc = 0x13F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F5ACu;
    // 0x13f5b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13F5ACu, 0x13F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5B4u;
label_13f5b4:
    // 0x13f5b4: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x13F5B4u;
    SET_GPR_U32(ctx, 31, 0x13F5BCu);
    ctx->pc = 0x13F5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F5B4u;
    // 0x13f5b8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x13F5B4u, 0x13F5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5BCu;
label_13f5bc:
    // 0x13f5bc: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x13f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x13f5c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f5c4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x13f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13f5c8: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x13f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x13f5ccu;
}
