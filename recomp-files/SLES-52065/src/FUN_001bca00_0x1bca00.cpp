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

// Function: FUN_001bca00
// Address: 0x1bca00 - 0x1bcb14
void FUN_001bca00_0x1bca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bca00_0x1bca00");
#endif

    switch (ctx->pc) {
        case 0x1bca1cu: goto label_1bca1c;
        case 0x1bca3cu: goto label_1bca3c;
        case 0x1bca48u: goto label_1bca48;
        case 0x1bca7cu: goto label_1bca7c;
        case 0x1bcabcu: goto label_1bcabc;
        case 0x1bcac8u: goto label_1bcac8;
        case 0x1bcad8u: goto label_1bcad8;
        case 0x1bcae0u: goto label_1bcae0;
        case 0x1bcaf8u: goto label_1bcaf8;
        case 0x1bcb00u: goto label_1bcb00;
        default: break;
    }

    ctx->pc = 0x1bca00u;

    // 0x1bca00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bca04: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1bca04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bca08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bca0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bca10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bca14: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCA14u;
    SET_GPR_U32(ctx, 31, 0x1BCA1Cu);
    ctx->pc = 0x1BCA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA14u;
    // 0x1bca18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCA14u, 0x1BCA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA1Cu;
label_1bca1c:
    // 0x1bca1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCA1Cu;
    {
        const bool branch_taken_0x1bca1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA1Cu;
        // 0x1bca20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca1c) {
            ctx->pc = 0x1BCA40u;
            goto label_1bca40;
        }
    }
    ctx->pc = 0x1BCA24u;
    // 0x1bca24: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1bca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1bca28: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bca28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bca2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCA2Cu;
    {
        const bool branch_taken_0x1bca2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA2Cu;
        // 0x1bca30: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca2c) {
            ctx->pc = 0x1BCA3Cu;
            goto label_1bca3c;
        }
    }
    ctx->pc = 0x1BCA34u;
    // 0x1bca34: 0xc06f500  jal         func_1BD400
    ctx->pc = 0x1BCA34u;
    SET_GPR_U32(ctx, 31, 0x1BCA3Cu);
    ctx->pc = 0x1BD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD400u, 0x1BCA34u, 0x1BCA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA3Cu;
label_1bca3c:
    // 0x1bca3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bca3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bca40:
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
            goto label_1bcac0;
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
            goto label_1bcabc;
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
label_1bcabc:
    // 0x1bcabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bcac0:
    // 0x1bcac0: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCAC0u;
    SET_GPR_U32(ctx, 31, 0x1BCAC8u);
    ctx->pc = 0x1BCAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAC0u;
    // 0x1bcac4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCAC0u, 0x1BCAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAC8u;
label_1bcac8:
    // 0x1bcac8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BCAC8u;
    {
        const bool branch_taken_0x1bcac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcac8) {
            ctx->pc = 0x1BCAF8u;
            goto label_1bcaf8;
        }
    }
    ctx->pc = 0x1BCAD0u;
    // 0x1bcad0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCAD0u;
    {
        const bool branch_taken_0x1bcad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcad0) {
            ctx->pc = 0x1BCAE0u;
            goto label_1bcae0;
        }
    }
    ctx->pc = 0x1BCAD8u;
label_1bcad8:
    // 0x1bcad8: 0xc06f500  jal         func_1BD400
    ctx->pc = 0x1BCAD8u;
    SET_GPR_U32(ctx, 31, 0x1BCAE0u);
    ctx->pc = 0x1BCADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAD8u;
    // 0x1bcadc: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD400u, 0x1BCAD8u, 0x1BCAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAE0u;
label_1bcae0:
    // 0x1bcae0: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1bcae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1bcae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcae8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BCAE8u;
    {
        const bool branch_taken_0x1bcae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcae8) {
            ctx->pc = 0x1BCAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcad8;
        }
    }
    ctx->pc = 0x1BCAF0u;
    // 0x1bcaf0: 0xc06f490  jal         func_1BD240
    ctx->pc = 0x1BCAF0u;
    SET_GPR_U32(ctx, 31, 0x1BCAF8u);
    ctx->pc = 0x1BCAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAF0u;
    // 0x1bcaf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD240u, 0x1BCAF0u, 0x1BCAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAF8u;
label_1bcaf8:
    // 0x1bcaf8: 0xc04b220  jal         func_12C880
    ctx->pc = 0x1BCAF8u;
    SET_GPR_U32(ctx, 31, 0x1BCB00u);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x1BCAF8u, 0x1BCB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB00u;
label_1bcb00:
    // 0x1bcb00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bcb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bcb04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bcb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcb08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bcb08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bcb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB0Cu;
        // 0x1bcb10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCB14u;
}
