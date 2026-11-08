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

// Function: entry_001bca40
// Address: 0x1bca40 - 0x1bcabc
void entry_001bca40_0x1bca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bca40_0x1bca40");
#endif

    switch (ctx->pc) {
        case 0x1bca48u: goto label_1bca48;
        case 0x1bca7cu: goto label_1bca7c;
        default: break;
    }

    ctx->pc = 0x1bca40u;

    // 0x1bca40: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCA40u;
    SET_GPR_U32(ctx, 31, 0x1BCA48u);
    ctx->pc = 0x1BCA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA40u;
    // 0x1bca44: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCA40u, 0x1BCA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA48u;
label_1bca48:
    // 0x1bca48: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BCA48u;
    {
        const bool branch_taken_0x1bca48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA48u;
        // 0x1bca4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca48) {
            ctx->pc = 0x1BCAC0u;
            return;
        }
    }
    ctx->pc = 0x1BCA50u;
    // 0x1bca50: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x1bca50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1bca54: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1bca54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1bca58: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1bca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1bca5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bca60: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1bca60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bca64: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x1bca64u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1bca68: 0x0  nop
    ctx->pc = 0x1bca68u;
    // NOP
    // 0x1bca6c: 0x0  nop
    ctx->pc = 0x1bca6cu;
    // NOP
    // 0x1bca70: 0x2812  mflo        $a1
    ctx->pc = 0x1bca70u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1bca74: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x1BCA74u;
    SET_GPR_U32(ctx, 31, 0x1BCA7Cu);
    ctx->pc = 0x1BCA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA74u;
    // 0x1bca78: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1BCA74u, 0x1BCA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA7Cu;
label_1bca7c:
    // 0x1bca7c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x1bca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1bca80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bca80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bca84: 0x224001b  divu        $zero, $s1, $a0
    ctx->pc = 0x1bca84u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1bca88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bca8c: 0x0  nop
    ctx->pc = 0x1bca8cu;
    // NOP
    // 0x1bca90: 0x2010  mfhi        $a0
    ctx->pc = 0x1bca90u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bca94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bca94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bca98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bca98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bca9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bcaa0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCAA0u;
    {
        const bool branch_taken_0x1bcaa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bcaa0) {
            ctx->pc = 0x1BCABCu;
            return;
        }
    }
    ctx->pc = 0x1BCAA8u;
    // 0x1bcaa8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1bcaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bcaac: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1bcaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1bcab0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1bcab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1bcab4: 0xc06f55c  jal         func_1BD570
    ctx->pc = 0x1BCAB4u;
    SET_GPR_U32(ctx, 31, 0x1BCABCu);
    ctx->pc = 0x1BCAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAB4u;
    // 0x1bcab8: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD570u, 0x1BCAB4u, 0x1BCABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCABCu;
}
