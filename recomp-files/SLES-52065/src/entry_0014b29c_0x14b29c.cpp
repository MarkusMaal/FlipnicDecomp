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

// Function: entry_0014b29c
// Address: 0x14b29c - 0x14b310
void entry_0014b29c_0x14b29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b29c_0x14b29c");
#endif

    switch (ctx->pc) {
        case 0x14b2c0u: goto label_14b2c0;
        case 0x14b2d4u: goto label_14b2d4;
        case 0x14b308u: goto label_14b308;
        default: break;
    }

    ctx->pc = 0x14b29cu;

    // 0x14b29c: 0x0  nop
    ctx->pc = 0x14b29cu;
    // NOP
    // 0x14b2a0: 0x16000050  bnez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x14B2A0u;
    {
        const bool branch_taken_0x14b2a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b2a0) {
            ctx->pc = 0x14B3E4u;
            return;
        }
    }
    ctx->pc = 0x14B2A8u;
    // 0x14b2a8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14b2ac: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14b2b0: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x14B2B0u;
    {
        const bool branch_taken_0x14b2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2B0u;
        // 0x14b2b4: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2b0) {
            ctx->pc = 0x14B3E4u;
            return;
        }
    }
    ctx->pc = 0x14B2B8u;
    // 0x14b2b8: 0xc05023c  jal         func_1408F0
    ctx->pc = 0x14B2B8u;
    SET_GPR_U32(ctx, 31, 0x14B2C0u);
    ctx->pc = 0x14B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2B8u;
    // 0x14b2bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408F0u, 0x14B2B8u, 0x14B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2C0u;
label_14b2c0:
    // 0x14b2c0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x14b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b2c4: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x14b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x14b2c8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x14b2c8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x14b2cc: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x14B2CCu;
    SET_GPR_U32(ctx, 31, 0x14B2D4u);
    ctx->pc = 0x14B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2CCu;
    // 0x14b2d0: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x14B2CCu, 0x14B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2D4u;
label_14b2d4:
    // 0x14b2d4: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x14b2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14b2d8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x14b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14b2dc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x14b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b2e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14b2e4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x14b2e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14b2e8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B2E8u;
    {
        const bool branch_taken_0x14b2e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b2e8) {
            ctx->pc = 0x14B310u;
            return;
        }
    }
    ctx->pc = 0x14B2F0u;
    // 0x14b2f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14b2f4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x14b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x14b2f8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x14b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14b2fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14b2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b300: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x14B300u;
    SET_GPR_U32(ctx, 31, 0x14B308u);
    ctx->pc = 0x14B304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B300u;
    // 0x14b304: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x14B300u, 0x14B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B308u;
label_14b308:
    // 0x14b308: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B308u;
    {
        const bool branch_taken_0x14b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b308) {
            ctx->pc = 0x14B32Cu;
            return;
        }
    }
    ctx->pc = 0x14B310u;
}
