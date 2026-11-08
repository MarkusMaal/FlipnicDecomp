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

// Function: FUN_001a0b20
// Address: 0x1a0b20 - 0x1a0d5c
void FUN_001a0b20_0x1a0b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0b20_0x1a0b20");
#endif

    switch (ctx->pc) {
        case 0x1a0b38u: goto label_1a0b38;
        case 0x1a0b5cu: goto label_1a0b5c;
        case 0x1a0b70u: goto label_1a0b70;
        case 0x1a0b84u: goto label_1a0b84;
        case 0x1a0bbcu: goto label_1a0bbc;
        case 0x1a0be8u: goto label_1a0be8;
        case 0x1a0c14u: goto label_1a0c14;
        case 0x1a0c44u: goto label_1a0c44;
        case 0x1a0c58u: goto label_1a0c58;
        case 0x1a0c68u: goto label_1a0c68;
        case 0x1a0c7cu: goto label_1a0c7c;
        case 0x1a0c84u: goto label_1a0c84;
        case 0x1a0d28u: goto label_1a0d28;
        default: break;
    }

    ctx->pc = 0x1a0b20u;

    // 0x1a0b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0b2c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1a0b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1a0b30: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A0B30u;
    SET_GPR_U32(ctx, 31, 0x1A0B38u);
    ctx->pc = 0x1A0B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B30u;
    // 0x1a0b34: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A0B30u, 0x1A0B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B38u;
label_1a0b38:
    // 0x1a0b38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0b3c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1a0b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1a0b40: 0x2463b360  addiu       $v1, $v1, -0x4CA0
    ctx->pc = 0x1a0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947680));
    // 0x1a0b44: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1a0b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1a0b48: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1a0b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1a0b4c: 0xac43031c  sw          $v1, 0x31C($v0)
    ctx->pc = 0x1a0b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 796), GPR_U32(ctx, 3));
    // 0x1a0b50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0b54: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1A0B54u;
    SET_GPR_U32(ctx, 31, 0x1A0B5Cu);
    ctx->pc = 0x1A0B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B54u;
    // 0x1a0b58: 0x244406c0  addiu       $a0, $v0, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1A0B54u, 0x1A0B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B5Cu;
label_1a0b5c:
    // 0x1a0b5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0b60: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1a0b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1a0b64: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1a0b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1a0b68: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1A0B68u;
    SET_GPR_U32(ctx, 31, 0x1A0B70u);
    ctx->pc = 0x1A0B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B68u;
    // 0x1a0b6c: 0x24440760  addiu       $a0, $v0, 0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1A0B68u, 0x1A0B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B70u;
label_1a0b70:
    // 0x1a0b70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0b74: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1a0b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1a0b78: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1a0b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1a0b7c: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1A0B7Cu;
    SET_GPR_U32(ctx, 31, 0x1A0B84u);
    ctx->pc = 0x1A0B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B7Cu;
    // 0x1a0b80: 0x24440800  addiu       $a0, $v0, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1A0B7Cu, 0x1A0B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B84u;
label_1a0b84:
    // 0x1a0b84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0b88: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1a0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1a0b8c: 0x2463b4d0  addiu       $v1, $v1, -0x4B30
    ctx->pc = 0x1a0b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948048));
    // 0x1a0b90: 0xac4308bc  sw          $v1, 0x8BC($v0)
    ctx->pc = 0x1a0b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2236), GPR_U32(ctx, 3));
    // 0x1a0b94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0b98: 0xac4008a0  sw          $zero, 0x8A0($v0)
    ctx->pc = 0x1a0b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2208), GPR_U32(ctx, 0));
    // 0x1a0b9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0ba0: 0xa04008b9  sb          $zero, 0x8B9($v0)
    ctx->pc = 0x1a0ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2233), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0ba4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0ba8: 0x244208c0  addiu       $v0, $v0, 0x8C0
    ctx->pc = 0x1a0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2240));
    // 0x1a0bac: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1a0bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1a0bb0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a0bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a0bb4: 0xc045c98  jal         func_117260
    ctx->pc = 0x1A0BB4u;
    SET_GPR_U32(ctx, 31, 0x1A0BBCu);
    ctx->pc = 0x1A0BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BB4u;
    // 0x1a0bb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1A0BB4u, 0x1A0BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BBCu;
label_1a0bbc:
    // 0x1a0bbc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1a0bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1a0bc0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a0bc4: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1a0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1a0bc8: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x1a0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x1a0bcc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a0bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1a0bd0: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1a0bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1a0bd4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a0bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a0bd8: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1a0bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1a0bdc: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a0be0: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1A0BE0u;
    SET_GPR_U32(ctx, 31, 0x1A0BE8u);
    ctx->pc = 0x1A0BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BE0u;
    // 0x1a0be4: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1A0BE0u, 0x1A0BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BE8u;
label_1a0be8:
    // 0x1a0be8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a0bec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a0becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0bf0: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x1a0bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x1a0bf4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a0bf8: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x1a0bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x1a0bfc: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a0bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a0c00: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x1a0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x1a0c04: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a0c08: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1a0c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x1a0c0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0c10: 0x244309dc  addiu       $v1, $v0, 0x9DC
    ctx->pc = 0x1a0c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
label_1a0c14:
    // 0x1a0c14: 0xa0600020  sb          $zero, 0x20($v1)
    ctx->pc = 0x1a0c14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0c18: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1a0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1a0c1c: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1a0c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1a0c20: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a0c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0c24: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1a0c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1a0c28: 0x24820bbc  addiu       $v0, $a0, 0xBBC
    ctx->pc = 0x1a0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3004));
    // 0x1a0c2c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a0c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a0c30: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0C30u;
    {
        const bool branch_taken_0x1a0c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c30) {
            ctx->pc = 0x1A0C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0c14;
        }
    }
    ctx->pc = 0x1A0C38u;
    // 0x1a0c38: 0x24840760  addiu       $a0, $a0, 0x760
    ctx->pc = 0x1a0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1888));
    // 0x1a0c3c: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A0C3Cu;
    SET_GPR_U32(ctx, 31, 0x1A0C44u);
    ctx->pc = 0x1A0C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C3Cu;
    // 0x1a0c40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A0C3Cu, 0x1A0C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C44u;
label_1a0c44:
    // 0x1a0c44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0c48: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a0c4c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a0c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a0c50: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A0C50u;
    SET_GPR_U32(ctx, 31, 0x1A0C58u);
    ctx->pc = 0x1A0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C50u;
    // 0x1a0c54: 0x24440760  addiu       $a0, $v0, 0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A0C50u, 0x1A0C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C58u;
label_1a0c58:
    // 0x1a0c58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0c5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0c60: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A0C60u;
    SET_GPR_U32(ctx, 31, 0x1A0C68u);
    ctx->pc = 0x1A0C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C60u;
    // 0x1a0c64: 0x24440800  addiu       $a0, $v0, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A0C60u, 0x1A0C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C68u;
label_1a0c68:
    // 0x1a0c68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0c6c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a0c70: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a0c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a0c74: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A0C74u;
    SET_GPR_U32(ctx, 31, 0x1A0C7Cu);
    ctx->pc = 0x1A0C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C74u;
    // 0x1a0c78: 0x24440800  addiu       $a0, $v0, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A0C74u, 0x1A0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C7Cu;
label_1a0c7c:
    // 0x1a0c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c84:
    // 0x1a0c84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0c88: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1a0c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1a0c8c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1a0c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a0c90: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0c94: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0c98: 0xac6409e4  sw          $a0, 0x9E4($v1)
    ctx->pc = 0x1a0c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2532), GPR_U32(ctx, 4));
    // 0x1a0c9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0ca0: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0ca4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0ca8: 0xac640a14  sw          $a0, 0xA14($v1)
    ctx->pc = 0x1a0ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2580), GPR_U32(ctx, 4));
    // 0x1a0cac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0cb0: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0cb4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0cb8: 0xac640a44  sw          $a0, 0xA44($v1)
    ctx->pc = 0x1a0cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2628), GPR_U32(ctx, 4));
    // 0x1a0cbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0cc0: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0cc4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0cc8: 0xac640a74  sw          $a0, 0xA74($v1)
    ctx->pc = 0x1a0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2676), GPR_U32(ctx, 4));
    // 0x1a0ccc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0cd0: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0cd4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0cd8: 0xac640aa4  sw          $a0, 0xAA4($v1)
    ctx->pc = 0x1a0cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2724), GPR_U32(ctx, 4));
    // 0x1a0cdc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0ce0: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0ce4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0ce8: 0xac640ad4  sw          $a0, 0xAD4($v1)
    ctx->pc = 0x1a0ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2772), GPR_U32(ctx, 4));
    // 0x1a0cec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0cf0: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0cf4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0cf8: 0xac640b04  sw          $a0, 0xB04($v1)
    ctx->pc = 0x1a0cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2820), GPR_U32(ctx, 4));
    // 0x1a0cfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0d00: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0d04: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0d08: 0xac640b34  sw          $a0, 0xB34($v1)
    ctx->pc = 0x1a0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2868), GPR_U32(ctx, 4));
    // 0x1a0d0c: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1A0D0Cu;
    {
        const bool branch_taken_0x1a0d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D0Cu;
        // 0x1a0d10: 0x24c60180  addiu       $a2, $a2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d0c) {
            ctx->pc = 0x1A0C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0c84;
        }
    }
    ctx->pc = 0x1A0D14u;
    // 0x1a0d14: 0x28a1000a  slti        $at, $a1, 0xA
    ctx->pc = 0x1a0d14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a0d18: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0D18u;
    {
        const bool branch_taken_0x1a0d18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D18u;
        // 0x1a0d1c: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d18) {
            ctx->pc = 0x1A0D48u;
            goto label_1a0d48;
        }
    }
    ctx->pc = 0x1A0D20u;
    // 0x1a0d20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a0d24: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1a0d24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a0d28:
    // 0x1a0d28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0d2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a0d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a0d30: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x1a0d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a0d34: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0d38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0d3c: 0xac6409e4  sw          $a0, 0x9E4($v1)
    ctx->pc = 0x1a0d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2532), GPR_U32(ctx, 4));
    // 0x1a0d40: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A0D40u;
    {
        const bool branch_taken_0x1a0d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D40u;
        // 0x1a0d44: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d40) {
            ctx->pc = 0x1A0D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0d28;
        }
    }
    ctx->pc = 0x1A0D48u;
label_1a0d48:
    // 0x1a0d48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0d50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0d54: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D54u;
        // 0x1a0d58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0D5Cu;
}
