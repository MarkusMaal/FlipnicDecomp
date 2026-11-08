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

// Function: FUN_0017f3a0
// Address: 0x17f3a0 - 0x17f554
void FUN_0017f3a0_0x17f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f3a0_0x17f3a0");
#endif

    switch (ctx->pc) {
        case 0x17f3e8u: goto label_17f3e8;
        case 0x17f3fcu: goto label_17f3fc;
        case 0x17f408u: goto label_17f408;
        case 0x17f410u: goto label_17f410;
        case 0x17f418u: goto label_17f418;
        case 0x17f438u: goto label_17f438;
        case 0x17f44cu: goto label_17f44c;
        case 0x17f458u: goto label_17f458;
        case 0x17f460u: goto label_17f460;
        case 0x17f468u: goto label_17f468;
        case 0x17f474u: goto label_17f474;
        case 0x17f4a0u: goto label_17f4a0;
        case 0x17f4b4u: goto label_17f4b4;
        case 0x17f4c0u: goto label_17f4c0;
        case 0x17f4c8u: goto label_17f4c8;
        case 0x17f4d0u: goto label_17f4d0;
        case 0x17f4f0u: goto label_17f4f0;
        case 0x17f504u: goto label_17f504;
        case 0x17f510u: goto label_17f510;
        case 0x17f518u: goto label_17f518;
        case 0x17f520u: goto label_17f520;
        case 0x17f52cu: goto label_17f52c;
        case 0x17f538u: goto label_17f538;
        default: break;
    }

    ctx->pc = 0x17f3a0u;

label_17f3a0:
    // 0x17f3a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17f3a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17f3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17f3a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17f3ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17f3b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f3b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f3b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f3b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3bc: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x17f3bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17f3c0: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x17F3C0u;
    {
        const bool branch_taken_0x17f3c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3C0u;
        // 0x17f3c4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3c0) {
            ctx->pc = 0x17F474u;
            goto label_17f474;
        }
    }
    ctx->pc = 0x17F3C8u;
    // 0x17f3c8: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x17f3c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17f3cc: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F3CCu;
    {
        const bool branch_taken_0x17f3cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f3cc) {
            ctx->pc = 0x17F418u;
            goto label_17f418;
        }
    }
    ctx->pc = 0x17F3D4u;
    // 0x17f3d4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x17f3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f3d8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F3D8u;
    {
        const bool branch_taken_0x17f3d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f3d8) {
            ctx->pc = 0x17F3E8u;
            goto label_17f3e8;
        }
    }
    ctx->pc = 0x17F3E0u;
    // 0x17f3e0: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F3E0u;
    SET_GPR_U32(ctx, 31, 0x17F3E8u);
    ctx->pc = 0x17F3A0u;
    goto label_17f3a0;
    ctx->pc = 0x17F3E8u;
label_17f3e8:
    // 0x17f3e8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x17f3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17f3ec: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F3ECu;
    {
        const bool branch_taken_0x17f3ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3ECu;
        // 0x17f3f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3ec) {
            ctx->pc = 0x17F400u;
            goto label_17f400;
        }
    }
    ctx->pc = 0x17F3F4u;
    // 0x17f3f4: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F3F4u;
    SET_GPR_U32(ctx, 31, 0x17F3FCu);
    ctx->pc = 0x17F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F3F4u;
    // 0x17f3f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3A0u;
    goto label_17f3a0;
    ctx->pc = 0x17F3FCu;
label_17f3fc:
    // 0x17f3fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17f400:
    // 0x17f400: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F400u;
    SET_GPR_U32(ctx, 31, 0x17F408u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F400u, 0x17F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F408u;
label_17f408:
    // 0x17f408: 0xc05fd58  jal         func_17F560
    ctx->pc = 0x17F408u;
    SET_GPR_U32(ctx, 31, 0x17F410u);
    ctx->pc = 0x17F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F408u;
    // 0x17f40c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F560u, 0x17F408u, 0x17F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F410u;
label_17f410:
    // 0x17f410: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F410u;
    SET_GPR_U32(ctx, 31, 0x17F418u);
    ctx->pc = 0x17F414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F410u;
    // 0x17f414: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F410u, 0x17F418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F418u;
label_17f418:
    // 0x17f418: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17f41c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x17F41Cu;
    {
        const bool branch_taken_0x17f41c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F41Cu;
        // 0x17f420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f41c) {
            ctx->pc = 0x17F46Cu;
            goto label_17f46c;
        }
    }
    ctx->pc = 0x17F424u;
    // 0x17f424: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x17f424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f428: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F428u;
    {
        const bool branch_taken_0x17f428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F428u;
        // 0x17f42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f428) {
            ctx->pc = 0x17F438u;
            goto label_17f438;
        }
    }
    ctx->pc = 0x17F430u;
    // 0x17f430: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F430u;
    SET_GPR_U32(ctx, 31, 0x17F438u);
    ctx->pc = 0x17F3A0u;
    goto label_17f3a0;
    ctx->pc = 0x17F438u;
label_17f438:
    // 0x17f438: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x17f438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17f43c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F43Cu;
    {
        const bool branch_taken_0x17f43c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F43Cu;
        // 0x17f440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f43c) {
            ctx->pc = 0x17F450u;
            goto label_17f450;
        }
    }
    ctx->pc = 0x17F444u;
    // 0x17f444: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F444u;
    SET_GPR_U32(ctx, 31, 0x17F44Cu);
    ctx->pc = 0x17F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F444u;
    // 0x17f448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3A0u;
    goto label_17f3a0;
    ctx->pc = 0x17F44Cu;
label_17f44c:
    // 0x17f44c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17f450:
    // 0x17f450: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F450u;
    SET_GPR_U32(ctx, 31, 0x17F458u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F450u, 0x17F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F458u;
label_17f458:
    // 0x17f458: 0xc05fd58  jal         func_17F560
    ctx->pc = 0x17F458u;
    SET_GPR_U32(ctx, 31, 0x17F460u);
    ctx->pc = 0x17F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F458u;
    // 0x17f45c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F560u, 0x17F458u, 0x17F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F460u;
label_17f460:
    // 0x17f460: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F460u;
    SET_GPR_U32(ctx, 31, 0x17F468u);
    ctx->pc = 0x17F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F460u;
    // 0x17f464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F460u, 0x17F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F468u;
label_17f468:
    // 0x17f468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17f46c:
    // 0x17f46c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F46Cu;
    SET_GPR_U32(ctx, 31, 0x17F474u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F46Cu, 0x17F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F474u;
label_17f474:
    // 0x17f474: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x17f474u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17f478: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x17F478u;
    {
        const bool branch_taken_0x17f478 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F478u;
        // 0x17f47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f478) {
            ctx->pc = 0x17F530u;
            goto label_17f530;
        }
    }
    ctx->pc = 0x17F480u;
    // 0x17f480: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x17f480u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17f484: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F484u;
    {
        const bool branch_taken_0x17f484 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f484) {
            ctx->pc = 0x17F4D0u;
            goto label_17f4d0;
        }
    }
    ctx->pc = 0x17F48Cu;
    // 0x17f48c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x17f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f490: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F490u;
    {
        const bool branch_taken_0x17f490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F490u;
        // 0x17f494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f490) {
            ctx->pc = 0x17F4A0u;
            goto label_17f4a0;
        }
    }
    ctx->pc = 0x17F498u;
    // 0x17f498: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F498u;
    SET_GPR_U32(ctx, 31, 0x17F4A0u);
    ctx->pc = 0x17F3A0u;
    goto label_17f3a0;
    ctx->pc = 0x17F4A0u;
label_17f4a0:
    // 0x17f4a0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x17f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17f4a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F4A4u;
    {
        const bool branch_taken_0x17f4a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4A4u;
        // 0x17f4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4a4) {
            ctx->pc = 0x17F4B8u;
            goto label_17f4b8;
        }
    }
    ctx->pc = 0x17F4ACu;
    // 0x17f4ac: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F4ACu;
    SET_GPR_U32(ctx, 31, 0x17F4B4u);
    ctx->pc = 0x17F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4ACu;
    // 0x17f4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3A0u;
    goto label_17f3a0;
    ctx->pc = 0x17F4B4u;
label_17f4b4:
    // 0x17f4b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17f4b8:
    // 0x17f4b8: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F4B8u;
    SET_GPR_U32(ctx, 31, 0x17F4C0u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F4B8u, 0x17F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4C0u;
label_17f4c0:
    // 0x17f4c0: 0xc05fd58  jal         func_17F560
    ctx->pc = 0x17F4C0u;
    SET_GPR_U32(ctx, 31, 0x17F4C8u);
    ctx->pc = 0x17F4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4C0u;
    // 0x17f4c4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F560u, 0x17F4C0u, 0x17F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4C8u;
label_17f4c8:
    // 0x17f4c8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F4C8u;
    SET_GPR_U32(ctx, 31, 0x17F4D0u);
    ctx->pc = 0x17F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4C8u;
    // 0x17f4cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F4C8u, 0x17F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4D0u;
label_17f4d0:
    // 0x17f4d0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x17f4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17f4d4: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x17F4D4u;
    {
        const bool branch_taken_0x17f4d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4D4u;
        // 0x17f4d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4d4) {
            ctx->pc = 0x17F524u;
            goto label_17f524;
        }
    }
    ctx->pc = 0x17F4DCu;
    // 0x17f4dc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x17f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f4e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F4E0u;
    {
        const bool branch_taken_0x17f4e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4E0u;
        // 0x17f4e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4e0) {
            ctx->pc = 0x17F4F0u;
            goto label_17f4f0;
        }
    }
    ctx->pc = 0x17F4E8u;
    // 0x17f4e8: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F4E8u;
    SET_GPR_U32(ctx, 31, 0x17F4F0u);
    ctx->pc = 0x17F3A0u;
    goto label_17f3a0;
    ctx->pc = 0x17F4F0u;
label_17f4f0:
    // 0x17f4f0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x17f4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17f4f4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F4F4u;
    {
        const bool branch_taken_0x17f4f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4F4u;
        // 0x17f4f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4f4) {
            ctx->pc = 0x17F508u;
            goto label_17f508;
        }
    }
    ctx->pc = 0x17F4FCu;
    // 0x17f4fc: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F4FCu;
    SET_GPR_U32(ctx, 31, 0x17F504u);
    ctx->pc = 0x17F500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4FCu;
    // 0x17f500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3A0u;
    goto label_17f3a0;
    ctx->pc = 0x17F504u;
label_17f504:
    // 0x17f504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17f508:
    // 0x17f508: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F508u;
    SET_GPR_U32(ctx, 31, 0x17F510u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F508u, 0x17F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F510u;
label_17f510:
    // 0x17f510: 0xc05fd58  jal         func_17F560
    ctx->pc = 0x17F510u;
    SET_GPR_U32(ctx, 31, 0x17F518u);
    ctx->pc = 0x17F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F510u;
    // 0x17f514: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F560u, 0x17F510u, 0x17F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F518u;
label_17f518:
    // 0x17f518: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F518u;
    SET_GPR_U32(ctx, 31, 0x17F520u);
    ctx->pc = 0x17F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F518u;
    // 0x17f51c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F518u, 0x17F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F520u;
label_17f520:
    // 0x17f520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17f524:
    // 0x17f524: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F524u;
    SET_GPR_U32(ctx, 31, 0x17F52Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F524u, 0x17F52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F52Cu;
label_17f52c:
    // 0x17f52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17f530:
    // 0x17f530: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F530u;
    SET_GPR_U32(ctx, 31, 0x17F538u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F530u, 0x17F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F538u;
label_17f538:
    // 0x17f538: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17f538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f53c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17f53cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f54c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F54Cu;
        // 0x17f550: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F554u;
}
