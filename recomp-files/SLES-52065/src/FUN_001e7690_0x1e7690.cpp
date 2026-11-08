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

// Function: FUN_001e7690
// Address: 0x1e7690 - 0x1e7864
void FUN_001e7690_0x1e7690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7690_0x1e7690");
#endif

    switch (ctx->pc) {
        case 0x1e7738u: goto label_1e7738;
        case 0x1e7778u: goto label_1e7778;
        case 0x1e77e8u: goto label_1e77e8;
        case 0x1e7844u: goto label_1e7844;
        default: break;
    }

    ctx->pc = 0x1e7690u;

    // 0x1e7690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e7690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e7694: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e7694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e7698: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e7698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e769c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e769cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e76a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e76a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e76a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e76a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e76a8: 0x27b20062  addiu       $s2, $sp, 0x62
    ctx->pc = 0x1e76a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 98));
    // 0x1e76ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e76acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e76b0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1e76b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e76b4: 0xa7a20060  sh          $v0, 0x60($sp)
    ctx->pc = 0x1e76b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e76b8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1e76b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e76bc: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x1e76bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e76c0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1e76c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e76c4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1e76c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e76c8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E76C8u;
    {
        const bool branch_taken_0x1e76c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76C8u;
        // 0x1e76cc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76c8) {
            ctx->pc = 0x1E76F8u;
            goto label_1e76f8;
        }
    }
    ctx->pc = 0x1E76D0u;
    // 0x1e76d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e76d4: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x1e76d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e76d8: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1e76d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e76dc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1e76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e76e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e76e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e76e4: 0x0  nop
    ctx->pc = 0x1e76e4u;
    // NOP
    // 0x1e76e8: 0x0  nop
    ctx->pc = 0x1e76e8u;
    // NOP
    // 0x1e76ec: 0x1012  mflo        $v0
    ctx->pc = 0x1e76ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1e76f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E76F0u;
    {
        const bool branch_taken_0x1e76f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76F0u;
        // 0x1e76f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76f0) {
            ctx->pc = 0x1E76FCu;
            goto label_1e76fc;
        }
    }
    ctx->pc = 0x1E76F8u;
label_1e76f8:
    // 0x1e76f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e76f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e76fc:
    // 0x1e76fc: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1e76fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1e7700: 0x27b30066  addiu       $s3, $sp, 0x66
    ctx->pc = 0x1e7700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 102));
    // 0x1e7704: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1e7704u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7708: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e7708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e770c: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x1e770cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7710: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x1e7710u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7714: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x1e7714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e7718: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1e7718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e771c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e771cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7720: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x1e7720u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7724: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1e7724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e7728: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1e7728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e772c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e772cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e7730: 0xc079e1c  jal         func_1E7870
    ctx->pc = 0x1E7730u;
    SET_GPR_U32(ctx, 31, 0x1E7738u);
    ctx->pc = 0x1E7734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7730u;
    // 0x1e7734: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7870u, 0x1E7730u, 0x1E7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7738u;
label_1e7738:
    // 0x1e7738: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1e7738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e773c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e773cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7740: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1e7740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e7744: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e7744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e7748: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1e7748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e774c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E774Cu;
    {
        const bool branch_taken_0x1e774c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E774Cu;
        // 0x1e7750: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e774c) {
            ctx->pc = 0x1E776Cu;
            goto label_1e776c;
        }
    }
    ctx->pc = 0x1E7754u;
    // 0x1e7754: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x1e7754u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e7758: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1e7758u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e775c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1e775cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e7760: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7760u;
    {
        const bool branch_taken_0x1e7760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7760u;
        // 0x1e7764: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7760) {
            ctx->pc = 0x1E7780u;
            goto label_1e7780;
        }
    }
    ctx->pc = 0x1E7768u;
    // 0x1e7768: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e7768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e776c:
    // 0x1e776c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e776cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7770: 0xc07a034  jal         func_1E80D0
    ctx->pc = 0x1E7770u;
    SET_GPR_U32(ctx, 31, 0x1E7778u);
    ctx->pc = 0x1E7774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7770u;
    // 0x1e7774: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E80D0u, 0x1E7770u, 0x1E7778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7778u;
label_1e7778:
    // 0x1e7778: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1E7778u;
    {
        const bool branch_taken_0x1e7778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7778u;
        // 0x1e777c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7778) {
            ctx->pc = 0x1E7848u;
            goto label_1e7848;
        }
    }
    ctx->pc = 0x1E7780u;
label_1e7780:
    // 0x1e7780: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7780u;
    {
        const bool branch_taken_0x1e7780 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7780u;
        // 0x1e7784: 0x380c3  sra         $s0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7780) {
            ctx->pc = 0x1E7790u;
            goto label_1e7790;
        }
    }
    ctx->pc = 0x1E7788u;
    // 0x1e7788: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x1e7788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1e778c: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x1e778cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
label_1e7790:
    // 0x1e7790: 0x84a70000  lh          $a3, 0x0($a1)
    ctx->pc = 0x1e7790u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7794: 0x27a80068  addiu       $t0, $sp, 0x68
    ctx->pc = 0x1e7794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e7798: 0x84a60002  lh          $a2, 0x2($a1)
    ctx->pc = 0x1e7798u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e779c: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x1e779cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e77a0: 0x84a30006  lh          $v1, 0x6($a1)
    ctx->pc = 0x1e77a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1e77a4: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x1e77a4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e77a8: 0xa5060002  sh          $a2, 0x2($t0)
    ctx->pc = 0x1e77a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e77ac: 0xa5040004  sh          $a0, 0x4($t0)
    ctx->pc = 0x1e77acu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e77b0: 0xa5030006  sh          $v1, 0x6($t0)
    ctx->pc = 0x1e77b0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e77b4: 0x97a40068  lhu         $a0, 0x68($sp)
    ctx->pc = 0x1e77b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e77b8: 0x97a30060  lhu         $v1, 0x60($sp)
    ctx->pc = 0x1e77b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e77bc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1e77bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e77c0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1E77C0u;
    {
        const bool branch_taken_0x1e77c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e77c0) {
            ctx->pc = 0x1E77F0u;
            goto label_1e77f0;
        }
    }
    ctx->pc = 0x1E77C8u;
    // 0x1e77c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1e77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e77cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e77ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77d0: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x1e77d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e77d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e77d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e77d8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e77d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e77dc: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1e77dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e77e0: 0xc07a034  jal         func_1E80D0
    ctx->pc = 0x1E77E0u;
    SET_GPR_U32(ctx, 31, 0x1E77E8u);
    ctx->pc = 0x1E77E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77E0u;
    // 0x1e77e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E80D0u, 0x1E77E0u, 0x1E77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77E8u;
label_1e77e8:
    // 0x1e77e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E77E8u;
    {
        const bool branch_taken_0x1e77e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77E8u;
        // 0x1e77ec: 0x96440000  lhu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e77e8) {
            ctx->pc = 0x1E7810u;
            goto label_1e7810;
        }
    }
    ctx->pc = 0x1E77F0u;
label_1e77f0:
    // 0x1e77f0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1e77f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e77f4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1e77f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e77f8: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x1e77f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e77fc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e77fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7800: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x1e7800u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e7804: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x1e7804u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e7808: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x1e7808u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e780c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x1e780cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1e7810:
    // 0x1e7810: 0x97a3006a  lhu         $v1, 0x6A($sp)
    ctx->pc = 0x1e7810u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 106)));
    // 0x1e7814: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1e7814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e7818: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1E7818u;
    {
        const bool branch_taken_0x1e7818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7818u;
        // 0x1e781c: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7818) {
            ctx->pc = 0x1E7844u;
            goto label_1e7844;
        }
    }
    ctx->pc = 0x1E7820u;
    // 0x1e7820: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1e7820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e7824: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1e7824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e7828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e7828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e782c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1e782cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e7830: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e7830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7834: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1e7834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e7838: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1e7838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e783c: 0xc07a034  jal         func_1E80D0
    ctx->pc = 0x1E783Cu;
    SET_GPR_U32(ctx, 31, 0x1E7844u);
    ctx->pc = 0x1E7840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E783Cu;
    // 0x1e7840: 0xa7a20068  sh          $v0, 0x68($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E80D0u, 0x1E783Cu, 0x1E7844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7844u;
label_1e7844:
    // 0x1e7844: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e7844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e7848:
    // 0x1e7848: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e7848u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e784c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e784cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7850: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e7850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e785c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E785Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E785Cu;
        // 0x1e7860: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E785Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7864u;
}
