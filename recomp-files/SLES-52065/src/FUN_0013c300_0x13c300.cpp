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

// Function: FUN_0013c300
// Address: 0x13c300 - 0x13c460
void FUN_0013c300_0x13c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c300_0x13c300");
#endif

    switch (ctx->pc) {
        case 0x13c34cu: goto label_13c34c;
        case 0x13c358u: goto label_13c358;
        case 0x13c374u: goto label_13c374;
        case 0x13c390u: goto label_13c390;
        case 0x13c3acu: goto label_13c3ac;
        case 0x13c3c0u: goto label_13c3c0;
        case 0x13c3dcu: goto label_13c3dc;
        case 0x13c3f8u: goto label_13c3f8;
        case 0x13c414u: goto label_13c414;
        case 0x13c420u: goto label_13c420;
        case 0x13c42cu: goto label_13c42c;
        case 0x13c444u: goto label_13c444;
        default: break;
    }

    ctx->pc = 0x13c300u;

    // 0x13c300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13c304: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13c304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13c308: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13c30c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c310: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13c310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c318: 0x1240004a  beqz        $s2, . + 4 + (0x4A << 2)
    ctx->pc = 0x13C318u;
    {
        const bool branch_taken_0x13c318 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C318u;
        // 0x13c31c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c318) {
            ctx->pc = 0x13C444u;
            goto label_13c444;
        }
    }
    ctx->pc = 0x13C320u;
    // 0x13c320: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x13c320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x13c324: 0x24429090  addiu       $v0, $v0, -0x6F70
    ctx->pc = 0x13c324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938768));
    // 0x13c328: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x13c328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x13c32c: 0x8e50011c  lw          $s0, 0x11C($s2)
    ctx->pc = 0x13c32cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x13c330: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x13C330u;
    {
        const bool branch_taken_0x13c330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C330u;
        // 0x13c334: 0x264401c8  addiu       $a0, $s2, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c330) {
            ctx->pc = 0x13C35Cu;
            goto label_13c35c;
        }
    }
    ctx->pc = 0x13C338u;
    // 0x13c338: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C338u;
    {
        const bool branch_taken_0x13c338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C338u;
        // 0x13c33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c338) {
            ctx->pc = 0x13C350u;
            goto label_13c350;
        }
    }
    ctx->pc = 0x13C340u;
    // 0x13c340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c344: 0xc048414  jal         func_121050
    ctx->pc = 0x13C344u;
    SET_GPR_U32(ctx, 31, 0x13C34Cu);
    ctx->pc = 0x13C348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C344u;
    // 0x13c348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x13C344u, 0x13C34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C34Cu;
label_13c34c:
    // 0x13c34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c350:
    // 0x13c350: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C350u;
    SET_GPR_U32(ctx, 31, 0x13C358u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C350u, 0x13C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C358u;
label_13c358:
    // 0x13c358: 0x264401c8  addiu       $a0, $s2, 0x1C8
    ctx->pc = 0x13c358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 456));
label_13c35c:
    // 0x13c35c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C35Cu;
    {
        const bool branch_taken_0x13c35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c35c) {
            ctx->pc = 0x13C374u;
            goto label_13c374;
        }
    }
    ctx->pc = 0x13C364u;
    // 0x13c364: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C364u;
    {
        const bool branch_taken_0x13c364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C364u;
        // 0x13c368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c364) {
            ctx->pc = 0x13C374u;
            goto label_13c374;
        }
    }
    ctx->pc = 0x13C36Cu;
    // 0x13c36c: 0xc048414  jal         func_121050
    ctx->pc = 0x13C36Cu;
    SET_GPR_U32(ctx, 31, 0x13C374u);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x13C36Cu, 0x13C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C374u;
label_13c374:
    // 0x13c374: 0x264401bc  addiu       $a0, $s2, 0x1BC
    ctx->pc = 0x13c374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
    // 0x13c378: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C378u;
    {
        const bool branch_taken_0x13c378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c378) {
            ctx->pc = 0x13C390u;
            goto label_13c390;
        }
    }
    ctx->pc = 0x13C380u;
    // 0x13c380: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C380u;
    {
        const bool branch_taken_0x13c380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C380u;
        // 0x13c384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c380) {
            ctx->pc = 0x13C390u;
            goto label_13c390;
        }
    }
    ctx->pc = 0x13C388u;
    // 0x13c388: 0xc048414  jal         func_121050
    ctx->pc = 0x13C388u;
    SET_GPR_U32(ctx, 31, 0x13C390u);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x13C388u, 0x13C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C390u;
label_13c390:
    // 0x13c390: 0x2644019c  addiu       $a0, $s2, 0x19C
    ctx->pc = 0x13c390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 412));
    // 0x13c394: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x13C394u;
    {
        const bool branch_taken_0x13c394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c394) {
            ctx->pc = 0x13C3C0u;
            goto label_13c3c0;
        }
    }
    ctx->pc = 0x13C39Cu;
    // 0x13c39c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C39Cu;
    {
        const bool branch_taken_0x13c39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c39c) {
            ctx->pc = 0x13C3C0u;
            goto label_13c3c0;
        }
    }
    ctx->pc = 0x13C3A4u;
    // 0x13c3a4: 0xc04fc50  jal         func_13F140
    ctx->pc = 0x13C3A4u;
    SET_GPR_U32(ctx, 31, 0x13C3ACu);
    ctx->pc = 0x13F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F140u, 0x13C3A4u, 0x13C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3ACu;
label_13c3ac:
    // 0x13c3ac: 0x264401a0  addiu       $a0, $s2, 0x1A0
    ctx->pc = 0x13c3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x13c3b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C3B0u;
    {
        const bool branch_taken_0x13c3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3B0u;
        // 0x13c3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3b0) {
            ctx->pc = 0x13C3C0u;
            goto label_13c3c0;
        }
    }
    ctx->pc = 0x13C3B8u;
    // 0x13c3b8: 0xc04f118  jal         func_13C460
    ctx->pc = 0x13C3B8u;
    SET_GPR_U32(ctx, 31, 0x13C3C0u);
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x13C3B8u, 0x13C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3C0u;
label_13c3c0:
    // 0x13c3c0: 0x26440190  addiu       $a0, $s2, 0x190
    ctx->pc = 0x13c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
    // 0x13c3c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C3C4u;
    {
        const bool branch_taken_0x13c3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c3c4) {
            ctx->pc = 0x13C3DCu;
            goto label_13c3dc;
        }
    }
    ctx->pc = 0x13C3CCu;
    // 0x13c3cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C3CCu;
    {
        const bool branch_taken_0x13c3cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3CCu;
        // 0x13c3d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3cc) {
            ctx->pc = 0x13C3DCu;
            goto label_13c3dc;
        }
    }
    ctx->pc = 0x13C3D4u;
    // 0x13c3d4: 0xc048414  jal         func_121050
    ctx->pc = 0x13C3D4u;
    SET_GPR_U32(ctx, 31, 0x13C3DCu);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x13C3D4u, 0x13C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3DCu;
label_13c3dc:
    // 0x13c3dc: 0x26440110  addiu       $a0, $s2, 0x110
    ctx->pc = 0x13c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x13c3e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C3E0u;
    {
        const bool branch_taken_0x13c3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c3e0) {
            ctx->pc = 0x13C3F8u;
            goto label_13c3f8;
        }
    }
    ctx->pc = 0x13C3E8u;
    // 0x13c3e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C3E8u;
    {
        const bool branch_taken_0x13c3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3E8u;
        // 0x13c3ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3e8) {
            ctx->pc = 0x13C3F8u;
            goto label_13c3f8;
        }
    }
    ctx->pc = 0x13C3F0u;
    // 0x13c3f0: 0xc048414  jal         func_121050
    ctx->pc = 0x13C3F0u;
    SET_GPR_U32(ctx, 31, 0x13C3F8u);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x13C3F0u, 0x13C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3F8u;
label_13c3f8:
    // 0x13c3f8: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x13c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x13c3fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C3FCu;
    {
        const bool branch_taken_0x13c3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c3fc) {
            ctx->pc = 0x13C414u;
            goto label_13c414;
        }
    }
    ctx->pc = 0x13C404u;
    // 0x13c404: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C404u;
    {
        const bool branch_taken_0x13c404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C404u;
        // 0x13c408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c404) {
            ctx->pc = 0x13C414u;
            goto label_13c414;
        }
    }
    ctx->pc = 0x13C40Cu;
    // 0x13c40c: 0xc048414  jal         func_121050
    ctx->pc = 0x13C40Cu;
    SET_GPR_U32(ctx, 31, 0x13C414u);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x13C40Cu, 0x13C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C414u;
label_13c414:
    // 0x13c414: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x13c414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x13c418: 0xc0505fc  jal         func_1417F0
    ctx->pc = 0x13C418u;
    SET_GPR_U32(ctx, 31, 0x13C420u);
    ctx->pc = 0x13C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C418u;
    // 0x13c41c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1417F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1417F0u, 0x13C418u, 0x13C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C420u;
label_13c420:
    // 0x13c420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13c420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c424: 0xc04d108  jal         func_134420
    ctx->pc = 0x13C424u;
    SET_GPR_U32(ctx, 31, 0x13C42Cu);
    ctx->pc = 0x13C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C424u;
    // 0x13c428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134420u, 0x13C424u, 0x13C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C42Cu;
label_13c42c:
    // 0x13c42c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13c42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13c430: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c430u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c434: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C434u;
    {
        const bool branch_taken_0x13c434 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C434u;
        // 0x13c438: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c434) {
            ctx->pc = 0x13C448u;
            goto label_13c448;
        }
    }
    ctx->pc = 0x13C43Cu;
    // 0x13c43c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C43Cu;
    SET_GPR_U32(ctx, 31, 0x13C444u);
    ctx->pc = 0x13C440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C43Cu;
    // 0x13c440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C43Cu, 0x13C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C444u;
label_13c444:
    // 0x13c444: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13c444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13c448:
    // 0x13c448: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13c448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c44c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c44cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c458: 0x3e00008  jr          $ra
    ctx->pc = 0x13C458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C458u;
        // 0x13c45c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C460u;
}
