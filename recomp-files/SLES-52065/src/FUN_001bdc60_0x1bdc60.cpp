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

// Function: FUN_001bdc60
// Address: 0x1bdc60 - 0x1bdd68
void FUN_001bdc60_0x1bdc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bdc60_0x1bdc60");
#endif

    switch (ctx->pc) {
        case 0x1bdca0u: goto label_1bdca0;
        case 0x1bdcacu: goto label_1bdcac;
        default: break;
    }

    ctx->pc = 0x1bdc60u;

    // 0x1bdc60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bdc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bdc64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bdc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bdc68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bdc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bdc6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bdc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bdc70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bdc70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bdc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bdc78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bdc78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc7c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1bdc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1bdc80: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bdc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc84: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1bdc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1bdc88: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bdc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bdc8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bdc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bdc90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdc94: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1bdc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdc98: 0xc0500a0  jal         func_140280
    ctx->pc = 0x1BDC98u;
    SET_GPR_U32(ctx, 31, 0x1BDCA0u);
    ctx->pc = 0x1BDC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC98u;
    // 0x1bdc9c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140280u, 0x1BDC98u, 0x1BDCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCA0u;
label_1bdca0:
    // 0x1bdca0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1bdca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bdca4: 0xc050098  jal         func_140260
    ctx->pc = 0x1BDCA4u;
    SET_GPR_U32(ctx, 31, 0x1BDCACu);
    ctx->pc = 0x1BDCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCA4u;
    // 0x1bdca8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140260u, 0x1BDCA4u, 0x1BDCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCACu;
label_1bdcac:
    // 0x1bdcac: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1bdcacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bdcb0: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1bdcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1bdcb4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1bdcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1bdcb8: 0x208082b  sltu        $at, $s0, $t0
    ctx->pc = 0x1bdcb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1bdcbc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BDCBCu;
    {
        const bool branch_taken_0x1bdcbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCBCu;
        // 0x1bdcc0: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcbc) {
            ctx->pc = 0x1BDCE4u;
            goto label_1bdce4;
        }
    }
    ctx->pc = 0x1BDCC4u;
    // 0x1bdcc4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1bdcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bdcc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDCC8u;
    {
        const bool branch_taken_0x1bdcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCC8u;
        // 0x1bdccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcc8) {
            ctx->pc = 0x1BDCD8u;
            goto label_1bdcd8;
        }
    }
    ctx->pc = 0x1BDCD0u;
    // 0x1bdcd0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1bdcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bdcd4: 0x0  nop
    ctx->pc = 0x1bdcd4u;
    // NOP
label_1bdcd8:
    // 0x1bdcd8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1bdcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bdcdc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BDCDCu;
    {
        const bool branch_taken_0x1bdcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCDCu;
        // 0x1bdce0: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcdc) {
            ctx->pc = 0x1BDD2Cu;
            goto label_1bdd2c;
        }
    }
    ctx->pc = 0x1BDCE4u;
label_1bdce4:
    // 0x1bdce4: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x1bdce4u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1bdce8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1bdce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bdcec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1bdcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdcf0: 0x1812  mflo        $v1
    ctx->pc = 0x1bdcf0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1bdcf4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1bdcf8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1bdcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bdcfc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1bdcfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bdd00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDD00u;
    {
        const bool branch_taken_0x1bdd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdd00) {
            ctx->pc = 0x1BDD0Cu;
            goto label_1bdd0c;
        }
    }
    ctx->pc = 0x1BDD08u;
    // 0x1bdd08: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bdd08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bdd0c:
    // 0x1bdd0c: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x1bdd0cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1bdd10: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1bdd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1bdd14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bdd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdd18: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1bdd18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdd1c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1bdd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bdd20: 0x1010  mfhi        $v0
    ctx->pc = 0x1bdd20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bdd24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bdd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bdd28: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1bdd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bdd2c:
    // 0x1bdd2c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1bdd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x1bdd30: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1bdd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1bdd34: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x1bdd34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x1bdd38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1bdd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bdd3c: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x1bdd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
    // 0x1bdd40: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1bdd40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd44: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1bdd44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1bdd48: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x1bdd48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x1bdd4c: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x1bdd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x1bdd50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bdd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bdd54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bdd54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdd58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bdd58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdd5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bdd5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdd60: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD60u;
        // 0x1bdd64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDD68u;
}
