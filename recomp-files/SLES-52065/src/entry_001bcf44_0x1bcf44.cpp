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

// Function: entry_001bcf44
// Address: 0x1bcf44 - 0x1bcfc0
void entry_001bcf44_0x1bcf44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcf44_0x1bcf44");
#endif

    switch (ctx->pc) {
        case 0x1bcf4cu: goto label_1bcf4c;
        case 0x1bcf80u: goto label_1bcf80;
        default: break;
    }

    ctx->pc = 0x1bcf44u;

    // 0x1bcf44: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCF44u;
    SET_GPR_U32(ctx, 31, 0x1BCF4Cu);
    ctx->pc = 0x1BCF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF44u;
    // 0x1bcf48: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCF44u, 0x1BCF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF4Cu;
label_1bcf4c:
    // 0x1bcf4c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BCF4Cu;
    {
        const bool branch_taken_0x1bcf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF4Cu;
        // 0x1bcf50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf4c) {
            ctx->pc = 0x1BCFC4u;
            return;
        }
    }
    ctx->pc = 0x1BCF54u;
    // 0x1bcf54: 0x8ea50074  lw          $a1, 0x74($s5)
    ctx->pc = 0x1bcf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x1bcf58: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1bcf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1bcf5c: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x1bcf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1bcf60: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bcf64: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x1bcf64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bcf68: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x1bcf68u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x1bcf6c: 0x0  nop
    ctx->pc = 0x1bcf6cu;
    // NOP
    // 0x1bcf70: 0x0  nop
    ctx->pc = 0x1bcf70u;
    // NOP
    // 0x1bcf74: 0x2812  mflo        $a1
    ctx->pc = 0x1bcf74u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1bcf78: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x1BCF78u;
    SET_GPR_U32(ctx, 31, 0x1BCF80u);
    ctx->pc = 0x1BCF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF78u;
    // 0x1bcf7c: 0x26a40064  addiu       $a0, $s5, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1BCF78u, 0x1BCF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF80u;
label_1bcf80:
    // 0x1bcf80: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1bcf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1bcf84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bcf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcf88: 0x244001b  divu        $zero, $s2, $a0
    ctx->pc = 0x1bcf88u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x1bcf8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bcf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bcf90: 0x0  nop
    ctx->pc = 0x1bcf90u;
    // NOP
    // 0x1bcf94: 0x2010  mfhi        $a0
    ctx->pc = 0x1bcf94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bcf98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bcf98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bcf9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bcf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bcfa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bcfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bcfa4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCFA4u;
    {
        const bool branch_taken_0x1bcfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bcfa4) {
            ctx->pc = 0x1BCFC0u;
            return;
        }
    }
    ctx->pc = 0x1BCFACu;
    // 0x1bcfac: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1bcfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bcfb0: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x1bcfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1bcfb4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1bcfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1bcfb8: 0xc06f55c  jal         func_1BD570
    ctx->pc = 0x1BCFB8u;
    SET_GPR_U32(ctx, 31, 0x1BCFC0u);
    ctx->pc = 0x1BCFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCFB8u;
    // 0x1bcfbc: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD570u, 0x1BCFB8u, 0x1BCFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFC0u;
}
