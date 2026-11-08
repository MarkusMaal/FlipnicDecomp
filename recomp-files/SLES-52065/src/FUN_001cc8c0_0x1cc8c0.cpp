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

// Function: FUN_001cc8c0
// Address: 0x1cc8c0 - 0x1cc9c0
void FUN_001cc8c0_0x1cc8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc8c0_0x1cc8c0");
#endif

    switch (ctx->pc) {
        case 0x1cc8d4u: goto label_1cc8d4;
        case 0x1cc8f8u: goto label_1cc8f8;
        case 0x1cc904u: goto label_1cc904;
        case 0x1cc910u: goto label_1cc910;
        case 0x1cc924u: goto label_1cc924;
        case 0x1cc930u: goto label_1cc930;
        case 0x1cc93cu: goto label_1cc93c;
        case 0x1cc950u: goto label_1cc950;
        case 0x1cc95cu: goto label_1cc95c;
        case 0x1cc968u: goto label_1cc968;
        case 0x1cc97cu: goto label_1cc97c;
        case 0x1cc988u: goto label_1cc988;
        case 0x1cc994u: goto label_1cc994;
        default: break;
    }

    ctx->pc = 0x1cc8c0u;

    // 0x1cc8c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cc8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc8c8: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1cc8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1cc8cc: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1CC8CCu;
    SET_GPR_U32(ctx, 31, 0x1CC8D4u);
    ctx->pc = 0x1CC8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8CCu;
    // 0x1cc8d0: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1CC8CCu, 0x1CC8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8D4u;
label_1cc8d4:
    // 0x1cc8d4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1cc8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cc8d8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1cc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1cc8dc: 0x2463bdd0  addiu       $v1, $v1, -0x4230
    ctx->pc = 0x1cc8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950352));
    // 0x1cc8e0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cc8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cc8e4: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1cc8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1cc8e8: 0x24a52a20  addiu       $a1, $a1, 0x2A20
    ctx->pc = 0x1cc8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
    // 0x1cc8ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cc8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cc8f0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CC8F0u;
    SET_GPR_U32(ctx, 31, 0x1CC8F8u);
    ctx->pc = 0x1CC8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8F0u;
    // 0x1cc8f4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CC8F0u, 0x1CC8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8F8u;
label_1cc8f8:
    // 0x1cc8f8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cc8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cc8fc: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CC8FCu;
    SET_GPR_U32(ctx, 31, 0x1CC904u);
    ctx->pc = 0x1CC900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8FCu;
    // 0x1cc900: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CC8FCu, 0x1CC904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC904u;
label_1cc904:
    // 0x1cc904: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1cc904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1cc908: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CC908u;
    SET_GPR_U32(ctx, 31, 0x1CC910u);
    ctx->pc = 0x1CC90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC908u;
    // 0x1cc90c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CC908u, 0x1CC910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC910u;
label_1cc910:
    // 0x1cc910: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cc910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cc914: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1cc914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1cc918: 0x24a52a40  addiu       $a1, $a1, 0x2A40
    ctx->pc = 0x1cc918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10816));
    // 0x1cc91c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CC91Cu;
    SET_GPR_U32(ctx, 31, 0x1CC924u);
    ctx->pc = 0x1CC920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC91Cu;
    // 0x1cc920: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CC91Cu, 0x1CC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC924u;
label_1cc924:
    // 0x1cc924: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cc924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cc928: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CC928u;
    SET_GPR_U32(ctx, 31, 0x1CC930u);
    ctx->pc = 0x1CC92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC928u;
    // 0x1cc92c: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CC928u, 0x1CC930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC930u;
label_1cc930:
    // 0x1cc930: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1cc930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1cc934: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CC934u;
    SET_GPR_U32(ctx, 31, 0x1CC93Cu);
    ctx->pc = 0x1CC938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC934u;
    // 0x1cc938: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CC934u, 0x1CC93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC93Cu;
label_1cc93c:
    // 0x1cc93c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cc93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cc940: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1cc940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1cc944: 0x24a52a60  addiu       $a1, $a1, 0x2A60
    ctx->pc = 0x1cc944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10848));
    // 0x1cc948: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CC948u;
    SET_GPR_U32(ctx, 31, 0x1CC950u);
    ctx->pc = 0x1CC94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC948u;
    // 0x1cc94c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CC948u, 0x1CC950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC950u;
label_1cc950:
    // 0x1cc950: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cc950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cc954: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CC954u;
    SET_GPR_U32(ctx, 31, 0x1CC95Cu);
    ctx->pc = 0x1CC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC954u;
    // 0x1cc958: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CC954u, 0x1CC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC95Cu;
label_1cc95c:
    // 0x1cc95c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1cc95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1cc960: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CC960u;
    SET_GPR_U32(ctx, 31, 0x1CC968u);
    ctx->pc = 0x1CC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC960u;
    // 0x1cc964: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CC960u, 0x1CC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC968u;
label_1cc968:
    // 0x1cc968: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cc968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cc96c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1cc96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1cc970: 0x24a52a80  addiu       $a1, $a1, 0x2A80
    ctx->pc = 0x1cc970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10880));
    // 0x1cc974: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CC974u;
    SET_GPR_U32(ctx, 31, 0x1CC97Cu);
    ctx->pc = 0x1CC978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC974u;
    // 0x1cc978: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CC974u, 0x1CC97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC97Cu;
label_1cc97c:
    // 0x1cc97c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cc97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cc980: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CC980u;
    SET_GPR_U32(ctx, 31, 0x1CC988u);
    ctx->pc = 0x1CC984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC980u;
    // 0x1cc984: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CC980u, 0x1CC988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC988u;
label_1cc988:
    // 0x1cc988: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1cc988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1cc98c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CC98Cu;
    SET_GPR_U32(ctx, 31, 0x1CC994u);
    ctx->pc = 0x1CC990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC98Cu;
    // 0x1cc990: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CC98Cu, 0x1CC994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC994u;
label_1cc994:
    // 0x1cc994: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1cc994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cc998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc99c: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1cc99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1cc9a0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1cc9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cc9a4: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x1cc9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x1cc9a8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1cc9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cc9ac: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1cc9acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1cc9b0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1cc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cc9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9B8u;
        // 0x1cc9bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC9C0u;
}
