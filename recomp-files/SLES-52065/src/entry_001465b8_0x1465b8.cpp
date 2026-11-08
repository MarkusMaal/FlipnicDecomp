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

// Function: entry_001465b8
// Address: 0x1465b8 - 0x146678
void entry_001465b8_0x1465b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001465b8_0x1465b8");
#endif

    switch (ctx->pc) {
        case 0x1465c8u: goto label_1465c8;
        case 0x1465f8u: goto label_1465f8;
        case 0x146600u: goto label_146600;
        case 0x146608u: goto label_146608;
        case 0x146610u: goto label_146610;
        case 0x146618u: goto label_146618;
        case 0x146630u: goto label_146630;
        case 0x146648u: goto label_146648;
        case 0x14665cu: goto label_14665c;
        default: break;
    }

    ctx->pc = 0x1465b8u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x146668u;
    // 0x146668: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146668u;
    {
        const bool branch_taken_0x146668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x146668) {
            ctx->pc = 0x146678u;
            return;
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
}
