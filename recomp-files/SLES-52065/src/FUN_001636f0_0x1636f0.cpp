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

// Function: FUN_001636f0
// Address: 0x1636f0 - 0x163a08
void FUN_001636f0_0x1636f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001636f0_0x1636f0");
#endif

    switch (ctx->pc) {
        case 0x163750u: goto label_163750;
        case 0x16376cu: goto label_16376c;
        case 0x163848u: goto label_163848;
        case 0x1638b0u: goto label_1638b0;
        default: break;
    }

    ctx->pc = 0x1636f0u;

    // 0x1636f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1636f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1636f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1636f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1636f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1636f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1636fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1636fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x163700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163704: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x163704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16370c: 0xc4a102f0  lwc1        $f1, 0x2F0($a1)
    ctx->pc = 0x16370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163710: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x163710u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163714: 0x0  nop
    ctx->pc = 0x163714u;
    // NOP
    // 0x163718: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x163718u;
    {
        const bool branch_taken_0x163718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163718u;
        // 0x16371c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163718) {
            ctx->pc = 0x163728u;
            goto label_163728;
        }
    }
    ctx->pc = 0x163720u;
    // 0x163720: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x163720u;
    {
        const bool branch_taken_0x163720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163720u;
        // 0x163724: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163720) {
            ctx->pc = 0x1639F0u;
            goto label_1639f0;
        }
    }
    ctx->pc = 0x163728u;
label_163728:
    // 0x163728: 0x862201ea  lh          $v0, 0x1EA($s1)
    ctx->pc = 0x163728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 490)));
    // 0x16372c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16372Cu;
    {
        const bool branch_taken_0x16372c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16372Cu;
        // 0x163730: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16372c) {
            ctx->pc = 0x16373Cu;
            goto label_16373c;
        }
    }
    ctx->pc = 0x163734u;
    // 0x163734: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x163734u;
    {
        const bool branch_taken_0x163734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163734u;
        // 0x163738: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163734) {
            ctx->pc = 0x1639F4u;
            goto label_1639f4;
        }
    }
    ctx->pc = 0x16373Cu;
label_16373c:
    // 0x16373c: 0x862201e8  lh          $v0, 0x1E8($s1)
    ctx->pc = 0x16373cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x163740: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163740u;
    {
        const bool branch_taken_0x163740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163740) {
            ctx->pc = 0x163760u;
            goto label_163760;
        }
    }
    ctx->pc = 0x163748u;
    // 0x163748: 0xc058c90  jal         func_163240
    ctx->pc = 0x163748u;
    SET_GPR_U32(ctx, 31, 0x163750u);
    ctx->pc = 0x163240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163240u, 0x163748u, 0x163750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163750u;
label_163750:
    // 0x163750: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163750u;
    {
        const bool branch_taken_0x163750 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x163754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163750u;
        // 0x163754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163750) {
            ctx->pc = 0x163764u;
            goto label_163764;
        }
    }
    ctx->pc = 0x163758u;
    // 0x163758: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x163758u;
    {
        const bool branch_taken_0x163758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163758u;
        // 0x16375c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163758) {
            ctx->pc = 0x1639F0u;
            goto label_1639f0;
        }
    }
    ctx->pc = 0x163760u;
label_163760:
    // 0x163760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163764:
    // 0x163764: 0xc058e84  jal         func_163A10
    ctx->pc = 0x163764u;
    SET_GPR_U32(ctx, 31, 0x16376Cu);
    ctx->pc = 0x163768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163764u;
    // 0x163768: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163A10u, 0x163764u, 0x16376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16376Cu;
label_16376c:
    // 0x16376c: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x16376cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x163770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163774: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x163774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x163778: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x163778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16377c: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x16377cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x163780: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x163780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x163784: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x163784u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x163788: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x163788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16378c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16378Cu;
    {
        const bool branch_taken_0x16378c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16378Cu;
        // 0x163790: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16378c) {
            ctx->pc = 0x1637A8u;
            goto label_1637a8;
        }
    }
    ctx->pc = 0x163794u;
    // 0x163794: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x163794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x163798: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x163798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x16379c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1637a0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1637a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1637a4: 0x0  nop
    ctx->pc = 0x1637a4u;
    // NOP
label_1637a8:
    // 0x1637a8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1637A8u;
    {
        const bool branch_taken_0x1637a8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1637ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637A8u;
        // 0x1637ac: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637a8) {
            ctx->pc = 0x1637B8u;
            goto label_1637b8;
        }
    }
    ctx->pc = 0x1637B0u;
    // 0x1637b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1637B0u;
    {
        const bool branch_taken_0x1637b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1637B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637B0u;
        // 0x1637b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637b0) {
            ctx->pc = 0x1637D8u;
            goto label_1637d8;
        }
    }
    ctx->pc = 0x1637B8u;
label_1637b8:
    // 0x1637b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1637b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1637bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1637bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1637c0: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1637c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1637c4: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1637C4u;
    {
        const bool branch_taken_0x1637c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1637c4) {
            ctx->pc = 0x1637D4u;
            goto label_1637d4;
        }
    }
    ctx->pc = 0x1637CCu;
    // 0x1637cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1637CCu;
    {
        const bool branch_taken_0x1637cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1637cc) {
            ctx->pc = 0x1637D8u;
            goto label_1637d8;
        }
    }
    ctx->pc = 0x1637D4u;
label_1637d4:
    // 0x1637d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1637d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1637d8:
    // 0x1637d8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1637D8u;
    {
        const bool branch_taken_0x1637d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1637d8) {
            ctx->pc = 0x163804u;
            goto label_163804;
        }
    }
    ctx->pc = 0x1637E0u;
    // 0x1637e0: 0x862203c4  lh          $v0, 0x3C4($s1)
    ctx->pc = 0x1637e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 964)));
    // 0x1637e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1637E4u;
    {
        const bool branch_taken_0x1637e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1637e4) {
            ctx->pc = 0x163804u;
            goto label_163804;
        }
    }
    ctx->pc = 0x1637ECu;
    // 0x1637ec: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x1637ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x1637f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1637f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1637f4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1637F4u;
    {
        const bool branch_taken_0x1637f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1637f4) {
            ctx->pc = 0x163804u;
            goto label_163804;
        }
    }
    ctx->pc = 0x1637FCu;
    // 0x1637fc: 0xa62203c6  sh          $v0, 0x3C6($s1)
    ctx->pc = 0x1637fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 2));
    // 0x163800: 0xae2003c0  sw          $zero, 0x3C0($s1)
    ctx->pc = 0x163800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 960), GPR_U32(ctx, 0));
label_163804:
    // 0x163804: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x163804u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x163808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16380c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x16380Cu;
    {
        const bool branch_taken_0x16380c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16380Cu;
        // 0x163810: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16380c) {
            ctx->pc = 0x163890u;
            goto label_163890;
        }
    }
    ctx->pc = 0x163814u;
    // 0x163814: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x163814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x163818: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x163818u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16381c: 0x4a802103  vaddw.y     $vf4, $vf4, $vf0w
    ctx->pc = 0x16381cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x163820: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x163820u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x163824: 0xc62102a0  lwc1        $f1, 0x2A0($s1)
    ctx->pc = 0x163824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163828: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x163828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x16382c: 0xc62003c0  lwc1        $f0, 0x3C0($s1)
    ctx->pc = 0x16382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163830: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x163830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163834: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x163834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163838: 0xe62003c0  swc1        $f0, 0x3C0($s1)
    ctx->pc = 0x163838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
    // 0x16383c: 0xc62e03c0  lwc1        $f14, 0x3C0($s1)
    ctx->pc = 0x16383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x163840: 0xc05be24  jal         func_16F890
    ctx->pc = 0x163840u;
    SET_GPR_U32(ctx, 31, 0x163848u);
    ctx->pc = 0x163844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163840u;
    // 0x163844: 0xc62d03c8  lwc1        $f13, 0x3C8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F890u, 0x163840u, 0x163848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163848u;
label_163848:
    // 0x163848: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x163848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16384c: 0x0  nop
    ctx->pc = 0x16384cu;
    // NOP
    // 0x163850: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x163850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163854: 0x0  nop
    ctx->pc = 0x163854u;
    // NOP
    // 0x163858: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x163858u;
    {
        const bool branch_taken_0x163858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163858u;
        // 0x16385c: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163858) {
            ctx->pc = 0x16386Cu;
            goto label_16386c;
        }
    }
    ctx->pc = 0x163860u;
    // 0x163860: 0xa62003c6  sh          $zero, 0x3C6($s1)
    ctx->pc = 0x163860u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 0));
    // 0x163864: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x163864u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x163868: 0xe62103c0  swc1        $f1, 0x3C0($s1)
    ctx->pc = 0x163868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
label_16386c:
    // 0x16386c: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x16386cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163870: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x163870u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163874: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x163874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x163878: 0x0  nop
    ctx->pc = 0x163878u;
    // NOP
    // 0x16387c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16387cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x163880: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x163880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163884: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x163884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163888: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x163888u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16388c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x16388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_163890:
    // 0x163890: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163890u;
    {
        const bool branch_taken_0x163890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x163894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163890u;
        // 0x163894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163890) {
            ctx->pc = 0x1638A4u;
            goto label_1638a4;
        }
    }
    ctx->pc = 0x163898u;
    // 0x163898: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16389c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16389Cu;
    {
        const bool branch_taken_0x16389c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16389c) {
            ctx->pc = 0x1638C8u;
            goto label_1638c8;
        }
    }
    ctx->pc = 0x1638A4u;
label_1638a4:
    // 0x1638a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1638a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1638a8: 0xc058d4c  jal         func_163530
    ctx->pc = 0x1638A8u;
    SET_GPR_U32(ctx, 31, 0x1638B0u);
    ctx->pc = 0x1638ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1638A8u;
    // 0x1638ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163530u, 0x1638A8u, 0x1638B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638B0u;
label_1638b0:
    // 0x1638b0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1638B0u;
    {
        const bool branch_taken_0x1638b0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1638B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638B0u;
        // 0x1638b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638b0) {
            ctx->pc = 0x1638C0u;
            goto label_1638c0;
        }
    }
    ctx->pc = 0x1638B8u;
    // 0x1638b8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1638B8u;
    {
        const bool branch_taken_0x1638b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1638BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638B8u;
        // 0x1638bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638b8) {
            ctx->pc = 0x1639F0u;
            goto label_1639f0;
        }
    }
    ctx->pc = 0x1638C0u;
label_1638c0:
    // 0x1638c0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1638C0u;
    {
        const bool branch_taken_0x1638c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1638c0) {
            ctx->pc = 0x1639F0u;
            goto label_1639f0;
        }
    }
    ctx->pc = 0x1638C8u;
label_1638c8:
    // 0x1638c8: 0x8643021a  lh          $v1, 0x21A($s2)
    ctx->pc = 0x1638c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 538)));
    // 0x1638cc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1638ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1638d0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1638D0u;
    {
        const bool branch_taken_0x1638d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1638D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638D0u;
        // 0x1638d4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638d0) {
            ctx->pc = 0x163900u;
            goto label_163900;
        }
    }
    ctx->pc = 0x1638D8u;
    // 0x1638d8: 0xc6210348  lwc1        $f1, 0x348($s1)
    ctx->pc = 0x1638d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1638dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1638dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1638e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1638e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1638e4: 0x0  nop
    ctx->pc = 0x1638e4u;
    // NOP
    // 0x1638e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1638e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1638ec: 0x0  nop
    ctx->pc = 0x1638ecu;
    // NOP
    // 0x1638f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1638F0u;
    {
        const bool branch_taken_0x1638f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1638F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638F0u;
        // 0x1638f4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638f0) {
            ctx->pc = 0x1638FCu;
            goto label_1638fc;
        }
    }
    ctx->pc = 0x1638F8u;
    // 0x1638f8: 0xa62201ea  sh          $v0, 0x1EA($s1)
    ctx->pc = 0x1638f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 490), (uint16_t)GPR_U32(ctx, 2));
label_1638fc:
    // 0x1638fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1638fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_163900:
    // 0x163900: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x163900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x163904: 0xa62301e8  sh          $v1, 0x1E8($s1)
    ctx->pc = 0x163904u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 3));
    // 0x163908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16390c: 0x8e240340  lw          $a0, 0x340($s1)
    ctx->pc = 0x16390cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x163910: 0xc6240344  lwc1        $f4, 0x344($s1)
    ctx->pc = 0x163910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x163914: 0x8e43021c  lw          $v1, 0x21C($s2)
    ctx->pc = 0x163914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 540)));
    // 0x163918: 0xc6420228  lwc1        $f2, 0x228($s2)
    ctx->pc = 0x163918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16391c: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x16391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x163920: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x163920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x163924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x163924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163928: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x163928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16392c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x163930: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x163930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163934: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x163934u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x163938: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x163938u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x16393c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16393cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x163940: 0xe6200348  swc1        $f0, 0x348($s1)
    ctx->pc = 0x163940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 840), bits); }
    // 0x163944: 0xc620034c  lwc1        $f0, 0x34C($s1)
    ctx->pc = 0x163944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163948: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x163948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16394c: 0x0  nop
    ctx->pc = 0x16394cu;
    // NOP
    // 0x163950: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x163950u;
    {
        const bool branch_taken_0x163950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163950) {
            ctx->pc = 0x163978u;
            goto label_163978;
        }
    }
    ctx->pc = 0x163958u;
    // 0x163958: 0xc6200348  lwc1        $f0, 0x348($s1)
    ctx->pc = 0x163958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16395c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16395cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163960: 0x0  nop
    ctx->pc = 0x163960u;
    // NOP
    // 0x163964: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x163964u;
    {
        const bool branch_taken_0x163964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163964) {
            ctx->pc = 0x163978u;
            goto label_163978;
        }
    }
    ctx->pc = 0x16396Cu;
    // 0x16396c: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x16396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
    // 0x163970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163974: 0xae420234  sw          $v0, 0x234($s2)
    ctx->pc = 0x163974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 2));
label_163978:
    // 0x163978: 0xc6200348  lwc1        $f0, 0x348($s1)
    ctx->pc = 0x163978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16397c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x16397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x163980: 0xe620034c  swc1        $f0, 0x34C($s1)
    ctx->pc = 0x163980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 844), bits); }
    // 0x163984: 0x86430218  lh          $v1, 0x218($s2)
    ctx->pc = 0x163984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 536)));
    // 0x163988: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x163988u;
    {
        const bool branch_taken_0x163988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163988u;
        // 0x16398c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163988) {
            ctx->pc = 0x1639F0u;
            goto label_1639f0;
        }
    }
    ctx->pc = 0x163990u;
    // 0x163990: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x163990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x163994: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163998: 0xc6210348  lwc1        $f1, 0x348($s1)
    ctx->pc = 0x163998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16399c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16399cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1639a0: 0xc4620058  lwc1        $f2, 0x58($v1)
    ctx->pc = 0x1639a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1639a4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1639a4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1639a8: 0x0  nop
    ctx->pc = 0x1639a8u;
    // NOP
    // 0x1639ac: 0x0  nop
    ctx->pc = 0x1639acu;
    // NOP
    // 0x1639b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1639b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1639b4: 0x0  nop
    ctx->pc = 0x1639b4u;
    // NOP
    // 0x1639b8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1639B8u;
    {
        const bool branch_taken_0x1639b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1639BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639B8u;
        // 0x1639bc: 0x26220360  addiu       $v0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639b8) {
            ctx->pc = 0x1639ECu;
            goto label_1639ec;
        }
    }
    ctx->pc = 0x1639C0u;
    // 0x1639c0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1639c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1639c4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1639c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1639c8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1639c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1639cc: 0x0  nop
    ctx->pc = 0x1639ccu;
    // NOP
    // 0x1639d0: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x1639d0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1639d4: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x1639d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1639d8: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x1639d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1639dc: 0x4be621bc  vmulax.xyzw $ACC, $vf4, $vf6x
    ctx->pc = 0x1639dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1639e0: 0x4be82a48  vmaddx.xyzw $vf9, $vf5, $vf8x
    ctx->pc = 0x1639e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1639e4: 0xfa290000  sqc2        $vf9, 0x0($s1)
    ctx->pc = 0x1639e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1639e8: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1639e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1639ec:
    // 0x1639ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1639ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1639f0:
    // 0x1639f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1639f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1639f4:
    // 0x1639f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1639f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1639f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1639f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1639fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1639fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163a00: 0x3e00008  jr          $ra
    ctx->pc = 0x163A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A00u;
        // 0x163a04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163A08u;
}
