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

// Function: FUN_00117960
// Address: 0x117960 - 0x1179d4
void FUN_00117960_0x117960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117960_0x117960");
#endif

    switch (ctx->pc) {
        case 0x117988u: goto label_117988;
        case 0x11799cu: goto label_11799c;
        case 0x1179a4u: goto label_1179a4;
        case 0x1179b0u: goto label_1179b0;
        case 0x1179bcu: goto label_1179bc;
        case 0x1179c8u: goto label_1179c8;
        default: break;
    }

    ctx->pc = 0x117960u;

    // 0x117960: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x117960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x117964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x117964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11796c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x117970: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x117970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x117974: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x117974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x117978: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x117978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11797c: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x11797cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x117980: 0xc082a26  jal         func_20A898
    ctx->pc = 0x117980u;
    SET_GPR_U32(ctx, 31, 0x117988u);
    ctx->pc = 0x117984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117980u;
    // 0x117984: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A898u, 0x117980u, 0x117988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117988u;
label_117988:
    // 0x117988: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x117988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x11798c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x11798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x117990: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x117990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117994: 0xc082bd0  jal         func_20AF40
    ctx->pc = 0x117994u;
    SET_GPR_U32(ctx, 31, 0x11799Cu);
    ctx->pc = 0x117998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117994u;
    // 0x117998: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AF40u, 0x117994u, 0x11799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11799Cu;
label_11799c:
    // 0x11799c: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11799Cu;
    SET_GPR_U32(ctx, 31, 0x1179A4u);
    ctx->pc = 0x1179A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11799Cu;
    // 0x1179a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11799Cu, 0x1179A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179A4u;
label_1179a4:
    // 0x1179a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1179a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1179a8: 0xc082acc  jal         func_20AB30
    ctx->pc = 0x1179A8u;
    SET_GPR_U32(ctx, 31, 0x1179B0u);
    ctx->pc = 0x1179ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179A8u;
    // 0x1179ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AB30u, 0x1179A8u, 0x1179B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179B0u;
label_1179b0:
    // 0x1179b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1179b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1179b4: 0xc082acc  jal         func_20AB30
    ctx->pc = 0x1179B4u;
    SET_GPR_U32(ctx, 31, 0x1179BCu);
    ctx->pc = 0x1179B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179B4u;
    // 0x1179b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AB30u, 0x1179B4u, 0x1179BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179BCu;
label_1179bc:
    // 0x1179bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1179bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179c0: 0xc082b0a  jal         func_20AC28
    ctx->pc = 0x1179C0u;
    SET_GPR_U32(ctx, 31, 0x1179C8u);
    ctx->pc = 0x1179C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179C0u;
    // 0x1179c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x1179C0u, 0x1179C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179C8u;
label_1179c8:
    // 0x1179c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1179c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1179cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1179CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1179D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179CCu;
        // 0x1179d0: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1179CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1179D4u;
}
