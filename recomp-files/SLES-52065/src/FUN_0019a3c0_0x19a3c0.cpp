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

// Function: FUN_0019a3c0
// Address: 0x19a3c0 - 0x19a4f8
void FUN_0019a3c0_0x19a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a3c0_0x19a3c0");
#endif

    switch (ctx->pc) {
        case 0x19a3c0u: goto label_19a3c0;
        case 0x19a3c4u: goto label_19a3c4;
        case 0x19a3c8u: goto label_19a3c8;
        case 0x19a3ccu: goto label_19a3cc;
        case 0x19a3d0u: goto label_19a3d0;
        case 0x19a3d4u: goto label_19a3d4;
        case 0x19a3d8u: goto label_19a3d8;
        case 0x19a3dcu: goto label_19a3dc;
        case 0x19a3e0u: goto label_19a3e0;
        case 0x19a3e4u: goto label_19a3e4;
        case 0x19a3e8u: goto label_19a3e8;
        case 0x19a3ecu: goto label_19a3ec;
        case 0x19a3f0u: goto label_19a3f0;
        case 0x19a3f4u: goto label_19a3f4;
        case 0x19a3f8u: goto label_19a3f8;
        case 0x19a3fcu: goto label_19a3fc;
        case 0x19a400u: goto label_19a400;
        case 0x19a404u: goto label_19a404;
        case 0x19a408u: goto label_19a408;
        case 0x19a40cu: goto label_19a40c;
        case 0x19a410u: goto label_19a410;
        case 0x19a414u: goto label_19a414;
        case 0x19a418u: goto label_19a418;
        case 0x19a41cu: goto label_19a41c;
        case 0x19a420u: goto label_19a420;
        case 0x19a424u: goto label_19a424;
        case 0x19a428u: goto label_19a428;
        case 0x19a42cu: goto label_19a42c;
        case 0x19a430u: goto label_19a430;
        case 0x19a434u: goto label_19a434;
        case 0x19a438u: goto label_19a438;
        case 0x19a43cu: goto label_19a43c;
        case 0x19a440u: goto label_19a440;
        case 0x19a444u: goto label_19a444;
        case 0x19a448u: goto label_19a448;
        case 0x19a44cu: goto label_19a44c;
        case 0x19a450u: goto label_19a450;
        case 0x19a454u: goto label_19a454;
        case 0x19a458u: goto label_19a458;
        case 0x19a45cu: goto label_19a45c;
        case 0x19a460u: goto label_19a460;
        case 0x19a464u: goto label_19a464;
        case 0x19a468u: goto label_19a468;
        case 0x19a46cu: goto label_19a46c;
        case 0x19a470u: goto label_19a470;
        case 0x19a474u: goto label_19a474;
        case 0x19a478u: goto label_19a478;
        case 0x19a47cu: goto label_19a47c;
        case 0x19a480u: goto label_19a480;
        case 0x19a484u: goto label_19a484;
        case 0x19a488u: goto label_19a488;
        case 0x19a48cu: goto label_19a48c;
        case 0x19a490u: goto label_19a490;
        case 0x19a494u: goto label_19a494;
        case 0x19a498u: goto label_19a498;
        case 0x19a49cu: goto label_19a49c;
        case 0x19a4a0u: goto label_19a4a0;
        case 0x19a4a4u: goto label_19a4a4;
        case 0x19a4a8u: goto label_19a4a8;
        case 0x19a4acu: goto label_19a4ac;
        case 0x19a4b0u: goto label_19a4b0;
        case 0x19a4b4u: goto label_19a4b4;
        case 0x19a4b8u: goto label_19a4b8;
        case 0x19a4bcu: goto label_19a4bc;
        case 0x19a4c0u: goto label_19a4c0;
        case 0x19a4c4u: goto label_19a4c4;
        case 0x19a4c8u: goto label_19a4c8;
        case 0x19a4ccu: goto label_19a4cc;
        case 0x19a4d0u: goto label_19a4d0;
        case 0x19a4d4u: goto label_19a4d4;
        case 0x19a4d8u: goto label_19a4d8;
        case 0x19a4dcu: goto label_19a4dc;
        case 0x19a4e0u: goto label_19a4e0;
        case 0x19a4e4u: goto label_19a4e4;
        case 0x19a4e8u: goto label_19a4e8;
        case 0x19a4ecu: goto label_19a4ec;
        case 0x19a4f0u: goto label_19a4f0;
        case 0x19a4f4u: goto label_19a4f4;
        default: break;
    }

    ctx->pc = 0x19a3c0u;

label_19a3c0:
    // 0x19a3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19a3c4:
    // 0x19a3c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19a3c8:
    // 0x19a3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19a3cc:
    // 0x19a3cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19a3d0:
    // 0x19a3d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a3d4:
    // 0x19a3d4: 0xc067f08  jal         func_19FC20
label_19a3d8:
    if (ctx->pc == 0x19A3D8u) {
        ctx->pc = 0x19A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3D4u;
        // 0x19a3d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A3DCu;
        goto label_19a3dc;
    }
    ctx->pc = 0x19A3D4u;
    SET_GPR_U32(ctx, 31, 0x19A3DCu);
    ctx->pc = 0x19A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3D4u;
    // 0x19a3d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19A3D4u, 0x19A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3DCu;
label_19a3dc:
    // 0x19a3dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a3e0:
    // 0x19a3e0: 0xc067f0c  jal         func_19FC30
label_19a3e4:
    if (ctx->pc == 0x19A3E4u) {
        ctx->pc = 0x19A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3E0u;
        // 0x19a3e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A3E8u;
        goto label_19a3e8;
    }
    ctx->pc = 0x19A3E0u;
    SET_GPR_U32(ctx, 31, 0x19A3E8u);
    ctx->pc = 0x19A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3E0u;
    // 0x19a3e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x19A3E0u, 0x19A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3E8u;
label_19a3e8:
    // 0x19a3e8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19a3ec:
    // 0x19a3ec: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_19a3f0:
    if (ctx->pc == 0x19A3F0u) {
        ctx->pc = 0x19A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3ECu;
        // 0x19a3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A3F4u;
        goto label_19a3f4;
    }
    ctx->pc = 0x19A3ECu;
    {
        const bool branch_taken_0x19a3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3ECu;
        // 0x19a3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3ec) {
            ctx->pc = 0x19A430u;
            goto label_19a430;
        }
    }
    ctx->pc = 0x19A3F4u;
label_19a3f4:
    // 0x19a3f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19a3f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a3f8:
    // 0x19a3f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_19a3fc:
    if (ctx->pc == 0x19A3FCu) {
        ctx->pc = 0x19A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3F8u;
        // 0x19a3fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A400u;
        goto label_19a400;
    }
    ctx->pc = 0x19A3F8u;
    {
        const bool branch_taken_0x19a3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3F8u;
        // 0x19a3fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3f8) {
            ctx->pc = 0x19A410u;
            goto label_19a410;
        }
    }
    ctx->pc = 0x19A400u;
label_19a400:
    // 0x19a400: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x19a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_19a404:
    // 0x19a404: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19a408:
    // 0x19a408: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x19a408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
label_19a40c:
    // 0x19a40c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x19a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_19a410:
    // 0x19a410: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x19a410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_19a414:
    // 0x19a414: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x19a414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19a418:
    // 0x19a418: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19a41c:
    if (ctx->pc == 0x19A41Cu) {
        ctx->pc = 0x19A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A418u;
        // 0x19a41c: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A420u;
        goto label_19a420;
    }
    ctx->pc = 0x19A418u;
    {
        const bool branch_taken_0x19a418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A418u;
        // 0x19a41c: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a418) {
            ctx->pc = 0x19A404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a404;
        }
    }
    ctx->pc = 0x19A420u;
label_19a420:
    // 0x19a420: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19a420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_19a424:
    // 0x19a424: 0xae200344  sw          $zero, 0x344($s1)
    ctx->pc = 0x19a424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 0));
label_19a428:
    // 0x19a428: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19a428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_19a42c:
    // 0x19a42c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a430:
    // 0x19a430: 0xc063dd4  jal         func_18F750
label_19a434:
    if (ctx->pc == 0x19A434u) {
        ctx->pc = 0x19A438u;
        goto label_19a438;
    }
    ctx->pc = 0x19A430u;
    SET_GPR_U32(ctx, 31, 0x19A438u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19A430u, 0x19A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A438u;
label_19a438:
    // 0x19a438: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19a43c:
    // 0x19a43c: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
label_19a440:
    if (ctx->pc == 0x19A440u) {
        ctx->pc = 0x19A444u;
        goto label_19a444;
    }
    ctx->pc = 0x19A43Cu;
    {
        const bool branch_taken_0x19a43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a43c) {
            ctx->pc = 0x19A4A8u;
            goto label_19a4a8;
        }
    }
    ctx->pc = 0x19A444u;
label_19a444:
    // 0x19a444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a448:
    // 0x19a448: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_19a44c:
    if (ctx->pc == 0x19A44Cu) {
        ctx->pc = 0x19A450u;
        goto label_19a450;
    }
    ctx->pc = 0x19A448u;
    {
        const bool branch_taken_0x19a448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a448) {
            ctx->pc = 0x19A47Cu;
            goto label_19a47c;
        }
    }
    ctx->pc = 0x19A450u;
label_19a450:
    // 0x19a450: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19a454:
    if (ctx->pc == 0x19A454u) {
        ctx->pc = 0x19A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A450u;
        // 0x19a454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A458u;
        goto label_19a458;
    }
    ctx->pc = 0x19A450u;
    {
        const bool branch_taken_0x19a450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A450u;
        // 0x19a454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a450) {
            ctx->pc = 0x19A464u;
            goto label_19a464;
        }
    }
    ctx->pc = 0x19A458u;
label_19a458:
    // 0x19a458: 0x10000019  b           . + 4 + (0x19 << 2)
label_19a45c:
    if (ctx->pc == 0x19A45Cu) {
        ctx->pc = 0x19A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A458u;
        // 0x19a45c: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A460u;
        goto label_19a460;
    }
    ctx->pc = 0x19A458u;
    {
        const bool branch_taken_0x19a458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A458u;
        // 0x19a45c: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a458) {
            ctx->pc = 0x19A4C0u;
            goto label_19a4c0;
        }
    }
    ctx->pc = 0x19A460u;
label_19a460:
    // 0x19a460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a464:
    // 0x19a464: 0xc0667bc  jal         func_199EF0
label_19a468:
    if (ctx->pc == 0x19A468u) {
        ctx->pc = 0x19A46Cu;
        goto label_19a46c;
    }
    ctx->pc = 0x19A464u;
    SET_GPR_U32(ctx, 31, 0x19A46Cu);
    ctx->pc = 0x199EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EF0u, 0x19A464u, 0x19A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A46Cu;
label_19a46c:
    // 0x19a46c: 0xc063e14  jal         func_18F850
label_19a470:
    if (ctx->pc == 0x19A470u) {
        ctx->pc = 0x19A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A46Cu;
        // 0x19a470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A474u;
        goto label_19a474;
    }
    ctx->pc = 0x19A46Cu;
    SET_GPR_U32(ctx, 31, 0x19A474u);
    ctx->pc = 0x19A470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A46Cu;
    // 0x19a470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19A46Cu, 0x19A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A474u;
label_19a474:
    // 0x19a474: 0x10000011  b           . + 4 + (0x11 << 2)
label_19a478:
    if (ctx->pc == 0x19A478u) {
        ctx->pc = 0x19A47Cu;
        goto label_19a47c;
    }
    ctx->pc = 0x19A474u;
    {
        const bool branch_taken_0x19a474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a474) {
            ctx->pc = 0x19A4BCu;
            goto label_19a4bc;
        }
    }
    ctx->pc = 0x19A47Cu;
label_19a47c:
    // 0x19a47c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19a480:
    // 0x19a480: 0x8c45283c  lw          $a1, 0x283C($v0)
    ctx->pc = 0x19a480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10300)));
label_19a484:
    // 0x19a484: 0xc0667e0  jal         func_199F80
label_19a488:
    if (ctx->pc == 0x19A488u) {
        ctx->pc = 0x19A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A484u;
        // 0x19a488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A48Cu;
        goto label_19a48c;
    }
    ctx->pc = 0x19A484u;
    SET_GPR_U32(ctx, 31, 0x19A48Cu);
    ctx->pc = 0x19A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A484u;
    // 0x19a488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F80u, 0x19A484u, 0x19A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A48Cu;
label_19a48c:
    // 0x19a48c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_19a490:
    if (ctx->pc == 0x19A490u) {
        ctx->pc = 0x19A494u;
        goto label_19a494;
    }
    ctx->pc = 0x19A48Cu;
    {
        const bool branch_taken_0x19a48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a48c) {
            ctx->pc = 0x19A4BCu;
            goto label_19a4bc;
        }
    }
    ctx->pc = 0x19A494u;
label_19a494:
    // 0x19a494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a498:
    // 0x19a498: 0xc063e08  jal         func_18F820
label_19a49c:
    if (ctx->pc == 0x19A49Cu) {
        ctx->pc = 0x19A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A498u;
        // 0x19a49c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A4A0u;
        goto label_19a4a0;
    }
    ctx->pc = 0x19A498u;
    SET_GPR_U32(ctx, 31, 0x19A4A0u);
    ctx->pc = 0x19A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A498u;
    // 0x19a49c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A498u, 0x19A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A4A0u;
label_19a4a0:
    // 0x19a4a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_19a4a4:
    if (ctx->pc == 0x19A4A4u) {
        ctx->pc = 0x19A4A8u;
        goto label_19a4a8;
    }
    ctx->pc = 0x19A4A0u;
    {
        const bool branch_taken_0x19a4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a4a0) {
            ctx->pc = 0x19A4BCu;
            goto label_19a4bc;
        }
    }
    ctx->pc = 0x19A4A8u;
label_19a4a8:
    // 0x19a4a8: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_19a4ac:
    // 0x19a4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a4b0:
    // 0x19a4b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a4b4:
    // 0x19a4b4: 0xc063e08  jal         func_18F820
label_19a4b8:
    if (ctx->pc == 0x19A4B8u) {
        ctx->pc = 0x19A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A4B4u;
        // 0x19a4b8: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A4BCu;
        goto label_19a4bc;
    }
    ctx->pc = 0x19A4B4u;
    SET_GPR_U32(ctx, 31, 0x19A4BCu);
    ctx->pc = 0x19A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A4B4u;
    // 0x19a4b8: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A4B4u, 0x19A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A4BCu;
label_19a4bc:
    // 0x19a4bc: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x19a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_19a4c0:
    // 0x19a4c0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_19a4c4:
    if (ctx->pc == 0x19A4C4u) {
        ctx->pc = 0x19A4C8u;
        goto label_19a4c8;
    }
    ctx->pc = 0x19A4C0u;
    {
        const bool branch_taken_0x19a4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a4c0) {
            ctx->pc = 0x19A4E4u;
            goto label_19a4e4;
        }
    }
    ctx->pc = 0x19A4C8u;
label_19a4c8:
    // 0x19a4c8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19a4cc:
    if (ctx->pc == 0x19A4CCu) {
        ctx->pc = 0x19A4D0u;
        goto label_19a4d0;
    }
    ctx->pc = 0x19A4C8u;
    {
        const bool branch_taken_0x19a4c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a4c8) {
            ctx->pc = 0x19A4E4u;
            goto label_19a4e4;
        }
    }
    ctx->pc = 0x19A4D0u;
label_19a4d0:
    // 0x19a4d0: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19a4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19a4d4:
    // 0x19a4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a4d8:
    // 0x19a4d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19a4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19a4dc:
    // 0x19a4dc: 0x320f809  jalr        $t9
label_19a4e0:
    if (ctx->pc == 0x19A4E0u) {
        ctx->pc = 0x19A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A4DCu;
        // 0x19a4e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A4E4u;
        goto label_19a4e4;
    }
    ctx->pc = 0x19A4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19A4E4u);
        ctx->pc = 0x19A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A4DCu;
        // 0x19a4e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A4DCu, 0x19A4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A4E4u;
label_19a4e4:
    // 0x19a4e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19a4e8:
    // 0x19a4e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19a4ec:
    // 0x19a4ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19a4f0:
    // 0x19a4f0: 0x3e00008  jr          $ra
label_19a4f4:
    if (ctx->pc == 0x19A4F4u) {
        ctx->pc = 0x19A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A4F0u;
        // 0x19a4f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A4F8u;
        goto label_fallthrough_0x19a4f0;
    }
    ctx->pc = 0x19A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A4F0u;
        // 0x19a4f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19a4f0:
    ctx->pc = 0x19A4F8u;
}
