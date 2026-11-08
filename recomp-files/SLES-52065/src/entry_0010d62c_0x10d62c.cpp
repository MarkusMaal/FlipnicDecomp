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

// Function: entry_0010d62c
// Address: 0x10d62c - 0x10d708
void entry_0010d62c_0x10d62c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d62c_0x10d62c");
#endif

    switch (ctx->pc) {
        case 0x10d62cu: goto label_10d62c;
        case 0x10d630u: goto label_10d630;
        case 0x10d634u: goto label_10d634;
        case 0x10d638u: goto label_10d638;
        case 0x10d63cu: goto label_10d63c;
        case 0x10d640u: goto label_10d640;
        case 0x10d644u: goto label_10d644;
        case 0x10d648u: goto label_10d648;
        case 0x10d64cu: goto label_10d64c;
        case 0x10d650u: goto label_10d650;
        case 0x10d654u: goto label_10d654;
        case 0x10d658u: goto label_10d658;
        case 0x10d65cu: goto label_10d65c;
        case 0x10d660u: goto label_10d660;
        case 0x10d664u: goto label_10d664;
        case 0x10d668u: goto label_10d668;
        case 0x10d66cu: goto label_10d66c;
        case 0x10d670u: goto label_10d670;
        case 0x10d674u: goto label_10d674;
        case 0x10d678u: goto label_10d678;
        case 0x10d67cu: goto label_10d67c;
        case 0x10d680u: goto label_10d680;
        case 0x10d684u: goto label_10d684;
        case 0x10d688u: goto label_10d688;
        case 0x10d68cu: goto label_10d68c;
        case 0x10d690u: goto label_10d690;
        case 0x10d694u: goto label_10d694;
        case 0x10d698u: goto label_10d698;
        case 0x10d69cu: goto label_10d69c;
        case 0x10d6a0u: goto label_10d6a0;
        case 0x10d6a4u: goto label_10d6a4;
        case 0x10d6a8u: goto label_10d6a8;
        case 0x10d6acu: goto label_10d6ac;
        case 0x10d6b0u: goto label_10d6b0;
        case 0x10d6b4u: goto label_10d6b4;
        case 0x10d6b8u: goto label_10d6b8;
        case 0x10d6bcu: goto label_10d6bc;
        case 0x10d6c0u: goto label_10d6c0;
        case 0x10d6c4u: goto label_10d6c4;
        case 0x10d6c8u: goto label_10d6c8;
        case 0x10d6ccu: goto label_10d6cc;
        case 0x10d6d0u: goto label_10d6d0;
        case 0x10d6d4u: goto label_10d6d4;
        case 0x10d6d8u: goto label_10d6d8;
        case 0x10d6dcu: goto label_10d6dc;
        case 0x10d6e0u: goto label_10d6e0;
        case 0x10d6e4u: goto label_10d6e4;
        case 0x10d6e8u: goto label_10d6e8;
        case 0x10d6ecu: goto label_10d6ec;
        case 0x10d6f0u: goto label_10d6f0;
        case 0x10d6f4u: goto label_10d6f4;
        case 0x10d6f8u: goto label_10d6f8;
        case 0x10d6fcu: goto label_10d6fc;
        case 0x10d700u: goto label_10d700;
        case 0x10d704u: goto label_10d704;
        default: break;
    }

    ctx->pc = 0x10d62cu;

label_10d62c:
    // 0x10d62c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d630:
    // 0x10d630: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_10d634:
    if (ctx->pc == 0x10D634u) {
        ctx->pc = 0x10D638u;
        goto label_10d638;
    }
    ctx->pc = 0x10D630u;
    {
        const bool branch_taken_0x10d630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d630) {
            ctx->pc = 0x10D708u;
            return;
        }
    }
    ctx->pc = 0x10D638u;
label_10d638:
    // 0x10d638: 0xc0802aa  jal         func_200AA8
label_10d63c:
    if (ctx->pc == 0x10D63Cu) {
        ctx->pc = 0x10D640u;
        goto label_10d640;
    }
    ctx->pc = 0x10D638u;
    SET_GPR_U32(ctx, 31, 0x10D640u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10D638u, 0x10D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D640u;
label_10d640:
    // 0x10d640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d644:
    // 0x10d644: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x10d644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_10d648:
    // 0x10d648: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x10d648u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d64c:
    // 0x10d64c: 0x26250230  addiu       $a1, $s1, 0x230
    ctx->pc = 0x10d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
label_10d650:
    // 0x10d650: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x10d650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_10d654:
    // 0x10d654: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x10d654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_10d658:
    // 0x10d658: 0x3446cccd  ori         $a2, $v0, 0xCCCD
    ctx->pc = 0x10d658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_10d65c:
    // 0x10d65c: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x10d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
label_10d660:
    // 0x10d660: 0x3443147b  ori         $v1, $v0, 0x147B
    ctx->pc = 0x10d660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_10d664:
    // 0x10d664: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x10d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_10d668:
    // 0x10d668: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x10d668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_10d66c:
    // 0x10d66c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x10d66cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10d670:
    // 0x10d670: 0xc6202310  lwc1        $f0, 0x2310($s1)
    ctx->pc = 0x10d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d674:
    // 0x10d674: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x10d674u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_10d678:
    // 0x10d678: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x10d678u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_10d67c:
    // 0x10d67c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d680:
    // 0x10d680: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x10d680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10d684:
    // 0x10d684: 0x0  nop
    ctx->pc = 0x10d684u;
    // NOP
label_10d688:
    // 0x10d688: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x10d688u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_10d68c:
    // 0x10d68c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x10d68cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_10d690:
    // 0x10d690: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x10d690u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10d694:
    // 0x10d694: 0x7a260230  lq          $a2, 0x230($s1)
    ctx->pc = 0x10d694u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 560)));
label_10d698:
    // 0x10d698: 0x7e260230  sq          $a2, 0x230($s1)
    ctx->pc = 0x10d698u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), GPR_VEC(ctx, 6));
label_10d69c:
    // 0x10d69c: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x10d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_10d6a0:
    // 0x10d6a0: 0x7a260060  lq          $a2, 0x60($s1)
    ctx->pc = 0x10d6a0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 96)));
label_10d6a4:
    // 0x10d6a4: 0x7e260220  sq          $a2, 0x220($s1)
    ctx->pc = 0x10d6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 544), GPR_VEC(ctx, 6));
label_10d6a8:
    // 0x10d6a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d6a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d6ac:
    // 0x10d6ac: 0xc6210234  lwc1        $f1, 0x234($s1)
    ctx->pc = 0x10d6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d6b0:
    // 0x10d6b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10d6b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_10d6b4:
    // 0x10d6b4: 0xc0433dc  jal         func_10CF70
label_10d6b8:
    if (ctx->pc == 0x10D6B8u) {
        ctx->pc = 0x10D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6B4u;
        // 0x10d6b8: 0xe6200234  swc1        $f0, 0x234($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D6BCu;
        goto label_10d6bc;
    }
    ctx->pc = 0x10D6B4u;
    SET_GPR_U32(ctx, 31, 0x10D6BCu);
    ctx->pc = 0x10D6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6B4u;
    // 0x10d6b8: 0xe6200234  swc1        $f0, 0x234($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x10D6B4u, 0x10D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D6BCu;
label_10d6bc:
    // 0x10d6bc: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x10d6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
label_10d6c0:
    // 0x10d6c0: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x10d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d6c4:
    // 0x10d6c4: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x10d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d6c8:
    // 0x10d6c8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x10d6c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_10d6cc:
    // 0x10d6cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10d6ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10d6d0:
    // 0x10d6d0: 0xe6200248  swc1        $f0, 0x248($s1)
    ctx->pc = 0x10d6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
label_10d6d4:
    // 0x10d6d4: 0xae200244  sw          $zero, 0x244($s1)
    ctx->pc = 0x10d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 0));
label_10d6d8:
    // 0x10d6d8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x10d6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10d6dc:
    // 0x10d6dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10d6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10d6e0:
    // 0x10d6e0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x10d6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_10d6e4:
    // 0x10d6e4: 0x320f809  jalr        $t9
label_10d6e8:
    if (ctx->pc == 0x10D6E8u) {
        ctx->pc = 0x10D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6E4u;
        // 0x10d6e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D6ECu;
        goto label_10d6ec;
    }
    ctx->pc = 0x10D6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10D6ECu);
        ctx->pc = 0x10D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6E4u;
        // 0x10d6e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D6E4u, 0x10D6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10D6ECu;
label_10d6ec:
    // 0x10d6ec: 0xa220007a  sb          $zero, 0x7A($s1)
    ctx->pc = 0x10d6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 0));
label_10d6f0:
    // 0x10d6f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d6f4:
    // 0x10d6f4: 0xa2240078  sb          $a0, 0x78($s1)
    ctx->pc = 0x10d6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 4));
label_10d6f8:
    // 0x10d6f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10d6fc:
    // 0x10d6fc: 0xa624024e  sh          $a0, 0x24E($s1)
    ctx->pc = 0x10d6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 4));
label_10d700:
    // 0x10d700: 0x10000033  b           . + 4 + (0x33 << 2)
label_10d704:
    if (ctx->pc == 0x10D704u) {
        ctx->pc = 0x10D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D700u;
        // 0x10d704: 0xa623024e  sh          $v1, 0x24E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D708u;
        goto label_fallthrough_0x10d700;
    }
    ctx->pc = 0x10D700u;
    {
        const bool branch_taken_0x10d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D700u;
        // 0x10d704: 0xa623024e  sh          $v1, 0x24E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d700) {
            ctx->pc = 0x10D7D0u;
            return;
        }
    }
label_fallthrough_0x10d700:
    ctx->pc = 0x10D708u;
}
