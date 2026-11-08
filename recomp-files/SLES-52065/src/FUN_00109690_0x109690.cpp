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

// Function: FUN_00109690
// Address: 0x109690 - 0x109750
void FUN_00109690_0x109690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00109690_0x109690");
#endif

    switch (ctx->pc) {
        case 0x109690u: goto label_109690;
        case 0x109694u: goto label_109694;
        case 0x109698u: goto label_109698;
        case 0x10969cu: goto label_10969c;
        case 0x1096a0u: goto label_1096a0;
        case 0x1096a4u: goto label_1096a4;
        case 0x1096a8u: goto label_1096a8;
        case 0x1096acu: goto label_1096ac;
        case 0x1096b0u: goto label_1096b0;
        case 0x1096b4u: goto label_1096b4;
        case 0x1096b8u: goto label_1096b8;
        case 0x1096bcu: goto label_1096bc;
        case 0x1096c0u: goto label_1096c0;
        case 0x1096c4u: goto label_1096c4;
        case 0x1096c8u: goto label_1096c8;
        case 0x1096ccu: goto label_1096cc;
        case 0x1096d0u: goto label_1096d0;
        case 0x1096d4u: goto label_1096d4;
        case 0x1096d8u: goto label_1096d8;
        case 0x1096dcu: goto label_1096dc;
        case 0x1096e0u: goto label_1096e0;
        case 0x1096e4u: goto label_1096e4;
        case 0x1096e8u: goto label_1096e8;
        case 0x1096ecu: goto label_1096ec;
        case 0x1096f0u: goto label_1096f0;
        case 0x1096f4u: goto label_1096f4;
        case 0x1096f8u: goto label_1096f8;
        case 0x1096fcu: goto label_1096fc;
        case 0x109700u: goto label_109700;
        case 0x109704u: goto label_109704;
        case 0x109708u: goto label_109708;
        case 0x10970cu: goto label_10970c;
        case 0x109710u: goto label_109710;
        case 0x109714u: goto label_109714;
        case 0x109718u: goto label_109718;
        case 0x10971cu: goto label_10971c;
        case 0x109720u: goto label_109720;
        case 0x109724u: goto label_109724;
        case 0x109728u: goto label_109728;
        case 0x10972cu: goto label_10972c;
        case 0x109730u: goto label_109730;
        case 0x109734u: goto label_109734;
        case 0x109738u: goto label_109738;
        case 0x10973cu: goto label_10973c;
        case 0x109740u: goto label_109740;
        case 0x109744u: goto label_109744;
        case 0x109748u: goto label_109748;
        case 0x10974cu: goto label_10974c;
        default: break;
    }

    ctx->pc = 0x109690u;

label_109690:
    // 0x109690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_109694:
    // 0x109694: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x109694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_109698:
    // 0x109698: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x109698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_10969c:
    // 0x10969c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10969cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1096a0:
    // 0x1096a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1096a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1096a4:
    // 0x1096a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1096a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1096a8:
    // 0x1096a8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_1096ac:
    if (ctx->pc == 0x1096ACu) {
        ctx->pc = 0x1096ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096A8u;
        // 0x1096ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096B0u;
        goto label_1096b0;
    }
    ctx->pc = 0x1096A8u;
    {
        const bool branch_taken_0x1096a8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1096ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096A8u;
        // 0x1096ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096a8) {
            ctx->pc = 0x1096B8u;
            goto label_1096b8;
        }
    }
    ctx->pc = 0x1096B0u;
label_1096b0:
    // 0x1096b0: 0x10000021  b           . + 4 + (0x21 << 2)
label_1096b4:
    if (ctx->pc == 0x1096B4u) {
        ctx->pc = 0x1096B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096B0u;
        // 0x1096b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096B8u;
        goto label_1096b8;
    }
    ctx->pc = 0x1096B0u;
    {
        const bool branch_taken_0x1096b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096B0u;
        // 0x1096b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096b0) {
            ctx->pc = 0x109738u;
            goto label_109738;
        }
    }
    ctx->pc = 0x1096B8u;
label_1096b8:
    // 0x1096b8: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x1096b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1096bc:
    // 0x1096bc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1096c0:
    if (ctx->pc == 0x1096C0u) {
        ctx->pc = 0x1096C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096BCu;
        // 0x1096c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096C4u;
        goto label_1096c4;
    }
    ctx->pc = 0x1096BCu;
    {
        const bool branch_taken_0x1096bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1096C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096BCu;
        // 0x1096c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096bc) {
            ctx->pc = 0x1096CCu;
            goto label_1096cc;
        }
    }
    ctx->pc = 0x1096C4u;
label_1096c4:
    // 0x1096c4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1096c8:
    if (ctx->pc == 0x1096C8u) {
        ctx->pc = 0x1096C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096C4u;
        // 0x1096c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096CCu;
        goto label_1096cc;
    }
    ctx->pc = 0x1096C4u;
    {
        const bool branch_taken_0x1096c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096C4u;
        // 0x1096c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096c4) {
            ctx->pc = 0x10973Cu;
            goto label_10973c;
        }
    }
    ctx->pc = 0x1096CCu;
label_1096cc:
    // 0x1096cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1096ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1096d0:
    // 0x1096d0: 0x8f390110  lw          $t9, 0x110($t9)
    ctx->pc = 0x1096d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 272)));
label_1096d4:
    // 0x1096d4: 0x320f809  jalr        $t9
label_1096d8:
    if (ctx->pc == 0x1096D8u) {
        ctx->pc = 0x1096D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096D4u;
        // 0x1096d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096DCu;
        goto label_1096dc;
    }
    ctx->pc = 0x1096D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1096DCu);
        ctx->pc = 0x1096D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096D4u;
        // 0x1096d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1096D4u, 0x1096DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1096DCu;
label_1096dc:
    // 0x1096dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1096dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1096e0:
    // 0x1096e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1096e4:
    if (ctx->pc == 0x1096E4u) {
        ctx->pc = 0x1096E8u;
        goto label_1096e8;
    }
    ctx->pc = 0x1096E0u;
    {
        const bool branch_taken_0x1096e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1096e0) {
            ctx->pc = 0x1096F0u;
            goto label_1096f0;
        }
    }
    ctx->pc = 0x1096E8u;
label_1096e8:
    // 0x1096e8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1096ec:
    if (ctx->pc == 0x1096ECu) {
        ctx->pc = 0x1096ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096E8u;
        // 0x1096ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096F0u;
        goto label_1096f0;
    }
    ctx->pc = 0x1096E8u;
    {
        const bool branch_taken_0x1096e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096E8u;
        // 0x1096ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096e8) {
            ctx->pc = 0x109738u;
            goto label_109738;
        }
    }
    ctx->pc = 0x1096F0u;
label_1096f0:
    // 0x1096f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1096f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1096f4:
    // 0x1096f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1096f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1096f8:
    // 0x1096f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1096f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1096fc:
    // 0x1096fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1096fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_109700:
    // 0x109700: 0x320f809  jalr        $t9
label_109704:
    if (ctx->pc == 0x109704u) {
        ctx->pc = 0x109704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109700u;
        // 0x109704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109708u;
        goto label_109708;
    }
    ctx->pc = 0x109700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109708u);
        ctx->pc = 0x109704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109700u;
        // 0x109704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109700u, 0x109708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109708u;
label_109708:
    // 0x109708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x109708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10970c:
    // 0x10970c: 0x0  nop
    ctx->pc = 0x10970cu;
    // NOP
label_109710:
    // 0x109710: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x109710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_109714:
    // 0x109714: 0x0  nop
    ctx->pc = 0x109714u;
    // NOP
label_109718:
    // 0x109718: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_10971c:
    if (ctx->pc == 0x10971Cu) {
        ctx->pc = 0x10971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109718u;
        // 0x10971c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109720u;
        goto label_109720;
    }
    ctx->pc = 0x109718u;
    {
        const bool branch_taken_0x109718 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109718u;
        // 0x10971c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109718) {
            ctx->pc = 0x109738u;
            goto label_109738;
        }
    }
    ctx->pc = 0x109720u;
label_109720:
    // 0x109720: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x109720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_109724:
    // 0x109724: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x109724u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_109728:
    // 0x109728: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x109728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_10972c:
    // 0x10972c: 0x320f809  jalr        $t9
label_109730:
    if (ctx->pc == 0x109730u) {
        ctx->pc = 0x109730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10972Cu;
        // 0x109730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109734u;
        goto label_109734;
    }
    ctx->pc = 0x10972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109734u);
        ctx->pc = 0x109730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10972Cu;
        // 0x109730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10972Cu, 0x109734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109734u;
label_109734:
    // 0x109734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x109734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109738:
    // 0x109738: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x109738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10973c:
    // 0x10973c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x10973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_109740:
    // 0x109740: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x109740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_109744:
    // 0x109744: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x109744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_109748:
    // 0x109748: 0x3e00008  jr          $ra
label_10974c:
    if (ctx->pc == 0x10974Cu) {
        ctx->pc = 0x10974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109748u;
        // 0x10974c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109750u;
        goto label_fallthrough_0x109748;
    }
    ctx->pc = 0x109748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109748u;
        // 0x10974c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x109748:
    ctx->pc = 0x109750u;
}
