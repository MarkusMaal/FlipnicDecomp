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

// Function: FUN_00136770
// Address: 0x136770 - 0x136834
void FUN_00136770_0x136770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136770_0x136770");
#endif

    switch (ctx->pc) {
        case 0x136770u: goto label_136770;
        case 0x136774u: goto label_136774;
        case 0x136778u: goto label_136778;
        case 0x13677cu: goto label_13677c;
        case 0x136780u: goto label_136780;
        case 0x136784u: goto label_136784;
        case 0x136788u: goto label_136788;
        case 0x13678cu: goto label_13678c;
        case 0x136790u: goto label_136790;
        case 0x136794u: goto label_136794;
        case 0x136798u: goto label_136798;
        case 0x13679cu: goto label_13679c;
        case 0x1367a0u: goto label_1367a0;
        case 0x1367a4u: goto label_1367a4;
        case 0x1367a8u: goto label_1367a8;
        case 0x1367acu: goto label_1367ac;
        case 0x1367b0u: goto label_1367b0;
        case 0x1367b4u: goto label_1367b4;
        case 0x1367b8u: goto label_1367b8;
        case 0x1367bcu: goto label_1367bc;
        case 0x1367c0u: goto label_1367c0;
        case 0x1367c4u: goto label_1367c4;
        case 0x1367c8u: goto label_1367c8;
        case 0x1367ccu: goto label_1367cc;
        case 0x1367d0u: goto label_1367d0;
        case 0x1367d4u: goto label_1367d4;
        case 0x1367d8u: goto label_1367d8;
        case 0x1367dcu: goto label_1367dc;
        case 0x1367e0u: goto label_1367e0;
        case 0x1367e4u: goto label_1367e4;
        case 0x1367e8u: goto label_1367e8;
        case 0x1367ecu: goto label_1367ec;
        case 0x1367f0u: goto label_1367f0;
        case 0x1367f4u: goto label_1367f4;
        case 0x1367f8u: goto label_1367f8;
        case 0x1367fcu: goto label_1367fc;
        case 0x136800u: goto label_136800;
        case 0x136804u: goto label_136804;
        case 0x136808u: goto label_136808;
        case 0x13680cu: goto label_13680c;
        case 0x136810u: goto label_136810;
        case 0x136814u: goto label_136814;
        case 0x136818u: goto label_136818;
        case 0x13681cu: goto label_13681c;
        case 0x136820u: goto label_136820;
        case 0x136824u: goto label_136824;
        case 0x136828u: goto label_136828;
        case 0x13682cu: goto label_13682c;
        case 0x136830u: goto label_136830;
        default: break;
    }

    ctx->pc = 0x136770u;

label_136770:
    // 0x136770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_136774:
    // 0x136774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_136778:
    // 0x136778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13677c:
    // 0x13677c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13677cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_136780:
    // 0x136780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136784:
    // 0x136784: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_136788:
    if (ctx->pc == 0x136788u) {
        ctx->pc = 0x136788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136784u;
        // 0x136788: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13678Cu;
        goto label_13678c;
    }
    ctx->pc = 0x136784u;
    {
        const bool branch_taken_0x136784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x136788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136784u;
        // 0x136788: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136784) {
            ctx->pc = 0x13681Cu;
            goto label_13681c;
        }
    }
    ctx->pc = 0x13678Cu;
label_13678c:
    // 0x13678c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x13678cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_136790:
    // 0x136790: 0x24428f20  addiu       $v0, $v0, -0x70E0
    ctx->pc = 0x136790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
label_136794:
    // 0x136794: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x136794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_136798:
    // 0x136798: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x136798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_13679c:
    // 0x13679c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1367a0:
    if (ctx->pc == 0x1367A0u) {
        ctx->pc = 0x1367A4u;
        goto label_1367a4;
    }
    ctx->pc = 0x13679Cu;
    {
        const bool branch_taken_0x13679c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13679c) {
            ctx->pc = 0x1367B4u;
            goto label_1367b4;
        }
    }
    ctx->pc = 0x1367A4u;
label_1367a4:
    // 0x1367a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1367a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1367a8:
    // 0x1367a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1367a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1367ac:
    // 0x1367ac: 0x320f809  jalr        $t9
label_1367b0:
    if (ctx->pc == 0x1367B0u) {
        ctx->pc = 0x1367B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367ACu;
        // 0x1367b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367B4u;
        goto label_1367b4;
    }
    ctx->pc = 0x1367ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1367B4u);
        ctx->pc = 0x1367B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367ACu;
        // 0x1367b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1367ACu, 0x1367B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1367B4u;
label_1367b4:
    // 0x1367b4: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x1367b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1367b8:
    // 0x1367b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1367bc:
    if (ctx->pc == 0x1367BCu) {
        ctx->pc = 0x1367C0u;
        goto label_1367c0;
    }
    ctx->pc = 0x1367B8u;
    {
        const bool branch_taken_0x1367b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1367b8) {
            ctx->pc = 0x1367D0u;
            goto label_1367d0;
        }
    }
    ctx->pc = 0x1367C0u;
label_1367c0:
    // 0x1367c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1367c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1367c4:
    // 0x1367c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1367c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1367c8:
    // 0x1367c8: 0x320f809  jalr        $t9
label_1367cc:
    if (ctx->pc == 0x1367CCu) {
        ctx->pc = 0x1367CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367C8u;
        // 0x1367cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367D0u;
        goto label_1367d0;
    }
    ctx->pc = 0x1367C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1367D0u);
        ctx->pc = 0x1367CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367C8u;
        // 0x1367cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1367C8u, 0x1367D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1367D0u;
label_1367d0:
    // 0x1367d0: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x1367d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1367d4:
    // 0x1367d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1367d8:
    if (ctx->pc == 0x1367D8u) {
        ctx->pc = 0x1367DCu;
        goto label_1367dc;
    }
    ctx->pc = 0x1367D4u;
    {
        const bool branch_taken_0x1367d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1367d4) {
            ctx->pc = 0x1367ECu;
            goto label_1367ec;
        }
    }
    ctx->pc = 0x1367DCu;
label_1367dc:
    // 0x1367dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1367dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1367e0:
    // 0x1367e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1367e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1367e4:
    // 0x1367e4: 0x320f809  jalr        $t9
label_1367e8:
    if (ctx->pc == 0x1367E8u) {
        ctx->pc = 0x1367E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367E4u;
        // 0x1367e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367ECu;
        goto label_1367ec;
    }
    ctx->pc = 0x1367E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1367ECu);
        ctx->pc = 0x1367E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367E4u;
        // 0x1367e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1367E4u, 0x1367ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1367ECu;
label_1367ec:
    // 0x1367ec: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x1367ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1367f0:
    // 0x1367f0: 0xc0497d8  jal         func_125F60
label_1367f4:
    if (ctx->pc == 0x1367F4u) {
        ctx->pc = 0x1367F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367F0u;
        // 0x1367f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367F8u;
        goto label_1367f8;
    }
    ctx->pc = 0x1367F0u;
    SET_GPR_U32(ctx, 31, 0x1367F8u);
    ctx->pc = 0x1367F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367F0u;
    // 0x1367f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F60u, 0x1367F0u, 0x1367F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1367F8u;
label_1367f8:
    // 0x1367f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1367f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1367fc:
    // 0x1367fc: 0xc04c4ec  jal         func_1313B0
label_136800:
    if (ctx->pc == 0x136800u) {
        ctx->pc = 0x136800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367FCu;
        // 0x136800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136804u;
        goto label_136804;
    }
    ctx->pc = 0x1367FCu;
    SET_GPR_U32(ctx, 31, 0x136804u);
    ctx->pc = 0x136800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367FCu;
    // 0x136800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313B0u, 0x1367FCu, 0x136804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136804u;
label_136804:
    // 0x136804: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x136804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_136808:
    // 0x136808: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x136808u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_13680c:
    // 0x13680c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_136810:
    if (ctx->pc == 0x136810u) {
        ctx->pc = 0x136810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13680Cu;
        // 0x136810: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136814u;
        goto label_136814;
    }
    ctx->pc = 0x13680Cu;
    {
        const bool branch_taken_0x13680c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x136810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13680Cu;
        // 0x136810: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13680c) {
            ctx->pc = 0x136820u;
            goto label_136820;
        }
    }
    ctx->pc = 0x136814u;
label_136814:
    // 0x136814: 0xc0401a4  jal         func_100690
label_136818:
    if (ctx->pc == 0x136818u) {
        ctx->pc = 0x136818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136814u;
        // 0x136818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13681Cu;
        goto label_13681c;
    }
    ctx->pc = 0x136814u;
    SET_GPR_U32(ctx, 31, 0x13681Cu);
    ctx->pc = 0x136818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136814u;
    // 0x136818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x136814u, 0x13681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13681Cu;
label_13681c:
    // 0x13681c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13681cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136820:
    // 0x136820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_136824:
    // 0x136824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_136828:
    // 0x136828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13682c:
    // 0x13682c: 0x3e00008  jr          $ra
label_136830:
    if (ctx->pc == 0x136830u) {
        ctx->pc = 0x136830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13682Cu;
        // 0x136830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136834u;
        goto label_fallthrough_0x13682c;
    }
    ctx->pc = 0x13682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13682Cu;
        // 0x136830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13682Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13682c:
    ctx->pc = 0x136834u;
}
