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

// Function: FUN_00101740
// Address: 0x101740 - 0x101800
void FUN_00101740_0x101740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00101740_0x101740");
#endif

    switch (ctx->pc) {
        case 0x101758u: goto label_101758;
        case 0x101760u: goto label_101760;
        case 0x101768u: goto label_101768;
        case 0x101770u: goto label_101770;
        case 0x101778u: goto label_101778;
        case 0x101780u: goto label_101780;
        case 0x101788u: goto label_101788;
        case 0x101790u: goto label_101790;
        case 0x10179cu: goto label_10179c;
        case 0x1017a4u: goto label_1017a4;
        case 0x1017acu: goto label_1017ac;
        case 0x1017b4u: goto label_1017b4;
        case 0x1017c8u: goto label_1017c8;
        case 0x1017d0u: goto label_1017d0;
        case 0x1017d8u: goto label_1017d8;
        case 0x1017e0u: goto label_1017e0;
        case 0x1017e8u: goto label_1017e8;
        case 0x1017f0u: goto label_1017f0;
        default: break;
    }

    ctx->pc = 0x101740u;

    // 0x101740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x101748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10174c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10174cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101750: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x101750u;
    SET_GPR_U32(ctx, 31, 0x101758u);
    ctx->pc = 0x101754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101750u;
    // 0x101754: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x101750u, 0x101758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101758u;
label_101758:
    // 0x101758: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x101758u;
    SET_GPR_U32(ctx, 31, 0x101760u);
    ctx->pc = 0x10175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101758u;
    // 0x10175c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x101758u, 0x101760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101760u;
label_101760:
    // 0x101760: 0xc062d50  jal         func_18B540
    ctx->pc = 0x101760u;
    SET_GPR_U32(ctx, 31, 0x101768u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x101760u, 0x101768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101768u;
label_101768:
    // 0x101768: 0xc062b80  jal         func_18AE00
    ctx->pc = 0x101768u;
    SET_GPR_U32(ctx, 31, 0x101770u);
    ctx->pc = 0x10176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101768u;
    // 0x10176c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE00u, 0x101768u, 0x101770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101770u;
label_101770:
    // 0x101770: 0xc062d50  jal         func_18B540
    ctx->pc = 0x101770u;
    SET_GPR_U32(ctx, 31, 0x101778u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x101770u, 0x101778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101778u;
label_101778:
    // 0x101778: 0xc062c58  jal         func_18B160
    ctx->pc = 0x101778u;
    SET_GPR_U32(ctx, 31, 0x101780u);
    ctx->pc = 0x10177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101778u;
    // 0x10177c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B160u, 0x101778u, 0x101780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101780u;
label_101780:
    // 0x101780: 0xc0457f0  jal         func_115FC0
    ctx->pc = 0x101780u;
    SET_GPR_U32(ctx, 31, 0x101788u);
    ctx->pc = 0x115FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FC0u, 0x101780u, 0x101788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101788u;
label_101788:
    // 0x101788: 0xc040d08  jal         func_103420
    ctx->pc = 0x101788u;
    SET_GPR_U32(ctx, 31, 0x101790u);
    ctx->pc = 0x10178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101788u;
    // 0x10178c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x101788u, 0x101790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101790u;
label_101790:
    // 0x101790: 0x8f858388  lw          $a1, -0x7C78($gp)
    ctx->pc = 0x101790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x101794: 0xc0407a4  jal         func_101E90
    ctx->pc = 0x101794u;
    SET_GPR_U32(ctx, 31, 0x10179Cu);
    ctx->pc = 0x101798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101794u;
    // 0x101798: 0x8f848214  lw          $a0, -0x7DEC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E90u, 0x101794u, 0x10179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10179Cu;
label_10179c:
    // 0x10179c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x10179Cu;
    SET_GPR_U32(ctx, 31, 0x1017A4u);
    ctx->pc = 0x1017A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10179Cu;
    // 0x1017a0: 0x8f848214  lw          $a0, -0x7DEC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x10179Cu, 0x1017A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017A4u;
label_1017a4:
    // 0x1017a4: 0xc06cff0  jal         func_1B3FC0
    ctx->pc = 0x1017A4u;
    SET_GPR_U32(ctx, 31, 0x1017ACu);
    ctx->pc = 0x1017A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017A4u;
    // 0x1017a8: 0x8f848388  lw          $a0, -0x7C78($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3FC0u, 0x1017A4u, 0x1017ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017ACu;
label_1017ac:
    // 0x1017ac: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1017ACu;
    SET_GPR_U32(ctx, 31, 0x1017B4u);
    ctx->pc = 0x1017B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017ACu;
    // 0x1017b0: 0x8f848388  lw          $a0, -0x7C78($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1017ACu, 0x1017B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017B4u;
label_1017b4:
    // 0x1017b4: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x1017b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1017b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1017B8u;
    {
        const bool branch_taken_0x1017b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1017b8) {
            ctx->pc = 0x1017C8u;
            goto label_1017c8;
        }
    }
    ctx->pc = 0x1017C0u;
    // 0x1017c0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1017C0u;
    SET_GPR_U32(ctx, 31, 0x1017C8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1017C0u, 0x1017C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017C8u;
label_1017c8:
    // 0x1017c8: 0xc05fa94  jal         func_17EA50
    ctx->pc = 0x1017C8u;
    SET_GPR_U32(ctx, 31, 0x1017D0u);
    ctx->pc = 0x17EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA50u, 0x1017C8u, 0x1017D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017D0u;
label_1017d0:
    // 0x1017d0: 0xc06d04c  jal         func_1B4130
    ctx->pc = 0x1017D0u;
    SET_GPR_U32(ctx, 31, 0x1017D8u);
    ctx->pc = 0x1017D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017D0u;
    // 0x1017d4: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4130u, 0x1017D0u, 0x1017D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017D8u;
label_1017d8:
    // 0x1017d8: 0xc0617f8  jal         func_185FE0
    ctx->pc = 0x1017D8u;
    SET_GPR_U32(ctx, 31, 0x1017E0u);
    ctx->pc = 0x185FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185FE0u, 0x1017D8u, 0x1017E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017E0u;
label_1017e0:
    // 0x1017e0: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1017E0u;
    SET_GPR_U32(ctx, 31, 0x1017E8u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1017E0u, 0x1017E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017E8u;
label_1017e8:
    // 0x1017e8: 0xc046b74  jal         func_11ADD0
    ctx->pc = 0x1017E8u;
    SET_GPR_U32(ctx, 31, 0x1017F0u);
    ctx->pc = 0x1017ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017E8u;
    // 0x1017ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ADD0u, 0x1017E8u, 0x1017F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017F0u;
label_1017f0:
    // 0x1017f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1017f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1017f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1017f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1017f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1017F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1017FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017F8u;
        // 0x1017fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1017F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101800u;
}
