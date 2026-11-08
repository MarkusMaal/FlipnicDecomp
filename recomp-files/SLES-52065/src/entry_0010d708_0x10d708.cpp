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

// Function: entry_0010d708
// Address: 0x10d708 - 0x10d7d0
void entry_0010d708_0x10d708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d708_0x10d708");
#endif

    switch (ctx->pc) {
        case 0x10d708u: goto label_10d708;
        case 0x10d70cu: goto label_10d70c;
        case 0x10d710u: goto label_10d710;
        case 0x10d714u: goto label_10d714;
        case 0x10d718u: goto label_10d718;
        case 0x10d71cu: goto label_10d71c;
        case 0x10d720u: goto label_10d720;
        case 0x10d724u: goto label_10d724;
        case 0x10d728u: goto label_10d728;
        case 0x10d72cu: goto label_10d72c;
        case 0x10d730u: goto label_10d730;
        case 0x10d734u: goto label_10d734;
        case 0x10d738u: goto label_10d738;
        case 0x10d73cu: goto label_10d73c;
        case 0x10d740u: goto label_10d740;
        case 0x10d744u: goto label_10d744;
        case 0x10d748u: goto label_10d748;
        case 0x10d74cu: goto label_10d74c;
        case 0x10d750u: goto label_10d750;
        case 0x10d754u: goto label_10d754;
        case 0x10d758u: goto label_10d758;
        case 0x10d75cu: goto label_10d75c;
        case 0x10d760u: goto label_10d760;
        case 0x10d764u: goto label_10d764;
        case 0x10d768u: goto label_10d768;
        case 0x10d76cu: goto label_10d76c;
        case 0x10d770u: goto label_10d770;
        case 0x10d774u: goto label_10d774;
        case 0x10d778u: goto label_10d778;
        case 0x10d77cu: goto label_10d77c;
        case 0x10d780u: goto label_10d780;
        case 0x10d784u: goto label_10d784;
        case 0x10d788u: goto label_10d788;
        case 0x10d78cu: goto label_10d78c;
        case 0x10d790u: goto label_10d790;
        case 0x10d794u: goto label_10d794;
        case 0x10d798u: goto label_10d798;
        case 0x10d79cu: goto label_10d79c;
        case 0x10d7a0u: goto label_10d7a0;
        case 0x10d7a4u: goto label_10d7a4;
        case 0x10d7a8u: goto label_10d7a8;
        case 0x10d7acu: goto label_10d7ac;
        case 0x10d7b0u: goto label_10d7b0;
        case 0x10d7b4u: goto label_10d7b4;
        case 0x10d7b8u: goto label_10d7b8;
        case 0x10d7bcu: goto label_10d7bc;
        case 0x10d7c0u: goto label_10d7c0;
        case 0x10d7c4u: goto label_10d7c4;
        case 0x10d7c8u: goto label_10d7c8;
        case 0x10d7ccu: goto label_10d7cc;
        default: break;
    }

    ctx->pc = 0x10d708u;

label_10d708:
    // 0x10d708: 0xc0802aa  jal         func_200AA8
label_10d70c:
    if (ctx->pc == 0x10D70Cu) {
        ctx->pc = 0x10D710u;
        goto label_10d710;
    }
    ctx->pc = 0x10D708u;
    SET_GPR_U32(ctx, 31, 0x10D710u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10D708u, 0x10D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D710u;
label_10d710:
    // 0x10d710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d714:
    // 0x10d714: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x10d714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_10d718:
    // 0x10d718: 0x26250230  addiu       $a1, $s1, 0x230
    ctx->pc = 0x10d718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
label_10d71c:
    // 0x10d71c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x10d71cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_10d720:
    // 0x10d720: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10d720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10d724:
    // 0x10d724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d728:
    // 0x10d728: 0xc6202310  lwc1        $f0, 0x2310($s1)
    ctx->pc = 0x10d728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d72c:
    // 0x10d72c: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x10d72cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_10d730:
    // 0x10d730: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x10d730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
label_10d734:
    // 0x10d734: 0x3443147b  ori         $v1, $v0, 0x147B
    ctx->pc = 0x10d734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_10d738:
    // 0x10d738: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x10d738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_10d73c:
    // 0x10d73c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x10d73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_10d740:
    // 0x10d740: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x10d740u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d744:
    // 0x10d744: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x10d744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10d748:
    // 0x10d748: 0x0  nop
    ctx->pc = 0x10d748u;
    // NOP
label_10d74c:
    // 0x10d74c: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x10d74cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
label_10d750:
    // 0x10d750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d754:
    // 0x10d754: 0x0  nop
    ctx->pc = 0x10d754u;
    // NOP
label_10d758:
    // 0x10d758: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x10d758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_10d75c:
    // 0x10d75c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x10d75cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_10d760:
    // 0x10d760: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x10d760u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10d764:
    // 0x10d764: 0x7a260230  lq          $a2, 0x230($s1)
    ctx->pc = 0x10d764u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 560)));
label_10d768:
    // 0x10d768: 0x7e260230  sq          $a2, 0x230($s1)
    ctx->pc = 0x10d768u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), GPR_VEC(ctx, 6));
label_10d76c:
    // 0x10d76c: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x10d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_10d770:
    // 0x10d770: 0x7a260060  lq          $a2, 0x60($s1)
    ctx->pc = 0x10d770u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 96)));
label_10d774:
    // 0x10d774: 0x7e260220  sq          $a2, 0x220($s1)
    ctx->pc = 0x10d774u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 544), GPR_VEC(ctx, 6));
label_10d778:
    // 0x10d778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d77c:
    // 0x10d77c: 0xc6210234  lwc1        $f1, 0x234($s1)
    ctx->pc = 0x10d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d780:
    // 0x10d780: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10d780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_10d784:
    // 0x10d784: 0xc0433dc  jal         func_10CF70
label_10d788:
    if (ctx->pc == 0x10D788u) {
        ctx->pc = 0x10D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D784u;
        // 0x10d788: 0xe6200234  swc1        $f0, 0x234($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D78Cu;
        goto label_10d78c;
    }
    ctx->pc = 0x10D784u;
    SET_GPR_U32(ctx, 31, 0x10D78Cu);
    ctx->pc = 0x10D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D784u;
    // 0x10d788: 0xe6200234  swc1        $f0, 0x234($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x10D784u, 0x10D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D78Cu;
label_10d78c:
    // 0x10d78c: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x10d78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
label_10d790:
    // 0x10d790: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x10d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d794:
    // 0x10d794: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x10d794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d798:
    // 0x10d798: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x10d798u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_10d79c:
    // 0x10d79c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10d79cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10d7a0:
    // 0x10d7a0: 0xe6200248  swc1        $f0, 0x248($s1)
    ctx->pc = 0x10d7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
label_10d7a4:
    // 0x10d7a4: 0xae200244  sw          $zero, 0x244($s1)
    ctx->pc = 0x10d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 0));
label_10d7a8:
    // 0x10d7a8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x10d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10d7ac:
    // 0x10d7ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10d7acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10d7b0:
    // 0x10d7b0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x10d7b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_10d7b4:
    // 0x10d7b4: 0x320f809  jalr        $t9
label_10d7b8:
    if (ctx->pc == 0x10D7B8u) {
        ctx->pc = 0x10D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7B4u;
        // 0x10d7b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D7BCu;
        goto label_10d7bc;
    }
    ctx->pc = 0x10D7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10D7BCu);
        ctx->pc = 0x10D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7B4u;
        // 0x10d7b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D7B4u, 0x10D7BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10D7BCu;
label_10d7bc:
    // 0x10d7bc: 0xa220007a  sb          $zero, 0x7A($s1)
    ctx->pc = 0x10d7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 0));
label_10d7c0:
    // 0x10d7c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d7c4:
    // 0x10d7c4: 0xa2230078  sb          $v1, 0x78($s1)
    ctx->pc = 0x10d7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 3));
label_10d7c8:
    // 0x10d7c8: 0xa623024e  sh          $v1, 0x24E($s1)
    ctx->pc = 0x10d7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
label_10d7cc:
    // 0x10d7cc: 0xa623024e  sh          $v1, 0x24E($s1)
    ctx->pc = 0x10d7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10d7d0u;
}
