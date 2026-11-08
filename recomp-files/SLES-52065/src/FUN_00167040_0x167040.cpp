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

// Function: FUN_00167040
// Address: 0x167040 - 0x1671a0
void FUN_00167040_0x167040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167040_0x167040");
#endif

    switch (ctx->pc) {
        case 0x16708cu: goto label_16708c;
        case 0x1670d4u: goto label_1670d4;
        case 0x1670ecu: goto label_1670ec;
        case 0x167118u: goto label_167118;
        case 0x167154u: goto label_167154;
        case 0x167188u: goto label_167188;
        default: break;
    }

    ctx->pc = 0x167040u;

    // 0x167040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x167048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16704c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16704cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167058: 0xc48d0200  lwc1        $f13, 0x200($a0)
    ctx->pc = 0x167058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16705c: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x16705cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167060: 0x0  nop
    ctx->pc = 0x167060u;
    // NOP
    // 0x167064: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x167064u;
    {
        const bool branch_taken_0x167064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167064u;
        // 0x167068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167064) {
            ctx->pc = 0x167074u;
            goto label_167074;
        }
    }
    ctx->pc = 0x16706Cu;
    // 0x16706c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x16706Cu;
    {
        const bool branch_taken_0x16706c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16706Cu;
        // 0x167070: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16706c) {
            ctx->pc = 0x16718Cu;
            goto label_16718c;
        }
    }
    ctx->pc = 0x167074u;
label_167074:
    // 0x167074: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x167074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x167078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16707c: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x16707cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x167080: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x167080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x167084: 0xc054f9c  jal         func_153E70
    ctx->pc = 0x167084u;
    SET_GPR_U32(ctx, 31, 0x16708Cu);
    ctx->pc = 0x167088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167084u;
    // 0x167088: 0x26070290  addiu       $a3, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E70u, 0x167084u, 0x16708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16708Cu;
label_16708c:
    // 0x16708c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16708cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167090: 0x0  nop
    ctx->pc = 0x167090u;
    // NOP
    // 0x167094: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x167094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167098: 0x0  nop
    ctx->pc = 0x167098u;
    // NOP
    // 0x16709c: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x16709Cu;
    {
        const bool branch_taken_0x16709c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1670A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16709Cu;
        // 0x1670a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16709c) {
            ctx->pc = 0x16718Cu;
            goto label_16718c;
        }
    }
    ctx->pc = 0x1670A4u;
    // 0x1670a4: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x1670a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x1670a8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1670a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1670ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1670acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1670b0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1670b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1670b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1670b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1670b8: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1670b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1670bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1670bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1670c0: 0x0  nop
    ctx->pc = 0x1670c0u;
    // NOP
    // 0x1670c4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1670C4u;
    {
        const bool branch_taken_0x1670c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1670C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670C4u;
        // 0x1670c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670c4) {
            ctx->pc = 0x1670D4u;
            goto label_1670d4;
        }
    }
    ctx->pc = 0x1670CCu;
    // 0x1670cc: 0xc042118  jal         func_108460
    ctx->pc = 0x1670CCu;
    SET_GPR_U32(ctx, 31, 0x1670D4u);
    ctx->pc = 0x1670D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670CCu;
    // 0x1670d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1670CCu, 0x1670D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670D4u;
label_1670d4:
    // 0x1670d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1670d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1670d8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1670d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1670dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1670dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1670e0: 0x8045002b  lb          $a1, 0x2B($v0)
    ctx->pc = 0x1670e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
    // 0x1670e4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1670E4u;
    SET_GPR_U32(ctx, 31, 0x1670ECu);
    ctx->pc = 0x1670E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670E4u;
    // 0x1670e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1670E4u, 0x1670ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670ECu;
label_1670ec:
    // 0x1670ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1670ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1670f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1670f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670f4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1670f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1670f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1670f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670fc: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1670fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x167100: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x167100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167104: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167108: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x167108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16710c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x16710cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x167110: 0xc0425d4  jal         func_109750
    ctx->pc = 0x167110u;
    SET_GPR_U32(ctx, 31, 0x167118u);
    ctx->pc = 0x167114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167110u;
    // 0x167114: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x167110u, 0x167118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167118u;
label_167118:
    // 0x167118: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x167118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x16711c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167120: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x167120u;
    {
        const bool branch_taken_0x167120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167120) {
            ctx->pc = 0x16715Cu;
            goto label_16715c;
        }
    }
    ctx->pc = 0x167128u;
    // 0x167128: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x167128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16712c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x16712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x167130: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x167130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x167134: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x167134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
    // 0x167138: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x167138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x16713c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16713cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167144: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x167144u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167148: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x167148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16714c: 0xc056194  jal         func_158650
    ctx->pc = 0x16714Cu;
    SET_GPR_U32(ctx, 31, 0x167154u);
    ctx->pc = 0x167150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16714Cu;
    // 0x167150: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x16714Cu, 0x167154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167154u;
label_167154:
    // 0x167154: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x167154u;
    {
        const bool branch_taken_0x167154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167154u;
        // 0x167158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167154) {
            ctx->pc = 0x16718Cu;
            goto label_16718c;
        }
    }
    ctx->pc = 0x16715Cu;
label_16715c:
    // 0x16715c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x16715cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167160: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x167160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x167164: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x167164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x167168: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x167168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x16716c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16716cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x167170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167174: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167178: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16717c: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x16717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167180: 0xc056194  jal         func_158650
    ctx->pc = 0x167180u;
    SET_GPR_U32(ctx, 31, 0x167188u);
    ctx->pc = 0x167184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167180u;
    // 0x167184: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x167180u, 0x167188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167188u;
label_167188:
    // 0x167188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16718c:
    // 0x16718c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16718cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167198: 0x3e00008  jr          $ra
    ctx->pc = 0x167198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167198u;
        // 0x16719c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1671A0u;
}
