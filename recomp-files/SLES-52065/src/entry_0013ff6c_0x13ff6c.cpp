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

// Function: entry_0013ff6c
// Address: 0x13ff6c - 0x13ffe0
void entry_0013ff6c_0x13ff6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ff6c_0x13ff6c");
#endif

    switch (ctx->pc) {
        case 0x13ff90u: goto label_13ff90;
        case 0x13ffa4u: goto label_13ffa4;
        case 0x13ffd8u: goto label_13ffd8;
        default: break;
    }

    ctx->pc = 0x13ff6cu;

    // 0x13ff6c: 0x0  nop
    ctx->pc = 0x13ff6cu;
    // NOP
    // 0x13ff70: 0x16000050  bnez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x13FF70u;
    {
        const bool branch_taken_0x13ff70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ff70) {
            ctx->pc = 0x1400B4u;
            return;
        }
    }
    ctx->pc = 0x13FF78u;
    // 0x13ff78: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x13ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13ff7c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x13ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13ff80: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x13FF80u;
    {
        const bool branch_taken_0x13ff80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF80u;
        // 0x13ff84: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff80) {
            ctx->pc = 0x1400B4u;
            return;
        }
    }
    ctx->pc = 0x13FF88u;
    // 0x13ff88: 0xc05023c  jal         func_1408F0
    ctx->pc = 0x13FF88u;
    SET_GPR_U32(ctx, 31, 0x13FF90u);
    ctx->pc = 0x13FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF88u;
    // 0x13ff8c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408F0u, 0x13FF88u, 0x13FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF90u;
label_13ff90:
    // 0x13ff90: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x13ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13ff94: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x13ff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x13ff98: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x13ff98u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13ff9c: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x13FF9Cu;
    SET_GPR_U32(ctx, 31, 0x13FFA4u);
    ctx->pc = 0x13FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF9Cu;
    // 0x13ffa0: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x13FF9Cu, 0x13FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFA4u;
label_13ffa4:
    // 0x13ffa4: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x13ffa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13ffa8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13ffac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x13ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13ffb0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13ffb4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x13ffb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13ffb8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FFB8u;
    {
        const bool branch_taken_0x13ffb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ffb8) {
            ctx->pc = 0x13FFE0u;
            return;
        }
    }
    ctx->pc = 0x13FFC0u;
    // 0x13ffc0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ffc4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x13ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x13ffc8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13ffcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13ffccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ffd0: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x13FFD0u;
    SET_GPR_U32(ctx, 31, 0x13FFD8u);
    ctx->pc = 0x13FFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FFD0u;
    // 0x13ffd4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x13FFD0u, 0x13FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFD8u;
label_13ffd8:
    // 0x13ffd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13FFD8u;
    {
        const bool branch_taken_0x13ffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ffd8) {
            ctx->pc = 0x13FFFCu;
            return;
        }
    }
    ctx->pc = 0x13FFE0u;
}
