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

// Function: entry_00171e94
// Address: 0x171e94 - 0x1721fc
void entry_00171e94_0x171e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171e94_0x171e94");
#endif

    switch (ctx->pc) {
        case 0x171e9cu: goto label_171e9c;
        case 0x171eb8u: goto label_171eb8;
        case 0x171ec0u: goto label_171ec0;
        case 0x171ec8u: goto label_171ec8;
        case 0x171ed0u: goto label_171ed0;
        case 0x171ed8u: goto label_171ed8;
        case 0x171ee0u: goto label_171ee0;
        case 0x171ee8u: goto label_171ee8;
        case 0x171ef0u: goto label_171ef0;
        case 0x171ef8u: goto label_171ef8;
        case 0x171f00u: goto label_171f00;
        case 0x171f08u: goto label_171f08;
        case 0x172054u: goto label_172054;
        case 0x172070u: goto label_172070;
        case 0x17208cu: goto label_17208c;
        case 0x1720a8u: goto label_1720a8;
        case 0x1720c4u: goto label_1720c4;
        case 0x1720e0u: goto label_1720e0;
        case 0x1720fcu: goto label_1720fc;
        case 0x172118u: goto label_172118;
        case 0x172134u: goto label_172134;
        case 0x172150u: goto label_172150;
        case 0x17216cu: goto label_17216c;
        case 0x1721a4u: goto label_1721a4;
        case 0x1721dcu: goto label_1721dc;
        default: break;
    }

    ctx->pc = 0x171e94u;

label_171e94:
    // 0x171e94: 0xc05c968  jal         func_1725A0
label_171e98:
    if (ctx->pc == 0x171E98u) {
        ctx->pc = 0x171E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E94u;
        // 0x171e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E9Cu;
        goto label_171e9c;
    }
    ctx->pc = 0x171E94u;
    SET_GPR_U32(ctx, 31, 0x171E9Cu);
    ctx->pc = 0x171E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E94u;
    // 0x171e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x171E94u, 0x171E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E9Cu;
label_171e9c:
    // 0x171e9c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x171e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_171ea0:
    // 0x171ea0: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x171ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_171ea4:
    // 0x171ea4: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x171ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_171ea8:
    // 0x171ea8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_171eac:
    if (ctx->pc == 0x171EACu) {
        ctx->pc = 0x171EB0u;
        goto label_171eb0;
    }
    ctx->pc = 0x171EA8u;
    {
        const bool branch_taken_0x171ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171ea8) {
            ctx->pc = 0x171E94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171e94;
        }
    }
    ctx->pc = 0x171EB0u;
label_171eb0:
    // 0x171eb0: 0xc05c960  jal         func_172580
label_171eb4:
    if (ctx->pc == 0x171EB4u) {
        ctx->pc = 0x171EB8u;
        goto label_171eb8;
    }
    ctx->pc = 0x171EB0u;
    SET_GPR_U32(ctx, 31, 0x171EB8u);
    ctx->pc = 0x172580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172580u, 0x171EB0u, 0x171EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171EB8u;
label_171eb8:
    // 0x171eb8: 0xc05c960  jal         func_172580
label_171ebc:
    if (ctx->pc == 0x171EBCu) {
        ctx->pc = 0x171EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EB8u;
        // 0x171ebc: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EC0u;
        goto label_171ec0;
    }
    ctx->pc = 0x171EB8u;
    SET_GPR_U32(ctx, 31, 0x171EC0u);
    ctx->pc = 0x171EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EB8u;
    // 0x171ebc: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172580u, 0x171EB8u, 0x171EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171EC0u;
label_171ec0:
    // 0x171ec0: 0xc05c960  jal         func_172580
label_171ec4:
    if (ctx->pc == 0x171EC4u) {
        ctx->pc = 0x171EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EC0u;
        // 0x171ec4: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EC8u;
        goto label_171ec8;
    }
    ctx->pc = 0x171EC0u;
    SET_GPR_U32(ctx, 31, 0x171EC8u);
    ctx->pc = 0x171EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EC0u;
    // 0x171ec4: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172580u, 0x171EC0u, 0x171EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171EC8u;
label_171ec8:
    // 0x171ec8: 0xc05c960  jal         func_172580
label_171ecc:
    if (ctx->pc == 0x171ECCu) {
        ctx->pc = 0x171ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EC8u;
        // 0x171ecc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171ED0u;
        goto label_171ed0;
    }
    ctx->pc = 0x171EC8u;
    SET_GPR_U32(ctx, 31, 0x171ED0u);
    ctx->pc = 0x171ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EC8u;
    // 0x171ecc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172580u, 0x171EC8u, 0x171ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171ED0u;
label_171ed0:
    // 0x171ed0: 0xc05c960  jal         func_172580
label_171ed4:
    if (ctx->pc == 0x171ED4u) {
        ctx->pc = 0x171ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171ED0u;
        // 0x171ed4: 0x26240088  addiu       $a0, $s1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171ED8u;
        goto label_171ed8;
    }
    ctx->pc = 0x171ED0u;
    SET_GPR_U32(ctx, 31, 0x171ED8u);
    ctx->pc = 0x171ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171ED0u;
    // 0x171ed4: 0x26240088  addiu       $a0, $s1, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172580u, 0x171ED0u, 0x171ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171ED8u;
label_171ed8:
    // 0x171ed8: 0xc05c960  jal         func_172580
label_171edc:
    if (ctx->pc == 0x171EDCu) {
        ctx->pc = 0x171EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171ED8u;
        // 0x171edc: 0x26240098  addiu       $a0, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EE0u;
        goto label_171ee0;
    }
    ctx->pc = 0x171ED8u;
    SET_GPR_U32(ctx, 31, 0x171EE0u);
    ctx->pc = 0x171EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171ED8u;
    // 0x171edc: 0x26240098  addiu       $a0, $s1, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172580u, 0x171ED8u, 0x171EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171EE0u;
label_171ee0:
    // 0x171ee0: 0xc05c960  jal         func_172580
label_171ee4:
    if (ctx->pc == 0x171EE4u) {
        ctx->pc = 0x171EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EE0u;
        // 0x171ee4: 0x262400a8  addiu       $a0, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EE8u;
        goto label_171ee8;
    }
    ctx->pc = 0x171EE0u;
    SET_GPR_U32(ctx, 31, 0x171EE8u);
    ctx->pc = 0x171EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EE0u;
    // 0x171ee4: 0x262400a8  addiu       $a0, $s1, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172580u, 0x171EE0u, 0x171EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171EE8u;
label_171ee8:
    // 0x171ee8: 0xc05c960  jal         func_172580
label_171eec:
    if (ctx->pc == 0x171EECu) {
        ctx->pc = 0x171EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EE8u;
        // 0x171eec: 0x262400b8  addiu       $a0, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EF0u;
        goto label_171ef0;
    }
    ctx->pc = 0x171EE8u;
    SET_GPR_U32(ctx, 31, 0x171EF0u);
    ctx->pc = 0x171EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EE8u;
    // 0x171eec: 0x262400b8  addiu       $a0, $s1, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172580u, 0x171EE8u, 0x171EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171EF0u;
label_171ef0:
    // 0x171ef0: 0xc05c960  jal         func_172580
label_171ef4:
    if (ctx->pc == 0x171EF4u) {
        ctx->pc = 0x171EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EF0u;
        // 0x171ef4: 0x262400c8  addiu       $a0, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EF8u;
        goto label_171ef8;
    }
    ctx->pc = 0x171EF0u;
    SET_GPR_U32(ctx, 31, 0x171EF8u);
    ctx->pc = 0x171EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EF0u;
    // 0x171ef4: 0x262400c8  addiu       $a0, $s1, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172580u, 0x171EF0u, 0x171EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171EF8u;
label_171ef8:
    // 0x171ef8: 0xc05c960  jal         func_172580
label_171efc:
    if (ctx->pc == 0x171EFCu) {
        ctx->pc = 0x171EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EF8u;
        // 0x171efc: 0x262400d8  addiu       $a0, $s1, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F00u;
        goto label_171f00;
    }
    ctx->pc = 0x171EF8u;
    SET_GPR_U32(ctx, 31, 0x171F00u);
    ctx->pc = 0x171EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EF8u;
    // 0x171efc: 0x262400d8  addiu       $a0, $s1, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172580u, 0x171EF8u, 0x171F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171F00u;
label_171f00:
    // 0x171f00: 0xc05c960  jal         func_172580
label_171f04:
    if (ctx->pc == 0x171F04u) {
        ctx->pc = 0x171F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F00u;
        // 0x171f04: 0x262400e8  addiu       $a0, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F08u;
        goto label_171f08;
    }
    ctx->pc = 0x171F00u;
    SET_GPR_U32(ctx, 31, 0x171F08u);
    ctx->pc = 0x171F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171F00u;
    // 0x171f04: 0x262400e8  addiu       $a0, $s1, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172580u, 0x171F00u, 0x171F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171F08u;
label_171f08:
    // 0x171f08: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x171f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171f0c:
    // 0x171f0c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x171f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_171f10:
    // 0x171f10: 0x2442acd0  addiu       $v0, $v0, -0x5330
    ctx->pc = 0x171f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946000));
label_171f14:
    // 0x171f14: 0x3c110023  lui         $s1, 0x23
    ctx->pc = 0x171f14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)35 << 16));
label_171f18:
    // 0x171f18: 0x3c100023  lui         $s0, 0x23
    ctx->pc = 0x171f18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)35 << 16));
label_171f1c:
    // 0x171f1c: 0x3c190023  lui         $t9, 0x23
    ctx->pc = 0x171f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)35 << 16));
label_171f20:
    // 0x171f20: 0x3c180023  lui         $t8, 0x23
    ctx->pc = 0x171f20u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)35 << 16));
label_171f24:
    // 0x171f24: 0x3c0f0023  lui         $t7, 0x23
    ctx->pc = 0x171f24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)35 << 16));
label_171f28:
    // 0x171f28: 0x3c0e0023  lui         $t6, 0x23
    ctx->pc = 0x171f28u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)35 << 16));
label_171f2c:
    // 0x171f2c: 0x3c0d0023  lui         $t5, 0x23
    ctx->pc = 0x171f2cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)35 << 16));
label_171f30:
    // 0x171f30: 0x3c0b0023  lui         $t3, 0x23
    ctx->pc = 0x171f30u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)35 << 16));
label_171f34:
    // 0x171f34: 0x2631ac30  addiu       $s1, $s1, -0x53D0
    ctx->pc = 0x171f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945840));
label_171f38:
    // 0x171f38: 0xac621750  sw          $v0, 0x1750($v1)
    ctx->pc = 0x171f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5968), GPR_U32(ctx, 2));
label_171f3c:
    // 0x171f3c: 0x2610ac10  addiu       $s0, $s0, -0x53F0
    ctx->pc = 0x171f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945808));
label_171f40:
    // 0x171f40: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171f40u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171f44:
    // 0x171f44: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x171f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_171f48:
    // 0x171f48: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x171f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_171f4c:
    // 0x171f4c: 0x2739abf0  addiu       $t9, $t9, -0x5410
    ctx->pc = 0x171f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294945776));
label_171f50:
    // 0x171f50: 0x2718abd0  addiu       $t8, $t8, -0x5430
    ctx->pc = 0x171f50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294945744));
label_171f54:
    // 0x171f54: 0x25efabb0  addiu       $t7, $t7, -0x5450
    ctx->pc = 0x171f54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945712));
label_171f58:
    // 0x171f58: 0x25ceab90  addiu       $t6, $t6, -0x5470
    ctx->pc = 0x171f58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294945680));
label_171f5c:
    // 0x171f5c: 0x25adab70  addiu       $t5, $t5, -0x5490
    ctx->pc = 0x171f5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945648));
label_171f60:
    // 0x171f60: 0x256bab50  addiu       $t3, $t3, -0x54B0
    ctx->pc = 0x171f60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294945616));
label_171f64:
    // 0x171f64: 0x3c0a4000  lui         $t2, 0x4000
    ctx->pc = 0x171f64u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16384 << 16));
label_171f68:
    // 0x171f68: 0x3c094080  lui         $t1, 0x4080
    ctx->pc = 0x171f68u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16512 << 16));
label_171f6c:
    // 0x171f6c: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x171f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
label_171f70:
    // 0x171f70: 0xad911750  sw          $s1, 0x1750($t4)
    ctx->pc = 0x171f70u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 5968), GPR_U32(ctx, 17));
label_171f74:
    // 0x171f74: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x171f74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
label_171f78:
    // 0x171f78: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171f78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171f7c:
    // 0x171f7c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x171f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_171f80:
    // 0x171f80: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x171f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_171f84:
    // 0x171f84: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x171f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_171f88:
    // 0x171f88: 0xad822380  sw          $v0, 0x2380($t4)
    ctx->pc = 0x171f88u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 9088), GPR_U32(ctx, 2));
label_171f8c:
    // 0x171f8c: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171f8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171f90:
    // 0x171f90: 0xad902380  sw          $s0, 0x2380($t4)
    ctx->pc = 0x171f90u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 9088), GPR_U32(ctx, 16));
label_171f94:
    // 0x171f94: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171f94u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171f98:
    // 0x171f98: 0xad8224e0  sw          $v0, 0x24E0($t4)
    ctx->pc = 0x171f98u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 9440), GPR_U32(ctx, 2));
label_171f9c:
    // 0x171f9c: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171f9cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171fa0:
    // 0x171fa0: 0xad9924e0  sw          $t9, 0x24E0($t4)
    ctx->pc = 0x171fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 9440), GPR_U32(ctx, 25));
label_171fa4:
    // 0x171fa4: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171fa4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171fa8:
    // 0x171fa8: 0xad822520  sw          $v0, 0x2520($t4)
    ctx->pc = 0x171fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 9504), GPR_U32(ctx, 2));
label_171fac:
    // 0x171fac: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171facu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171fb0:
    // 0x171fb0: 0xad982520  sw          $t8, 0x2520($t4)
    ctx->pc = 0x171fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 9504), GPR_U32(ctx, 24));
label_171fb4:
    // 0x171fb4: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171fb4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171fb8:
    // 0x171fb8: 0xad822580  sw          $v0, 0x2580($t4)
    ctx->pc = 0x171fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 9600), GPR_U32(ctx, 2));
label_171fbc:
    // 0x171fbc: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171fbcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171fc0:
    // 0x171fc0: 0xad8f2580  sw          $t7, 0x2580($t4)
    ctx->pc = 0x171fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 9600), GPR_U32(ctx, 15));
label_171fc4:
    // 0x171fc4: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171fc4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171fc8:
    // 0x171fc8: 0xad822720  sw          $v0, 0x2720($t4)
    ctx->pc = 0x171fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 10016), GPR_U32(ctx, 2));
label_171fcc:
    // 0x171fcc: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171fccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171fd0:
    // 0x171fd0: 0xad8e2720  sw          $t6, 0x2720($t4)
    ctx->pc = 0x171fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 10016), GPR_U32(ctx, 14));
label_171fd4:
    // 0x171fd4: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171fd4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171fd8:
    // 0x171fd8: 0xad822b80  sw          $v0, 0x2B80($t4)
    ctx->pc = 0x171fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 11136), GPR_U32(ctx, 2));
label_171fdc:
    // 0x171fdc: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171fdcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171fe0:
    // 0x171fe0: 0xad8d2b80  sw          $t5, 0x2B80($t4)
    ctx->pc = 0x171fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 11136), GPR_U32(ctx, 13));
label_171fe4:
    // 0x171fe4: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x171fe4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171fe8:
    // 0x171fe8: 0xad8237b0  sw          $v0, 0x37B0($t4)
    ctx->pc = 0x171fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 14256), GPR_U32(ctx, 2));
label_171fec:
    // 0x171fec: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x171fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171ff0:
    // 0x171ff0: 0xac4b37b0  sw          $t3, 0x37B0($v0)
    ctx->pc = 0x171ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14256), GPR_U32(ctx, 11));
label_171ff4:
    // 0x171ff4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x171ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_171ff8:
    // 0x171ff8: 0xac4a5ff0  sw          $t2, 0x5FF0($v0)
    ctx->pc = 0x171ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24560), GPR_U32(ctx, 10));
label_171ffc:
    // 0x171ffc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x171ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172000:
    // 0x172000: 0xac495ff4  sw          $t1, 0x5FF4($v0)
    ctx->pc = 0x172000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24564), GPR_U32(ctx, 9));
label_172004:
    // 0x172004: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x172004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172008:
    // 0x172008: 0xac485ff8  sw          $t0, 0x5FF8($v0)
    ctx->pc = 0x172008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24568), GPR_U32(ctx, 8));
label_17200c:
    // 0x17200c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x17200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172010:
    // 0x172010: 0xac475ffc  sw          $a3, 0x5FFC($v0)
    ctx->pc = 0x172010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24572), GPR_U32(ctx, 7));
label_172014:
    // 0x172014: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x172014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172018:
    // 0x172018: 0xac456000  sw          $a1, 0x6000($v0)
    ctx->pc = 0x172018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24576), GPR_U32(ctx, 5));
label_17201c:
    // 0x17201c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x17201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172020:
    // 0x172020: 0xac446004  sw          $a0, 0x6004($v0)
    ctx->pc = 0x172020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24580), GPR_U32(ctx, 4));
label_172024:
    // 0x172024: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x172024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172028:
    // 0x172028: 0xac406008  sw          $zero, 0x6008($v0)
    ctx->pc = 0x172028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24584), GPR_U32(ctx, 0));
label_17202c:
    // 0x17202c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x17202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172030:
    // 0x172030: 0xac436018  sw          $v1, 0x6018($v0)
    ctx->pc = 0x172030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24600), GPR_U32(ctx, 3));
label_172034:
    // 0x172034: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x172034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172038:
    // 0x172038: 0xac40601c  sw          $zero, 0x601C($v0)
    ctx->pc = 0x172038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24604), GPR_U32(ctx, 0));
label_17203c:
    // 0x17203c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x17203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172040:
    // 0x172040: 0x8c5914e0  lw          $t9, 0x14E0($v0)
    ctx->pc = 0x172040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5344)));
label_172044:
    // 0x172044: 0x244414d0  addiu       $a0, $v0, 0x14D0
    ctx->pc = 0x172044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5328));
label_172048:
    // 0x172048: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x172048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_17204c:
    // 0x17204c: 0x320f809  jalr        $t9
label_172050:
    if (ctx->pc == 0x172050u) {
        ctx->pc = 0x172050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17204Cu;
        // 0x172050: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172054u;
        goto label_172054;
    }
    ctx->pc = 0x17204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172054u);
        ctx->pc = 0x172050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17204Cu;
        // 0x172050: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17204Cu, 0x172054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172054u;
label_172054:
    // 0x172054: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x172054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172058:
    // 0x172058: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x172058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_17205c:
    // 0x17205c: 0x8c591520  lw          $t9, 0x1520($v0)
    ctx->pc = 0x17205cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5408)));
label_172060:
    // 0x172060: 0x24441510  addiu       $a0, $v0, 0x1510
    ctx->pc = 0x172060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5392));
label_172064:
    // 0x172064: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x172064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_172068:
    // 0x172068: 0x320f809  jalr        $t9
label_17206c:
    if (ctx->pc == 0x17206Cu) {
        ctx->pc = 0x17206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172068u;
        // 0x17206c: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172070u;
        goto label_172070;
    }
    ctx->pc = 0x172068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172070u);
        ctx->pc = 0x17206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172068u;
        // 0x17206c: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172068u, 0x172070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172070u;
label_172070:
    // 0x172070: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x172070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172074:
    // 0x172074: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x172074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_172078:
    // 0x172078: 0x8c591630  lw          $t9, 0x1630($v0)
    ctx->pc = 0x172078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5680)));
label_17207c:
    // 0x17207c: 0x24441620  addiu       $a0, $v0, 0x1620
    ctx->pc = 0x17207cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5664));
label_172080:
    // 0x172080: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x172080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_172084:
    // 0x172084: 0x320f809  jalr        $t9
label_172088:
    if (ctx->pc == 0x172088u) {
        ctx->pc = 0x172088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172084u;
        // 0x172088: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17208Cu;
        goto label_17208c;
    }
    ctx->pc = 0x172084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17208Cu);
        ctx->pc = 0x172088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172084u;
        // 0x172088: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172084u, 0x17208Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17208Cu;
label_17208c:
    // 0x17208c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x17208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172090:
    // 0x172090: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x172090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_172094:
    // 0x172094: 0x8c591750  lw          $t9, 0x1750($v0)
    ctx->pc = 0x172094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5968)));
label_172098:
    // 0x172098: 0x24441740  addiu       $a0, $v0, 0x1740
    ctx->pc = 0x172098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_17209c:
    // 0x17209c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x17209cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1720a0:
    // 0x1720a0: 0x320f809  jalr        $t9
label_1720a4:
    if (ctx->pc == 0x1720A4u) {
        ctx->pc = 0x1720A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720A0u;
        // 0x1720a4: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1720A8u;
        goto label_1720a8;
    }
    ctx->pc = 0x1720A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1720A8u);
        ctx->pc = 0x1720A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720A0u;
        // 0x1720a4: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1720A0u, 0x1720A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1720A8u;
label_1720a8:
    // 0x1720a8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1720a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1720ac:
    // 0x1720ac: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1720acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1720b0:
    // 0x1720b0: 0x8c592380  lw          $t9, 0x2380($v0)
    ctx->pc = 0x1720b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9088)));
label_1720b4:
    // 0x1720b4: 0x24442370  addiu       $a0, $v0, 0x2370
    ctx->pc = 0x1720b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9072));
label_1720b8:
    // 0x1720b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1720b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1720bc:
    // 0x1720bc: 0x320f809  jalr        $t9
label_1720c0:
    if (ctx->pc == 0x1720C0u) {
        ctx->pc = 0x1720C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720BCu;
        // 0x1720c0: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1720C4u;
        goto label_1720c4;
    }
    ctx->pc = 0x1720BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1720C4u);
        ctx->pc = 0x1720C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720BCu;
        // 0x1720c0: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1720BCu, 0x1720C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1720C4u;
label_1720c4:
    // 0x1720c4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1720c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1720c8:
    // 0x1720c8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1720c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1720cc:
    // 0x1720cc: 0x8c5924e0  lw          $t9, 0x24E0($v0)
    ctx->pc = 0x1720ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9440)));
label_1720d0:
    // 0x1720d0: 0x244424d0  addiu       $a0, $v0, 0x24D0
    ctx->pc = 0x1720d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9424));
label_1720d4:
    // 0x1720d4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1720d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1720d8:
    // 0x1720d8: 0x320f809  jalr        $t9
label_1720dc:
    if (ctx->pc == 0x1720DCu) {
        ctx->pc = 0x1720DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720D8u;
        // 0x1720dc: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1720E0u;
        goto label_1720e0;
    }
    ctx->pc = 0x1720D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1720E0u);
        ctx->pc = 0x1720DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720D8u;
        // 0x1720dc: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1720D8u, 0x1720E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1720E0u;
label_1720e0:
    // 0x1720e0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1720e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1720e4:
    // 0x1720e4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1720e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1720e8:
    // 0x1720e8: 0x8c592520  lw          $t9, 0x2520($v0)
    ctx->pc = 0x1720e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9504)));
label_1720ec:
    // 0x1720ec: 0x24442510  addiu       $a0, $v0, 0x2510
    ctx->pc = 0x1720ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9488));
label_1720f0:
    // 0x1720f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1720f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1720f4:
    // 0x1720f4: 0x320f809  jalr        $t9
label_1720f8:
    if (ctx->pc == 0x1720F8u) {
        ctx->pc = 0x1720F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720F4u;
        // 0x1720f8: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1720FCu;
        goto label_1720fc;
    }
    ctx->pc = 0x1720F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1720FCu);
        ctx->pc = 0x1720F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720F4u;
        // 0x1720f8: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1720F4u, 0x1720FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1720FCu;
label_1720fc:
    // 0x1720fc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1720fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172100:
    // 0x172100: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x172100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_172104:
    // 0x172104: 0x8c592580  lw          $t9, 0x2580($v0)
    ctx->pc = 0x172104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9600)));
label_172108:
    // 0x172108: 0x24442570  addiu       $a0, $v0, 0x2570
    ctx->pc = 0x172108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_17210c:
    // 0x17210c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x17210cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_172110:
    // 0x172110: 0x320f809  jalr        $t9
label_172114:
    if (ctx->pc == 0x172114u) {
        ctx->pc = 0x172114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172110u;
        // 0x172114: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172118u;
        goto label_172118;
    }
    ctx->pc = 0x172110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172118u);
        ctx->pc = 0x172114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172110u;
        // 0x172114: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172110u, 0x172118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172118u;
label_172118:
    // 0x172118: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x172118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_17211c:
    // 0x17211c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x17211cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_172120:
    // 0x172120: 0x8c592720  lw          $t9, 0x2720($v0)
    ctx->pc = 0x172120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10016)));
label_172124:
    // 0x172124: 0x24442710  addiu       $a0, $v0, 0x2710
    ctx->pc = 0x172124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
label_172128:
    // 0x172128: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x172128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_17212c:
    // 0x17212c: 0x320f809  jalr        $t9
label_172130:
    if (ctx->pc == 0x172130u) {
        ctx->pc = 0x172130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17212Cu;
        // 0x172130: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172134u;
        goto label_172134;
    }
    ctx->pc = 0x17212Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172134u);
        ctx->pc = 0x172130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17212Cu;
        // 0x172130: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17212Cu, 0x172134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172134u;
label_172134:
    // 0x172134: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x172134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172138:
    // 0x172138: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x172138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_17213c:
    // 0x17213c: 0x8c592b80  lw          $t9, 0x2B80($v0)
    ctx->pc = 0x17213cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11136)));
label_172140:
    // 0x172140: 0x24442b70  addiu       $a0, $v0, 0x2B70
    ctx->pc = 0x172140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11120));
label_172144:
    // 0x172144: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x172144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_172148:
    // 0x172148: 0x320f809  jalr        $t9
label_17214c:
    if (ctx->pc == 0x17214Cu) {
        ctx->pc = 0x17214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172148u;
        // 0x17214c: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172150u;
        goto label_172150;
    }
    ctx->pc = 0x172148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172150u);
        ctx->pc = 0x17214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172148u;
        // 0x17214c: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172148u, 0x172150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172150u;
label_172150:
    // 0x172150: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x172150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172154:
    // 0x172154: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x172154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_172158:
    // 0x172158: 0x8c5937b0  lw          $t9, 0x37B0($v0)
    ctx->pc = 0x172158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14256)));
label_17215c:
    // 0x17215c: 0x244437a0  addiu       $a0, $v0, 0x37A0
    ctx->pc = 0x17215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14240));
label_172160:
    // 0x172160: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x172160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_172164:
    // 0x172164: 0x320f809  jalr        $t9
label_172168:
    if (ctx->pc == 0x172168u) {
        ctx->pc = 0x172168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172164u;
        // 0x172168: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17216Cu;
        goto label_17216c;
    }
    ctx->pc = 0x172164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17216Cu);
        ctx->pc = 0x172168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172164u;
        // 0x172168: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172164u, 0x17216Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17216Cu;
label_17216c:
    // 0x17216c: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x17216cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_172170:
    // 0x172170: 0x3c03c1a8  lui         $v1, 0xC1A8
    ctx->pc = 0x172170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49576 << 16));
label_172174:
    // 0x172174: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x172174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_172178:
    // 0x172178: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x172178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_17217c:
    // 0x17217c: 0x3c02c1b0  lui         $v0, 0xC1B0
    ctx->pc = 0x17217cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49584 << 16));
label_172180:
    // 0x172180: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x172180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_172184:
    // 0x172184: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x172184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_172188:
    // 0x172188: 0x46006c46  mov.s       $f17, $f13
    ctx->pc = 0x172188u;
    ctx->f[17] = FPU_MOV_S(ctx->f[13]);
label_17218c:
    // 0x17218c: 0x3c02c190  lui         $v0, 0xC190
    ctx->pc = 0x17218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49552 << 16));
label_172190:
    // 0x172190: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x172190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172194:
    // 0x172194: 0x3c0241a8  lui         $v0, 0x41A8
    ctx->pc = 0x172194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16808 << 16));
label_172198:
    // 0x172198: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x172198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_17219c:
    // 0x17219c: 0xc05de08  jal         func_177820
label_1721a0:
    if (ctx->pc == 0x1721A0u) {
        ctx->pc = 0x1721A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17219Cu;
        // 0x1721a0: 0x24642370  addiu       $a0, $v1, 0x2370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 9072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1721A4u;
        goto label_1721a4;
    }
    ctx->pc = 0x17219Cu;
    SET_GPR_U32(ctx, 31, 0x1721A4u);
    ctx->pc = 0x1721A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17219Cu;
    // 0x1721a0: 0x24642370  addiu       $a0, $v1, 0x2370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 9072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177820u, 0x17219Cu, 0x1721A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721A4u;
label_1721a4:
    // 0x1721a4: 0x3c02c1b0  lui         $v0, 0xC1B0
    ctx->pc = 0x1721a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49584 << 16));
label_1721a8:
    // 0x1721a8: 0x3c03c1a8  lui         $v1, 0xC1A8
    ctx->pc = 0x1721a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49576 << 16));
label_1721ac:
    // 0x1721ac: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x1721acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1721b0:
    // 0x1721b0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1721b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1721b4:
    // 0x1721b4: 0x3c02c190  lui         $v0, 0xC190
    ctx->pc = 0x1721b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49552 << 16));
label_1721b8:
    // 0x1721b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1721b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1721bc:
    // 0x1721bc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1721bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1721c0:
    // 0x1721c0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x1721c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_1721c4:
    // 0x1721c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1721c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1721c8:
    // 0x1721c8: 0x3c0241a8  lui         $v0, 0x41A8
    ctx->pc = 0x1721c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16808 << 16));
label_1721cc:
    // 0x1721cc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1721ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1721d0:
    // 0x1721d0: 0x246437a0  addiu       $a0, $v1, 0x37A0
    ctx->pc = 0x1721d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 14240));
label_1721d4:
    // 0x1721d4: 0xc05e608  jal         func_179820
label_1721d8:
    if (ctx->pc == 0x1721D8u) {
        ctx->pc = 0x1721D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721D4u;
        // 0x1721d8: 0x46006c46  mov.s       $f17, $f13 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1721DCu;
        goto label_1721dc;
    }
    ctx->pc = 0x1721D4u;
    SET_GPR_U32(ctx, 31, 0x1721DCu);
    ctx->pc = 0x1721D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1721D4u;
    // 0x1721d8: 0x46006c46  mov.s       $f17, $f13 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179820u, 0x1721D4u, 0x1721DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721DCu;
label_1721dc:
    // 0x1721dc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1721dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1721e0:
    // 0x1721e0: 0xa0406031  sb          $zero, 0x6031($v0)
    ctx->pc = 0x1721e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24625), (uint8_t)GPR_U32(ctx, 0));
label_1721e4:
    // 0x1721e4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1721e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1721e8:
    // 0x1721e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1721e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1721ec:
    // 0x1721ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1721ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1721f0:
    // 0x1721f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1721f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1721f4:
    // 0x1721f4: 0x3e00008  jr          $ra
label_1721f8:
    if (ctx->pc == 0x1721F8u) {
        ctx->pc = 0x1721F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721F4u;
        // 0x1721f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1721FCu;
        goto label_fallthrough_0x1721f4;
    }
    ctx->pc = 0x1721F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1721F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721F4u;
        // 0x1721f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1721F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1721f4:
    ctx->pc = 0x1721FCu;
}
