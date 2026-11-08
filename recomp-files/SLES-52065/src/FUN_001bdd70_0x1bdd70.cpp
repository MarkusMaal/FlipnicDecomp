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

// Function: FUN_001bdd70
// Address: 0x1bdd70 - 0x1bde78
void FUN_001bdd70_0x1bdd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bdd70_0x1bdd70");
#endif

    switch (ctx->pc) {
        case 0x1bddb0u: goto label_1bddb0;
        case 0x1bddbcu: goto label_1bddbc;
        default: break;
    }

    ctx->pc = 0x1bdd70u;

    // 0x1bdd70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bdd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bdd74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bdd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bdd78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bdd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bdd7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bdd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bdd80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bdd80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bdd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bdd88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bdd88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd8c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1bdd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1bdd90: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bdd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd94: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1bdd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1bdd98: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bdd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bdd9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bdd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdda0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bdda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdda4: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1bdda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdda8: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1BDDA8u;
    SET_GPR_U32(ctx, 31, 0x1BDDB0u);
    ctx->pc = 0x1BDDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDA8u;
    // 0x1bddac: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1BDDA8u, 0x1BDDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDB0u;
label_1bddb0:
    // 0x1bddb0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1bddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bddb4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDDB4u;
    SET_GPR_U32(ctx, 31, 0x1BDDBCu);
    ctx->pc = 0x1BDDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDB4u;
    // 0x1bddb8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDDB4u, 0x1BDDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDBCu;
label_1bddbc:
    // 0x1bddbc: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1bddbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bddc0: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1bddc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1bddc4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1bddc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1bddc8: 0x208082b  sltu        $at, $s0, $t0
    ctx->pc = 0x1bddc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1bddcc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BDDCCu;
    {
        const bool branch_taken_0x1bddcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDCCu;
        // 0x1bddd0: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bddcc) {
            ctx->pc = 0x1BDDF4u;
            goto label_1bddf4;
        }
    }
    ctx->pc = 0x1BDDD4u;
    // 0x1bddd4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1bddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bddd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDDD8u;
    {
        const bool branch_taken_0x1bddd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDD8u;
        // 0x1bdddc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bddd8) {
            ctx->pc = 0x1BDDE8u;
            goto label_1bdde8;
        }
    }
    ctx->pc = 0x1BDDE0u;
    // 0x1bdde0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1bdde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bdde4: 0x0  nop
    ctx->pc = 0x1bdde4u;
    // NOP
label_1bdde8:
    // 0x1bdde8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1bdde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bddec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BDDECu;
    {
        const bool branch_taken_0x1bddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDECu;
        // 0x1bddf0: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bddec) {
            ctx->pc = 0x1BDE3Cu;
            goto label_1bde3c;
        }
    }
    ctx->pc = 0x1BDDF4u;
label_1bddf4:
    // 0x1bddf4: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x1bddf4u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1bddf8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1bddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bddfc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1bddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bde00: 0x1812  mflo        $v1
    ctx->pc = 0x1bde00u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1bde04: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1bde04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1bde08: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1bde08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bde0c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1bde0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bde10: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDE10u;
    {
        const bool branch_taken_0x1bde10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bde10) {
            ctx->pc = 0x1BDE1Cu;
            goto label_1bde1c;
        }
    }
    ctx->pc = 0x1BDE18u;
    // 0x1bde18: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bde18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bde1c:
    // 0x1bde1c: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x1bde1cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1bde20: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1bde20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1bde24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bde24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bde28: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1bde28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bde2c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1bde2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bde30: 0x1010  mfhi        $v0
    ctx->pc = 0x1bde30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bde34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bde34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bde38: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1bde38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bde3c:
    // 0x1bde3c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1bde3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x1bde40: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1bde40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1bde44: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x1bde44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x1bde48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1bde48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bde4c: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x1bde4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
    // 0x1bde50: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1bde50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde54: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1bde54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1bde58: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x1bde58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x1bde5c: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x1bde5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x1bde60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bde60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bde64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bde64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bde68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bde68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bde6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bde6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bde70: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE70u;
        // 0x1bde74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDE78u;
}
