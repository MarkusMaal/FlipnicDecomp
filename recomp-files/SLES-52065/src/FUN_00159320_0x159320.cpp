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

// Function: FUN_00159320
// Address: 0x159320 - 0x1593e4
void FUN_00159320_0x159320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159320_0x159320");
#endif

    switch (ctx->pc) {
        case 0x159320u: goto label_159320;
        case 0x159324u: goto label_159324;
        case 0x159328u: goto label_159328;
        case 0x15932cu: goto label_15932c;
        case 0x159330u: goto label_159330;
        case 0x159334u: goto label_159334;
        case 0x159338u: goto label_159338;
        case 0x15933cu: goto label_15933c;
        case 0x159340u: goto label_159340;
        case 0x159344u: goto label_159344;
        case 0x159348u: goto label_159348;
        case 0x15934cu: goto label_15934c;
        case 0x159350u: goto label_159350;
        case 0x159354u: goto label_159354;
        case 0x159358u: goto label_159358;
        case 0x15935cu: goto label_15935c;
        case 0x159360u: goto label_159360;
        case 0x159364u: goto label_159364;
        case 0x159368u: goto label_159368;
        case 0x15936cu: goto label_15936c;
        case 0x159370u: goto label_159370;
        case 0x159374u: goto label_159374;
        case 0x159378u: goto label_159378;
        case 0x15937cu: goto label_15937c;
        case 0x159380u: goto label_159380;
        case 0x159384u: goto label_159384;
        case 0x159388u: goto label_159388;
        case 0x15938cu: goto label_15938c;
        case 0x159390u: goto label_159390;
        case 0x159394u: goto label_159394;
        case 0x159398u: goto label_159398;
        case 0x15939cu: goto label_15939c;
        case 0x1593a0u: goto label_1593a0;
        case 0x1593a4u: goto label_1593a4;
        case 0x1593a8u: goto label_1593a8;
        case 0x1593acu: goto label_1593ac;
        case 0x1593b0u: goto label_1593b0;
        case 0x1593b4u: goto label_1593b4;
        case 0x1593b8u: goto label_1593b8;
        case 0x1593bcu: goto label_1593bc;
        case 0x1593c0u: goto label_1593c0;
        case 0x1593c4u: goto label_1593c4;
        case 0x1593c8u: goto label_1593c8;
        case 0x1593ccu: goto label_1593cc;
        case 0x1593d0u: goto label_1593d0;
        case 0x1593d4u: goto label_1593d4;
        case 0x1593d8u: goto label_1593d8;
        case 0x1593dcu: goto label_1593dc;
        case 0x1593e0u: goto label_1593e0;
        default: break;
    }

    ctx->pc = 0x159320u;

label_159320:
    // 0x159320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_159324:
    // 0x159324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x159324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_159328:
    // 0x159328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15932c:
    // 0x15932c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15932cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_159330:
    // 0x159330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x159330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159334:
    // 0x159334: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x159334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_159338:
    // 0x159338: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x159338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_15933c:
    // 0x15933c: 0x320f809  jalr        $t9
label_159340:
    if (ctx->pc == 0x159340u) {
        ctx->pc = 0x159340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15933Cu;
        // 0x159340: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159344u;
        goto label_159344;
    }
    ctx->pc = 0x15933Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x159344u);
        ctx->pc = 0x159340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15933Cu;
        // 0x159340: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15933Cu, 0x159344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159344u;
label_159344:
    // 0x159344: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x159344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_159348:
    // 0x159348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15934c:
    // 0x15934c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x15934cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_159350:
    // 0x159350: 0x320f809  jalr        $t9
label_159354:
    if (ctx->pc == 0x159354u) {
        ctx->pc = 0x159354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159350u;
        // 0x159354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159358u;
        goto label_159358;
    }
    ctx->pc = 0x159350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x159358u);
        ctx->pc = 0x159354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159350u;
        // 0x159354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159350u, 0x159358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159358u;
label_159358:
    // 0x159358: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x159358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_15935c:
    // 0x15935c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_159360:
    // 0x159360: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x159360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_159364:
    // 0x159364: 0x320f809  jalr        $t9
label_159368:
    if (ctx->pc == 0x159368u) {
        ctx->pc = 0x159368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159364u;
        // 0x159368: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15936Cu;
        goto label_15936c;
    }
    ctx->pc = 0x159364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15936Cu);
        ctx->pc = 0x159368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159364u;
        // 0x159368: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159364u, 0x15936Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15936Cu;
label_15936c:
    // 0x15936c: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x15936cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_159370:
    // 0x159370: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x159370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_159374:
    // 0x159374: 0x320f809  jalr        $t9
label_159378:
    if (ctx->pc == 0x159378u) {
        ctx->pc = 0x159378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159374u;
        // 0x159378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15937Cu;
        goto label_15937c;
    }
    ctx->pc = 0x159374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15937Cu);
        ctx->pc = 0x159378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159374u;
        // 0x159378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159374u, 0x15937Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15937Cu;
label_15937c:
    // 0x15937c: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x15937cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_159380:
    // 0x159380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_159384:
    // 0x159384: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x159384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_159388:
    // 0x159388: 0x320f809  jalr        $t9
label_15938c:
    if (ctx->pc == 0x15938Cu) {
        ctx->pc = 0x15938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159388u;
        // 0x15938c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159390u;
        goto label_159390;
    }
    ctx->pc = 0x159388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x159390u);
        ctx->pc = 0x15938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159388u;
        // 0x15938c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159388u, 0x159390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159390u;
label_159390:
    // 0x159390: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x159390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_159394:
    // 0x159394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_159398:
    // 0x159398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15939c:
    // 0x15939c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x15939cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1593a0:
    // 0x1593a0: 0x320f809  jalr        $t9
label_1593a4:
    if (ctx->pc == 0x1593A4u) {
        ctx->pc = 0x1593A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593A0u;
        // 0x1593a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1593A8u;
        goto label_1593a8;
    }
    ctx->pc = 0x1593A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1593A8u);
        ctx->pc = 0x1593A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593A0u;
        // 0x1593a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1593A0u, 0x1593A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1593A8u;
label_1593a8:
    // 0x1593a8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1593a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1593ac:
    // 0x1593ac: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x1593acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1593b0:
    // 0x1593b0: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x1593b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1593b4:
    // 0x1593b4: 0xc056270  jal         func_1589C0
label_1593b8:
    if (ctx->pc == 0x1593B8u) {
        ctx->pc = 0x1593B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593B4u;
        // 0x1593b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1593BCu;
        goto label_1593bc;
    }
    ctx->pc = 0x1593B4u;
    SET_GPR_U32(ctx, 31, 0x1593BCu);
    ctx->pc = 0x1593B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1593B4u;
    // 0x1593b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1589C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1589C0u, 0x1593B4u, 0x1593BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593BCu;
label_1593bc:
    // 0x1593bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1593bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1593c0:
    // 0x1593c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1593c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1593c4:
    // 0x1593c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1593c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1593c8:
    // 0x1593c8: 0xc056294  jal         func_158A50
label_1593cc:
    if (ctx->pc == 0x1593CCu) {
        ctx->pc = 0x1593CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593C8u;
        // 0x1593cc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1593D0u;
        goto label_1593d0;
    }
    ctx->pc = 0x1593C8u;
    SET_GPR_U32(ctx, 31, 0x1593D0u);
    ctx->pc = 0x1593CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1593C8u;
    // 0x1593cc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158A50u, 0x1593C8u, 0x1593D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593D0u;
label_1593d0:
    // 0x1593d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1593d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1593d4:
    // 0x1593d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1593d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1593d8:
    // 0x1593d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1593d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1593dc:
    // 0x1593dc: 0x3e00008  jr          $ra
label_1593e0:
    if (ctx->pc == 0x1593E0u) {
        ctx->pc = 0x1593E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593DCu;
        // 0x1593e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1593E4u;
        goto label_fallthrough_0x1593dc;
    }
    ctx->pc = 0x1593DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1593E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593DCu;
        // 0x1593e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1593DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1593dc:
    ctx->pc = 0x1593E4u;
}
