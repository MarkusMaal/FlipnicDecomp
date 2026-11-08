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

// Function: FUN_001bc310
// Address: 0x1bc310 - 0x1bc384
void FUN_001bc310_0x1bc310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc310_0x1bc310");
#endif

    switch (ctx->pc) {
        case 0x1bc324u: goto label_1bc324;
        case 0x1bc354u: goto label_1bc354;
        case 0x1bc360u: goto label_1bc360;
        case 0x1bc36cu: goto label_1bc36c;
        default: break;
    }

    ctx->pc = 0x1bc310u;

    // 0x1bc310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc318: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1bc318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1bc31c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1BC31Cu;
    SET_GPR_U32(ctx, 31, 0x1BC324u);
    ctx->pc = 0x1BC320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC31Cu;
    // 0x1bc320: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1BC31Cu, 0x1BC324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC324u;
label_1bc324:
    // 0x1bc324: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1bc324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bc328: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x1bc328u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
    // 0x1bc32c: 0x24e7b9b0  addiu       $a3, $a3, -0x4650
    ctx->pc = 0x1bc32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949296));
    // 0x1bc330: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc334: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1bc334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bc338: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1bc338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1bc33c: 0x24a51180  addiu       $a1, $a1, 0x1180
    ctx->pc = 0x1bc33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4480));
    // 0x1bc340: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1bc340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1bc344: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1bc344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1bc348: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1bc348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bc34c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BC34Cu;
    SET_GPR_U32(ctx, 31, 0x1BC354u);
    ctx->pc = 0x1BC350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC34Cu;
    // 0x1bc350: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BC34Cu, 0x1BC354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC354u;
label_1bc354:
    // 0x1bc354: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1bc354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bc358: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BC358u;
    SET_GPR_U32(ctx, 31, 0x1BC360u);
    ctx->pc = 0x1BC35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC358u;
    // 0x1bc35c: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BC358u, 0x1BC360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC360u;
label_1bc360:
    // 0x1bc360: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1bc360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1bc364: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BC364u;
    SET_GPR_U32(ctx, 31, 0x1BC36Cu);
    ctx->pc = 0x1BC368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC364u;
    // 0x1bc368: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BC364u, 0x1BC36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC36Cu;
label_1bc36c:
    // 0x1bc36c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1bc36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bc370: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1bc370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1bc374: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1bc374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bc378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc37c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC37Cu;
        // 0x1bc380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC384u;
}
