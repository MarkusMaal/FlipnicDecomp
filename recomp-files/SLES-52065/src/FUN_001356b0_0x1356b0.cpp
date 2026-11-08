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

// Function: FUN_001356b0
// Address: 0x1356b0 - 0x13575c
void FUN_001356b0_0x1356b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001356b0_0x1356b0");
#endif

    switch (ctx->pc) {
        case 0x1356b0u: goto label_1356b0;
        case 0x1356b4u: goto label_1356b4;
        case 0x1356b8u: goto label_1356b8;
        case 0x1356bcu: goto label_1356bc;
        case 0x1356c0u: goto label_1356c0;
        case 0x1356c4u: goto label_1356c4;
        case 0x1356c8u: goto label_1356c8;
        case 0x1356ccu: goto label_1356cc;
        case 0x1356d0u: goto label_1356d0;
        case 0x1356d4u: goto label_1356d4;
        case 0x1356d8u: goto label_1356d8;
        case 0x1356dcu: goto label_1356dc;
        case 0x1356e0u: goto label_1356e0;
        case 0x1356e4u: goto label_1356e4;
        case 0x1356e8u: goto label_1356e8;
        case 0x1356ecu: goto label_1356ec;
        case 0x1356f0u: goto label_1356f0;
        case 0x1356f4u: goto label_1356f4;
        case 0x1356f8u: goto label_1356f8;
        case 0x1356fcu: goto label_1356fc;
        case 0x135700u: goto label_135700;
        case 0x135704u: goto label_135704;
        case 0x135708u: goto label_135708;
        case 0x13570cu: goto label_13570c;
        case 0x135710u: goto label_135710;
        case 0x135714u: goto label_135714;
        case 0x135718u: goto label_135718;
        case 0x13571cu: goto label_13571c;
        case 0x135720u: goto label_135720;
        case 0x135724u: goto label_135724;
        case 0x135728u: goto label_135728;
        case 0x13572cu: goto label_13572c;
        case 0x135730u: goto label_135730;
        case 0x135734u: goto label_135734;
        case 0x135738u: goto label_135738;
        case 0x13573cu: goto label_13573c;
        case 0x135740u: goto label_135740;
        case 0x135744u: goto label_135744;
        case 0x135748u: goto label_135748;
        case 0x13574cu: goto label_13574c;
        case 0x135750u: goto label_135750;
        case 0x135754u: goto label_135754;
        case 0x135758u: goto label_135758;
        default: break;
    }

    ctx->pc = 0x1356b0u;

label_1356b0:
    // 0x1356b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1356b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1356b4:
    // 0x1356b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1356b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1356b8:
    // 0x1356b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1356b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1356bc:
    // 0x1356bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1356bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1356c0:
    // 0x1356c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1356c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1356c4:
    // 0x1356c4: 0x8ca40080  lw          $a0, 0x80($a1)
    ctx->pc = 0x1356c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_1356c8:
    // 0x1356c8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1356cc:
    if (ctx->pc == 0x1356CCu) {
        ctx->pc = 0x1356CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356C8u;
        // 0x1356cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1356D0u;
        goto label_1356d0;
    }
    ctx->pc = 0x1356C8u;
    {
        const bool branch_taken_0x1356c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1356CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356C8u;
        // 0x1356cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1356c8) {
            ctx->pc = 0x1356E8u;
            goto label_1356e8;
        }
    }
    ctx->pc = 0x1356D0u;
label_1356d0:
    // 0x1356d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1356d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1356d4:
    // 0x1356d4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1356d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_1356d8:
    // 0x1356d8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1356d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_1356dc:
    // 0x1356dc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1356dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1356e0:
    // 0x1356e0: 0x10000010  b           . + 4 + (0x10 << 2)
label_1356e4:
    if (ctx->pc == 0x1356E4u) {
        ctx->pc = 0x1356E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356E0u;
        // 0x1356e4: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1356E8u;
        goto label_1356e8;
    }
    ctx->pc = 0x1356E0u;
    {
        const bool branch_taken_0x1356e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1356E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356E0u;
        // 0x1356e4: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1356e0) {
            ctx->pc = 0x135724u;
            goto label_135724;
        }
    }
    ctx->pc = 0x1356E8u;
label_1356e8:
    // 0x1356e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1356e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1356ec:
    // 0x1356ec: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1356ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1356f0:
    // 0x1356f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1356f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1356f4:
    // 0x1356f4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1356f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1356f8:
    // 0x1356f8: 0x320f809  jalr        $t9
label_1356fc:
    if (ctx->pc == 0x1356FCu) {
        ctx->pc = 0x135700u;
        goto label_135700;
    }
    ctx->pc = 0x1356F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135700u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1356F8u, 0x135700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135700u;
label_135700:
    // 0x135700: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x135700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_135704:
    // 0x135704: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x135704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_135708:
    // 0x135708: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13570c:
    // 0x13570c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13570cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_135710:
    // 0x135710: 0x320f809  jalr        $t9
label_135714:
    if (ctx->pc == 0x135714u) {
        ctx->pc = 0x135718u;
        goto label_135718;
    }
    ctx->pc = 0x135710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135718u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135710u, 0x135718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135718u;
label_135718:
    // 0x135718: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x135718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_13571c:
    // 0x13571c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x13571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_135720:
    // 0x135720: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x135720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_135724:
    // 0x135724: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x135724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_135728:
    // 0x135728: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x135728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13572c:
    // 0x13572c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x13572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_135730:
    // 0x135730: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x135730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_135734:
    // 0x135734: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x135734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135738:
    // 0x135738: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x135738u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_13573c:
    // 0x13573c: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x13573cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_135740:
    // 0x135740: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x135740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_135744:
    // 0x135744: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x135744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_135748:
    // 0x135748: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13574c:
    // 0x13574c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13574cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_135750:
    // 0x135750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_135754:
    // 0x135754: 0x3e00008  jr          $ra
label_135758:
    if (ctx->pc == 0x135758u) {
        ctx->pc = 0x135758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135754u;
        // 0x135758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13575Cu;
        goto label_fallthrough_0x135754;
    }
    ctx->pc = 0x135754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135754u;
        // 0x135758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135754:
    ctx->pc = 0x13575Cu;
}
