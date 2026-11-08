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

// Function: entry_001376b4
// Address: 0x1376b4 - 0x137734
void entry_001376b4_0x1376b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001376b4_0x1376b4");
#endif

    switch (ctx->pc) {
        case 0x1376dcu: goto label_1376dc;
        case 0x137720u: goto label_137720;
        default: break;
    }

    ctx->pc = 0x1376b4u;

    // 0x1376b4: 0x0  nop
    ctx->pc = 0x1376b4u;
    // NOP
    // 0x1376b8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1376b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1376bc: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1376bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1376c0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1376c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1376c4: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1376C4u;
    {
        const bool branch_taken_0x1376c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1376c4) {
            ctx->pc = 0x1375C0u;
            return;
        }
    }
    ctx->pc = 0x1376CCu;
    // 0x1376cc: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1376ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1376d0: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x1376d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x1376d4: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x1376D4u;
    SET_GPR_U32(ctx, 31, 0x1376DCu);
    ctx->pc = 0x1376D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1376D4u;
    // 0x1376d8: 0x24a57790  addiu       $a1, $a1, 0x7790 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x1376D4u, 0x1376DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1376DCu;
label_1376dc:
    // 0x1376dc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1376dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1376e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1376e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1376e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1376e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1376e8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1376e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1376ec: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x1376ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1376f0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1376f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1376f4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1376F4u;
    {
        const bool branch_taken_0x1376f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1376f4) {
            ctx->pc = 0x137750u;
            return;
        }
    }
    ctx->pc = 0x1376FCu;
    // 0x1376fc: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x1376fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x137700: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x137700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x137704: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x137704u;
    {
        const bool branch_taken_0x137704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x137708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137704u;
        // 0x137708: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137704) {
            ctx->pc = 0x137734u;
            return;
        }
    }
    ctx->pc = 0x13770Cu;
    // 0x13770c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13770Cu;
    {
        const bool branch_taken_0x13770c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13770c) {
            ctx->pc = 0x137734u;
            return;
        }
    }
    ctx->pc = 0x137714u;
    // 0x137714: 0x8f85858c  lw          $a1, -0x7A74($gp)
    ctx->pc = 0x137714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    // 0x137718: 0xc04eb2c  jal         func_13ACB0
    ctx->pc = 0x137718u;
    SET_GPR_U32(ctx, 31, 0x137720u);
    ctx->pc = 0x13771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137718u;
    // 0x13771c: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ACB0u, 0x137718u, 0x137720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137720u;
label_137720:
    // 0x137720: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x137720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x137724: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x137724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x137728: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x137728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x13772c: 0xc04ebb8  jal         func_13AEE0
    ctx->pc = 0x13772Cu;
    SET_GPR_U32(ctx, 31, 0x137734u);
    ctx->pc = 0x137730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13772Cu;
    // 0x137730: 0x8f84858c  lw          $a0, -0x7A74($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AEE0u, 0x13772Cu, 0x137734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137734u;
}
