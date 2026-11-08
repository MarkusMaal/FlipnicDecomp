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

// Function: FUN_001e1b10
// Address: 0x1e1b10 - 0x1e1bf0
void FUN_001e1b10_0x1e1b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1b10_0x1e1b10");
#endif

    switch (ctx->pc) {
        case 0x1e1b10u: goto label_1e1b10;
        case 0x1e1b14u: goto label_1e1b14;
        case 0x1e1b18u: goto label_1e1b18;
        case 0x1e1b1cu: goto label_1e1b1c;
        case 0x1e1b20u: goto label_1e1b20;
        case 0x1e1b24u: goto label_1e1b24;
        case 0x1e1b28u: goto label_1e1b28;
        case 0x1e1b2cu: goto label_1e1b2c;
        case 0x1e1b30u: goto label_1e1b30;
        case 0x1e1b34u: goto label_1e1b34;
        case 0x1e1b38u: goto label_1e1b38;
        case 0x1e1b3cu: goto label_1e1b3c;
        case 0x1e1b40u: goto label_1e1b40;
        case 0x1e1b44u: goto label_1e1b44;
        case 0x1e1b48u: goto label_1e1b48;
        case 0x1e1b4cu: goto label_1e1b4c;
        case 0x1e1b50u: goto label_1e1b50;
        case 0x1e1b54u: goto label_1e1b54;
        case 0x1e1b58u: goto label_1e1b58;
        case 0x1e1b5cu: goto label_1e1b5c;
        case 0x1e1b60u: goto label_1e1b60;
        case 0x1e1b64u: goto label_1e1b64;
        case 0x1e1b68u: goto label_1e1b68;
        case 0x1e1b6cu: goto label_1e1b6c;
        case 0x1e1b70u: goto label_1e1b70;
        case 0x1e1b74u: goto label_1e1b74;
        case 0x1e1b78u: goto label_1e1b78;
        case 0x1e1b7cu: goto label_1e1b7c;
        case 0x1e1b80u: goto label_1e1b80;
        case 0x1e1b84u: goto label_1e1b84;
        case 0x1e1b88u: goto label_1e1b88;
        case 0x1e1b8cu: goto label_1e1b8c;
        case 0x1e1b90u: goto label_1e1b90;
        case 0x1e1b94u: goto label_1e1b94;
        case 0x1e1b98u: goto label_1e1b98;
        case 0x1e1b9cu: goto label_1e1b9c;
        case 0x1e1ba0u: goto label_1e1ba0;
        case 0x1e1ba4u: goto label_1e1ba4;
        case 0x1e1ba8u: goto label_1e1ba8;
        case 0x1e1bacu: goto label_1e1bac;
        case 0x1e1bb0u: goto label_1e1bb0;
        case 0x1e1bb4u: goto label_1e1bb4;
        case 0x1e1bb8u: goto label_1e1bb8;
        case 0x1e1bbcu: goto label_1e1bbc;
        case 0x1e1bc0u: goto label_1e1bc0;
        case 0x1e1bc4u: goto label_1e1bc4;
        case 0x1e1bc8u: goto label_1e1bc8;
        case 0x1e1bccu: goto label_1e1bcc;
        case 0x1e1bd0u: goto label_1e1bd0;
        case 0x1e1bd4u: goto label_1e1bd4;
        case 0x1e1bd8u: goto label_1e1bd8;
        case 0x1e1bdcu: goto label_1e1bdc;
        case 0x1e1be0u: goto label_1e1be0;
        case 0x1e1be4u: goto label_1e1be4;
        case 0x1e1be8u: goto label_1e1be8;
        case 0x1e1becu: goto label_1e1bec;
        default: break;
    }

    ctx->pc = 0x1e1b10u;

label_1e1b10:
    // 0x1e1b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e1b14:
    // 0x1e1b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e1b18:
    // 0x1e1b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1b1c:
    // 0x1e1b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1b20:
    // 0x1e1b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b24:
    // 0x1e1b24: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_1e1b28:
    if (ctx->pc == 0x1E1B28u) {
        ctx->pc = 0x1E1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B24u;
        // 0x1e1b28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B2Cu;
        goto label_1e1b2c;
    }
    ctx->pc = 0x1E1B24u;
    {
        const bool branch_taken_0x1e1b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B24u;
        // 0x1e1b28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b24) {
            ctx->pc = 0x1E1BD8u;
            goto label_1e1bd8;
        }
    }
    ctx->pc = 0x1E1B2Cu;
label_1e1b2c:
    // 0x1e1b2c: 0x8f828724  lw          $v0, -0x78DC($gp)
    ctx->pc = 0x1e1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936356)));
label_1e1b30:
    // 0x1e1b30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e1b34:
    // 0x1e1b34: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_1e1b38:
    if (ctx->pc == 0x1E1B38u) {
        ctx->pc = 0x1E1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B34u;
        // 0x1e1b38: 0xaf828724  sw          $v0, -0x78DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B3Cu;
        goto label_1e1b3c;
    }
    ctx->pc = 0x1E1B34u;
    {
        const bool branch_taken_0x1e1b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B34u;
        // 0x1e1b38: 0xaf828724  sw          $v0, -0x78DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b34) {
            ctx->pc = 0x1E1BC0u;
            goto label_1e1bc0;
        }
    }
    ctx->pc = 0x1E1B3Cu;
label_1e1b3c:
    // 0x1e1b3c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1b40:
    // 0x1e1b40: 0xc048208  jal         func_120820
label_1e1b44:
    if (ctx->pc == 0x1E1B44u) {
        ctx->pc = 0x1E1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B40u;
        // 0x1e1b44: 0x2484b510  addiu       $a0, $a0, -0x4AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B48u;
        goto label_1e1b48;
    }
    ctx->pc = 0x1E1B40u;
    SET_GPR_U32(ctx, 31, 0x1E1B48u);
    ctx->pc = 0x1E1B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B40u;
    // 0x1e1b44: 0x2484b510  addiu       $a0, $a0, -0x4AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x1E1B40u, 0x1E1B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B48u;
label_1e1b48:
    // 0x1e1b48: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1b4c:
    // 0x1e1b4c: 0xc048208  jal         func_120820
label_1e1b50:
    if (ctx->pc == 0x1E1B50u) {
        ctx->pc = 0x1E1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B4Cu;
        // 0x1e1b50: 0x2484b5d0  addiu       $a0, $a0, -0x4A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B54u;
        goto label_1e1b54;
    }
    ctx->pc = 0x1E1B4Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B54u);
    ctx->pc = 0x1E1B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B4Cu;
    // 0x1e1b50: 0x2484b5d0  addiu       $a0, $a0, -0x4A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x1E1B4Cu, 0x1E1B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B54u;
label_1e1b54:
    // 0x1e1b54: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1b58:
    // 0x1e1b58: 0xc048208  jal         func_120820
label_1e1b5c:
    if (ctx->pc == 0x1E1B5Cu) {
        ctx->pc = 0x1E1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B58u;
        // 0x1e1b5c: 0x2484b570  addiu       $a0, $a0, -0x4A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B60u;
        goto label_1e1b60;
    }
    ctx->pc = 0x1E1B58u;
    SET_GPR_U32(ctx, 31, 0x1E1B60u);
    ctx->pc = 0x1E1B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B58u;
    // 0x1e1b5c: 0x2484b570  addiu       $a0, $a0, -0x4A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x1E1B58u, 0x1E1B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B60u;
label_1e1b60:
    // 0x1e1b60: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1b64:
    // 0x1e1b64: 0x2484b4a0  addiu       $a0, $a0, -0x4B60
    ctx->pc = 0x1e1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948000));
label_1e1b68:
    // 0x1e1b68: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x1e1b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1e1b6c:
    // 0x1e1b6c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e1b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e1b70:
    // 0x1e1b70: 0x320f809  jalr        $t9
label_1e1b74:
    if (ctx->pc == 0x1E1B74u) {
        ctx->pc = 0x1E1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B70u;
        // 0x1e1b74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B78u;
        goto label_1e1b78;
    }
    ctx->pc = 0x1E1B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1B78u);
        ctx->pc = 0x1E1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B70u;
        // 0x1e1b74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1B70u, 0x1E1B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1B78u;
label_1e1b78:
    // 0x1e1b78: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1b7c:
    // 0x1e1b7c: 0x2484b510  addiu       $a0, $a0, -0x4AF0
    ctx->pc = 0x1e1b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948112));
label_1e1b80:
    // 0x1e1b80: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1e1b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e1b84:
    // 0x1e1b84: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e1b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e1b88:
    // 0x1e1b88: 0x320f809  jalr        $t9
label_1e1b8c:
    if (ctx->pc == 0x1E1B8Cu) {
        ctx->pc = 0x1E1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B88u;
        // 0x1e1b8c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B90u;
        goto label_1e1b90;
    }
    ctx->pc = 0x1E1B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1B90u);
        ctx->pc = 0x1E1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B88u;
        // 0x1e1b8c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1B88u, 0x1E1B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1B90u;
label_1e1b90:
    // 0x1e1b90: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1b94:
    // 0x1e1b94: 0x2484b5d0  addiu       $a0, $a0, -0x4A30
    ctx->pc = 0x1e1b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948304));
label_1e1b98:
    // 0x1e1b98: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1e1b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e1b9c:
    // 0x1e1b9c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e1b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e1ba0:
    // 0x1e1ba0: 0x320f809  jalr        $t9
label_1e1ba4:
    if (ctx->pc == 0x1E1BA4u) {
        ctx->pc = 0x1E1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BA0u;
        // 0x1e1ba4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1BA8u;
        goto label_1e1ba8;
    }
    ctx->pc = 0x1E1BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1BA8u);
        ctx->pc = 0x1E1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BA0u;
        // 0x1e1ba4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1BA0u, 0x1E1BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1BA8u;
label_1e1ba8:
    // 0x1e1ba8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1bac:
    // 0x1e1bac: 0x2484b570  addiu       $a0, $a0, -0x4A90
    ctx->pc = 0x1e1bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948208));
label_1e1bb0:
    // 0x1e1bb0: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1e1bb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e1bb4:
    // 0x1e1bb4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e1bb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e1bb8:
    // 0x1e1bb8: 0x320f809  jalr        $t9
label_1e1bbc:
    if (ctx->pc == 0x1E1BBCu) {
        ctx->pc = 0x1E1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BB8u;
        // 0x1e1bbc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1BC0u;
        goto label_1e1bc0;
    }
    ctx->pc = 0x1E1BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1BC0u);
        ctx->pc = 0x1E1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BB8u;
        // 0x1e1bbc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1BB8u, 0x1E1BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1BC0u;
label_1e1bc0:
    // 0x1e1bc0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e1bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e1bc4:
    // 0x1e1bc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1bc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e1bc8:
    // 0x1e1bc8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1e1bcc:
    if (ctx->pc == 0x1E1BCCu) {
        ctx->pc = 0x1E1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BC8u;
        // 0x1e1bcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1BD0u;
        goto label_1e1bd0;
    }
    ctx->pc = 0x1E1BC8u;
    {
        const bool branch_taken_0x1e1bc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BC8u;
        // 0x1e1bcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1bc8) {
            ctx->pc = 0x1E1BDCu;
            goto label_1e1bdc;
        }
    }
    ctx->pc = 0x1E1BD0u;
label_1e1bd0:
    // 0x1e1bd0: 0xc0401a4  jal         func_100690
label_1e1bd4:
    if (ctx->pc == 0x1E1BD4u) {
        ctx->pc = 0x1E1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BD0u;
        // 0x1e1bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1BD8u;
        goto label_1e1bd8;
    }
    ctx->pc = 0x1E1BD0u;
    SET_GPR_U32(ctx, 31, 0x1E1BD8u);
    ctx->pc = 0x1E1BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1BD0u;
    // 0x1e1bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E1BD0u, 0x1E1BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1BD8u;
label_1e1bd8:
    // 0x1e1bd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e1bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1bdc:
    // 0x1e1bdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1be0:
    // 0x1e1be0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1be4:
    // 0x1e1be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1be8:
    // 0x1e1be8: 0x3e00008  jr          $ra
label_1e1bec:
    if (ctx->pc == 0x1E1BECu) {
        ctx->pc = 0x1E1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BE8u;
        // 0x1e1bec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1BF0u;
        goto label_fallthrough_0x1e1be8;
    }
    ctx->pc = 0x1E1BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BE8u;
        // 0x1e1bec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1be8:
    ctx->pc = 0x1E1BF0u;
}
