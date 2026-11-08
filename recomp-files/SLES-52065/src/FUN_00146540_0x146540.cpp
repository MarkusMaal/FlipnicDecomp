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

// Function: FUN_00146540
// Address: 0x146540 - 0x1466cc
void FUN_00146540_0x146540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00146540_0x146540");
#endif

    switch (ctx->pc) {
        case 0x146588u: goto label_146588;
        case 0x146598u: goto label_146598;
        case 0x1465a4u: goto label_1465a4;
        case 0x1465b0u: goto label_1465b0;
        case 0x1465b8u: goto label_1465b8;
        case 0x1465c8u: goto label_1465c8;
        case 0x1465f8u: goto label_1465f8;
        case 0x146600u: goto label_146600;
        case 0x146608u: goto label_146608;
        case 0x146610u: goto label_146610;
        case 0x146618u: goto label_146618;
        case 0x146630u: goto label_146630;
        case 0x146648u: goto label_146648;
        case 0x14665cu: goto label_14665c;
        case 0x146678u: goto label_146678;
        case 0x146684u: goto label_146684;
        case 0x14669cu: goto label_14669c;
        default: break;
    }

    ctx->pc = 0x146540u;

    // 0x146540: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x146540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x146544: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x146544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x146548: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x146548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14654c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14654cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x146550: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x146550u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146554: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x146554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x146558: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x146558u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14655c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x146560: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x146560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x146564: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x146564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x146568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14656c: 0x12c0004b  beqz        $s6, . + 4 + (0x4B << 2)
    ctx->pc = 0x14656Cu;
    {
        const bool branch_taken_0x14656c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x146570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14656Cu;
        // 0x146570: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14656c) {
            ctx->pc = 0x14669Cu;
            goto label_14669c;
        }
    }
    ctx->pc = 0x146574u;
    // 0x146574: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x146574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x146578: 0x244292f0  addiu       $v0, $v0, -0x6D10
    ctx->pc = 0x146578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939376));
    // 0x14657c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x14657cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x146580: 0xc04018c  jal         func_100630
    ctx->pc = 0x146580u;
    SET_GPR_U32(ctx, 31, 0x146588u);
    ctx->pc = 0x146584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146580u;
    // 0x146584: 0x8ec40280  lw          $a0, 0x280($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x146580u, 0x146588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146588u;
label_146588:
    // 0x146588: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x146588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14658c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14658cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146590: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x146590u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146594: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x146594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146598:
    // 0x146598: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x146598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x14659c: 0xc04018c  jal         func_100630
    ctx->pc = 0x14659Cu;
    SET_GPR_U32(ctx, 31, 0x1465A4u);
    ctx->pc = 0x1465A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14659Cu;
    // 0x1465a0: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x14659Cu, 0x1465A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465A4u;
label_1465a4:
    // 0x1465a4: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x1465a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x1465a8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1465A8u;
    SET_GPR_U32(ctx, 31, 0x1465B0u);
    ctx->pc = 0x1465ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465A8u;
    // 0x1465ac: 0x8c440120  lw          $a0, 0x120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1465A8u, 0x1465B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465B0u;
label_1465b0:
    // 0x1465b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1465b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1465b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1465b8:
    // 0x1465b8: 0x2d51021  addu        $v0, $s6, $s5
    ctx->pc = 0x1465b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x1465bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1465bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1465c0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1465C0u;
    SET_GPR_U32(ctx, 31, 0x1465C8u);
    ctx->pc = 0x1465C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465C0u;
    // 0x1465c4: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1465C0u, 0x1465C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465C8u;
label_1465c8:
    // 0x1465c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1465c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1465cc: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1465ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1465d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1465D0u;
    {
        const bool branch_taken_0x1465d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1465D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465D0u;
        // 0x1465d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465d0) {
            ctx->pc = 0x1465B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1465b8;
        }
    }
    ctx->pc = 0x1465D8u;
    // 0x1465d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1465d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1465dc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1465dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1465e0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1465e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1465e4: 0x269400b0  addiu       $s4, $s4, 0xB0
    ctx->pc = 0x1465e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1465e8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1465E8u;
    {
        const bool branch_taken_0x1465e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1465ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465E8u;
        // 0x1465ec: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465e8) {
            ctx->pc = 0x146598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146598;
        }
    }
    ctx->pc = 0x1465F0u;
    // 0x1465f0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1465F0u;
    SET_GPR_U32(ctx, 31, 0x1465F8u);
    ctx->pc = 0x1465F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465F0u;
    // 0x1465f4: 0x8ec403c4  lw          $a0, 0x3C4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1465F0u, 0x1465F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465F8u;
label_1465f8:
    // 0x1465f8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1465F8u;
    SET_GPR_U32(ctx, 31, 0x146600u);
    ctx->pc = 0x1465FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465F8u;
    // 0x1465fc: 0x8ec403c8  lw          $a0, 0x3C8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1465F8u, 0x146600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146600u;
label_146600:
    // 0x146600: 0xc04018c  jal         func_100630
    ctx->pc = 0x146600u;
    SET_GPR_U32(ctx, 31, 0x146608u);
    ctx->pc = 0x146604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146600u;
    // 0x146604: 0x8ec403cc  lw          $a0, 0x3CC($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x146600u, 0x146608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146608u;
label_146608:
    // 0x146608: 0xc04018c  jal         func_100630
    ctx->pc = 0x146608u;
    SET_GPR_U32(ctx, 31, 0x146610u);
    ctx->pc = 0x14660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146608u;
    // 0x14660c: 0x8ec403d0  lw          $a0, 0x3D0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x146608u, 0x146610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146610u;
label_146610:
    // 0x146610: 0xc04018c  jal         func_100630
    ctx->pc = 0x146610u;
    SET_GPR_U32(ctx, 31, 0x146618u);
    ctx->pc = 0x146614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146610u;
    // 0x146614: 0x8ec402b0  lw          $a0, 0x2B0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x146610u, 0x146618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146618u;
label_146618:
    // 0x146618: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x146618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x14661c: 0x26c400a0  addiu       $a0, $s6, 0xA0
    ctx->pc = 0x14661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
    // 0x146620: 0x24a56460  addiu       $a1, $a1, 0x6460
    ctx->pc = 0x146620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25696));
    // 0x146624: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x146624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x146628: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x146628u;
    SET_GPR_U32(ctx, 31, 0x146630u);
    ctx->pc = 0x14662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146628u;
    // 0x14662c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x146628u, 0x146630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146630u;
label_146630:
    // 0x146630: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x146630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x146634: 0x26c40040  addiu       $a0, $s6, 0x40
    ctx->pc = 0x146634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x146638: 0x24a564e0  addiu       $a1, $a1, 0x64E0
    ctx->pc = 0x146638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25824));
    // 0x14663c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x14663cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x146640: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x146640u;
    SET_GPR_U32(ctx, 31, 0x146648u);
    ctx->pc = 0x146644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146640u;
    // 0x146644: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x146640u, 0x146648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146648u;
label_146648:
    // 0x146648: 0x26c40014  addiu       $a0, $s6, 0x14
    ctx->pc = 0x146648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x14664c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x14664Cu;
    {
        const bool branch_taken_0x14664c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14664c) {
            ctx->pc = 0x146678u;
            goto label_146678;
        }
    }
    ctx->pc = 0x146654u;
    // 0x146654: 0xc052384  jal         func_148E10
    ctx->pc = 0x146654u;
    SET_GPR_U32(ctx, 31, 0x14665Cu);
    ctx->pc = 0x148E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E10u, 0x146654u, 0x14665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14665Cu;
label_14665c:
    // 0x14665c: 0x26c40018  addiu       $a0, $s6, 0x18
    ctx->pc = 0x14665cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x146660: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x146660u;
    {
        const bool branch_taken_0x146660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x146660) {
            ctx->pc = 0x146678u;
            goto label_146678;
        }
    }
    ctx->pc = 0x146668u;
    // 0x146668: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146668u;
    {
        const bool branch_taken_0x146668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x146668) {
            ctx->pc = 0x146678u;
            goto label_146678;
        }
    }
    ctx->pc = 0x146670u;
    // 0x146670: 0xc04f090  jal         func_13C240
    ctx->pc = 0x146670u;
    SET_GPR_U32(ctx, 31, 0x146678u);
    ctx->pc = 0x13C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C240u, 0x146670u, 0x146678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146678u;
label_146678:
    // 0x146678: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x146678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14667c: 0xc04dd5c  jal         func_137570
    ctx->pc = 0x14667Cu;
    SET_GPR_U32(ctx, 31, 0x146684u);
    ctx->pc = 0x146680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14667Cu;
    // 0x146680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137570u, 0x14667Cu, 0x146684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146684u;
label_146684:
    // 0x146684: 0x17143c  dsll32      $v0, $s7, 16
    ctx->pc = 0x146684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 16));
    // 0x146688: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x146688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14668c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14668Cu;
    {
        const bool branch_taken_0x14668c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x146690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14668Cu;
        // 0x146690: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14668c) {
            ctx->pc = 0x1466A0u;
            goto label_1466a0;
        }
    }
    ctx->pc = 0x146694u;
    // 0x146694: 0xc0401a4  jal         func_100690
    ctx->pc = 0x146694u;
    SET_GPR_U32(ctx, 31, 0x14669Cu);
    ctx->pc = 0x146698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146694u;
    // 0x146698: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x146694u, 0x14669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14669Cu;
label_14669c:
    // 0x14669c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x14669cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1466a0:
    // 0x1466a0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1466a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1466a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1466a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1466a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1466a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1466ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1466acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1466b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1466b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1466b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1466b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1466b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1466b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1466bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1466bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1466c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1466c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1466c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1466C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1466C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466C4u;
        // 0x1466c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1466C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1466CCu;
}
