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

// Function: FUN_001bb270
// Address: 0x1bb270 - 0x1bb424
void FUN_001bb270_0x1bb270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bb270_0x1bb270");
#endif

    switch (ctx->pc) {
        case 0x1bb2b8u: goto label_1bb2b8;
        case 0x1bb2ccu: goto label_1bb2cc;
        case 0x1bb2d8u: goto label_1bb2d8;
        case 0x1bb2e0u: goto label_1bb2e0;
        case 0x1bb2e8u: goto label_1bb2e8;
        case 0x1bb308u: goto label_1bb308;
        case 0x1bb31cu: goto label_1bb31c;
        case 0x1bb328u: goto label_1bb328;
        case 0x1bb330u: goto label_1bb330;
        case 0x1bb338u: goto label_1bb338;
        case 0x1bb344u: goto label_1bb344;
        case 0x1bb370u: goto label_1bb370;
        case 0x1bb384u: goto label_1bb384;
        case 0x1bb390u: goto label_1bb390;
        case 0x1bb398u: goto label_1bb398;
        case 0x1bb3a0u: goto label_1bb3a0;
        case 0x1bb3c0u: goto label_1bb3c0;
        case 0x1bb3d4u: goto label_1bb3d4;
        case 0x1bb3e0u: goto label_1bb3e0;
        case 0x1bb3e8u: goto label_1bb3e8;
        case 0x1bb3f0u: goto label_1bb3f0;
        case 0x1bb3fcu: goto label_1bb3fc;
        case 0x1bb408u: goto label_1bb408;
        default: break;
    }

    ctx->pc = 0x1bb270u;

label_1bb270:
    // 0x1bb270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bb270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bb274: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bb274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bb278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bb27c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bb280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb284: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb288: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bb288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb28c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1bb28cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bb290: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BB290u;
    {
        const bool branch_taken_0x1bb290 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB290u;
        // 0x1bb294: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb290) {
            ctx->pc = 0x1BB344u;
            goto label_1bb344;
        }
    }
    ctx->pc = 0x1BB298u;
    // 0x1bb298: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1bb298u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb29c: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BB29Cu;
    {
        const bool branch_taken_0x1bb29c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb29c) {
            ctx->pc = 0x1BB2E8u;
            goto label_1bb2e8;
        }
    }
    ctx->pc = 0x1BB2A4u;
    // 0x1bb2a4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb2a8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB2A8u;
    {
        const bool branch_taken_0x1bb2a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2a8) {
            ctx->pc = 0x1BB2B8u;
            goto label_1bb2b8;
        }
    }
    ctx->pc = 0x1BB2B0u;
    // 0x1bb2b0: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1BB2B0u;
    SET_GPR_U32(ctx, 31, 0x1BB2B8u);
    ctx->pc = 0x1BB270u;
    goto label_1bb270;
    ctx->pc = 0x1BB2B8u;
label_1bb2b8:
    // 0x1bb2b8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bb2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb2bc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB2BCu;
    {
        const bool branch_taken_0x1bb2bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2BCu;
        // 0x1bb2c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2bc) {
            ctx->pc = 0x1BB2D0u;
            goto label_1bb2d0;
        }
    }
    ctx->pc = 0x1BB2C4u;
    // 0x1bb2c4: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1BB2C4u;
    SET_GPR_U32(ctx, 31, 0x1BB2CCu);
    ctx->pc = 0x1BB2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2C4u;
    // 0x1bb2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB270u;
    goto label_1bb270;
    ctx->pc = 0x1BB2CCu;
label_1bb2cc:
    // 0x1bb2cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb2d0:
    // 0x1bb2d0: 0xc06ed10  jal         func_1BB440
    ctx->pc = 0x1BB2D0u;
    SET_GPR_U32(ctx, 31, 0x1BB2D8u);
    ctx->pc = 0x1BB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB440u, 0x1BB2D0u, 0x1BB2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2D8u;
label_1bb2d8:
    // 0x1bb2d8: 0xc06ed0c  jal         func_1BB430
    ctx->pc = 0x1BB2D8u;
    SET_GPR_U32(ctx, 31, 0x1BB2E0u);
    ctx->pc = 0x1BB2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2D8u;
    // 0x1bb2dc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB430u, 0x1BB2D8u, 0x1BB2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2E0u;
label_1bb2e0:
    // 0x1bb2e0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB2E0u;
    SET_GPR_U32(ctx, 31, 0x1BB2E8u);
    ctx->pc = 0x1BB2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2E0u;
    // 0x1bb2e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB2E0u, 0x1BB2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2E8u;
label_1bb2e8:
    // 0x1bb2e8: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1bb2e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bb2ec: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BB2ECu;
    {
        const bool branch_taken_0x1bb2ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2ECu;
        // 0x1bb2f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2ec) {
            ctx->pc = 0x1BB33Cu;
            goto label_1bb33c;
        }
    }
    ctx->pc = 0x1BB2F4u;
    // 0x1bb2f4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb2f8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB2F8u;
    {
        const bool branch_taken_0x1bb2f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2F8u;
        // 0x1bb2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2f8) {
            ctx->pc = 0x1BB308u;
            goto label_1bb308;
        }
    }
    ctx->pc = 0x1BB300u;
    // 0x1bb300: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1BB300u;
    SET_GPR_U32(ctx, 31, 0x1BB308u);
    ctx->pc = 0x1BB270u;
    goto label_1bb270;
    ctx->pc = 0x1BB308u;
label_1bb308:
    // 0x1bb308: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bb308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb30c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB30Cu;
    {
        const bool branch_taken_0x1bb30c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB30Cu;
        // 0x1bb310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb30c) {
            ctx->pc = 0x1BB320u;
            goto label_1bb320;
        }
    }
    ctx->pc = 0x1BB314u;
    // 0x1bb314: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1BB314u;
    SET_GPR_U32(ctx, 31, 0x1BB31Cu);
    ctx->pc = 0x1BB318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB314u;
    // 0x1bb318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB270u;
    goto label_1bb270;
    ctx->pc = 0x1BB31Cu;
label_1bb31c:
    // 0x1bb31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb320:
    // 0x1bb320: 0xc06ed10  jal         func_1BB440
    ctx->pc = 0x1BB320u;
    SET_GPR_U32(ctx, 31, 0x1BB328u);
    ctx->pc = 0x1BB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB440u, 0x1BB320u, 0x1BB328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB328u;
label_1bb328:
    // 0x1bb328: 0xc06ed0c  jal         func_1BB430
    ctx->pc = 0x1BB328u;
    SET_GPR_U32(ctx, 31, 0x1BB330u);
    ctx->pc = 0x1BB32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB328u;
    // 0x1bb32c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB430u, 0x1BB328u, 0x1BB330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB330u;
label_1bb330:
    // 0x1bb330: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB330u;
    SET_GPR_U32(ctx, 31, 0x1BB338u);
    ctx->pc = 0x1BB334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB330u;
    // 0x1bb334: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB330u, 0x1BB338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB338u;
label_1bb338:
    // 0x1bb338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bb33c:
    // 0x1bb33c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB33Cu;
    SET_GPR_U32(ctx, 31, 0x1BB344u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB33Cu, 0x1BB344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB344u;
label_1bb344:
    // 0x1bb344: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x1bb344u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bb348: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BB348u;
    {
        const bool branch_taken_0x1bb348 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB348u;
        // 0x1bb34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb348) {
            ctx->pc = 0x1BB400u;
            goto label_1bb400;
        }
    }
    ctx->pc = 0x1BB350u;
    // 0x1bb350: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1bb350u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb354: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BB354u;
    {
        const bool branch_taken_0x1bb354 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb354) {
            ctx->pc = 0x1BB3A0u;
            goto label_1bb3a0;
        }
    }
    ctx->pc = 0x1BB35Cu;
    // 0x1bb35c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb360: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB360u;
    {
        const bool branch_taken_0x1bb360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB360u;
        // 0x1bb364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb360) {
            ctx->pc = 0x1BB370u;
            goto label_1bb370;
        }
    }
    ctx->pc = 0x1BB368u;
    // 0x1bb368: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1BB368u;
    SET_GPR_U32(ctx, 31, 0x1BB370u);
    ctx->pc = 0x1BB270u;
    goto label_1bb270;
    ctx->pc = 0x1BB370u;
label_1bb370:
    // 0x1bb370: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bb370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb374: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB374u;
    {
        const bool branch_taken_0x1bb374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB374u;
        // 0x1bb378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb374) {
            ctx->pc = 0x1BB388u;
            goto label_1bb388;
        }
    }
    ctx->pc = 0x1BB37Cu;
    // 0x1bb37c: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1BB37Cu;
    SET_GPR_U32(ctx, 31, 0x1BB384u);
    ctx->pc = 0x1BB380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB37Cu;
    // 0x1bb380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB270u;
    goto label_1bb270;
    ctx->pc = 0x1BB384u;
label_1bb384:
    // 0x1bb384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb388:
    // 0x1bb388: 0xc06ed10  jal         func_1BB440
    ctx->pc = 0x1BB388u;
    SET_GPR_U32(ctx, 31, 0x1BB390u);
    ctx->pc = 0x1BB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB440u, 0x1BB388u, 0x1BB390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB390u;
label_1bb390:
    // 0x1bb390: 0xc06ed0c  jal         func_1BB430
    ctx->pc = 0x1BB390u;
    SET_GPR_U32(ctx, 31, 0x1BB398u);
    ctx->pc = 0x1BB394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB390u;
    // 0x1bb394: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB430u, 0x1BB390u, 0x1BB398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB398u;
label_1bb398:
    // 0x1bb398: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB398u;
    SET_GPR_U32(ctx, 31, 0x1BB3A0u);
    ctx->pc = 0x1BB39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB398u;
    // 0x1bb39c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB398u, 0x1BB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3A0u;
label_1bb3a0:
    // 0x1bb3a0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1bb3a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bb3a4: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BB3A4u;
    {
        const bool branch_taken_0x1bb3a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3A4u;
        // 0x1bb3a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3a4) {
            ctx->pc = 0x1BB3F4u;
            goto label_1bb3f4;
        }
    }
    ctx->pc = 0x1BB3ACu;
    // 0x1bb3ac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb3b0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB3B0u;
    {
        const bool branch_taken_0x1bb3b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3B0u;
        // 0x1bb3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3b0) {
            ctx->pc = 0x1BB3C0u;
            goto label_1bb3c0;
        }
    }
    ctx->pc = 0x1BB3B8u;
    // 0x1bb3b8: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1BB3B8u;
    SET_GPR_U32(ctx, 31, 0x1BB3C0u);
    ctx->pc = 0x1BB270u;
    goto label_1bb270;
    ctx->pc = 0x1BB3C0u;
label_1bb3c0:
    // 0x1bb3c0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bb3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb3c4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB3C4u;
    {
        const bool branch_taken_0x1bb3c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3C4u;
        // 0x1bb3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3c4) {
            ctx->pc = 0x1BB3D8u;
            goto label_1bb3d8;
        }
    }
    ctx->pc = 0x1BB3CCu;
    // 0x1bb3cc: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1BB3CCu;
    SET_GPR_U32(ctx, 31, 0x1BB3D4u);
    ctx->pc = 0x1BB3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3CCu;
    // 0x1bb3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB270u;
    goto label_1bb270;
    ctx->pc = 0x1BB3D4u;
label_1bb3d4:
    // 0x1bb3d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb3d8:
    // 0x1bb3d8: 0xc06ed10  jal         func_1BB440
    ctx->pc = 0x1BB3D8u;
    SET_GPR_U32(ctx, 31, 0x1BB3E0u);
    ctx->pc = 0x1BB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB440u, 0x1BB3D8u, 0x1BB3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3E0u;
label_1bb3e0:
    // 0x1bb3e0: 0xc06ed0c  jal         func_1BB430
    ctx->pc = 0x1BB3E0u;
    SET_GPR_U32(ctx, 31, 0x1BB3E8u);
    ctx->pc = 0x1BB3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3E0u;
    // 0x1bb3e4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB430u, 0x1BB3E0u, 0x1BB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3E8u;
label_1bb3e8:
    // 0x1bb3e8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB3E8u;
    SET_GPR_U32(ctx, 31, 0x1BB3F0u);
    ctx->pc = 0x1BB3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3E8u;
    // 0x1bb3ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB3E8u, 0x1BB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3F0u;
label_1bb3f0:
    // 0x1bb3f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bb3f4:
    // 0x1bb3f4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB3F4u;
    SET_GPR_U32(ctx, 31, 0x1BB3FCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB3F4u, 0x1BB3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3FCu;
label_1bb3fc:
    // 0x1bb3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb400:
    // 0x1bb400: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB400u;
    SET_GPR_U32(ctx, 31, 0x1BB408u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB400u, 0x1BB408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB408u;
label_1bb408:
    // 0x1bb408: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bb408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb40c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb40cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb41c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB41Cu;
        // 0x1bb420: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB424u;
}
