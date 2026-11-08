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

// Function: entry_001e2db4
// Address: 0x1e2db4 - 0x1e2e78
void entry_001e2db4_0x1e2db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2db4_0x1e2db4");
#endif

    switch (ctx->pc) {
        case 0x1e2e08u: goto label_1e2e08;
        case 0x1e2e18u: goto label_1e2e18;
        case 0x1e2e30u: goto label_1e2e30;
        case 0x1e2e44u: goto label_1e2e44;
        case 0x1e2e70u: goto label_1e2e70;
        default: break;
    }

    ctx->pc = 0x1e2db4u;

label_1e2db4:
    // 0x1e2db4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2db8:
    // 0x1e2db8: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1e2db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_1e2dbc:
    // 0x1e2dbc: 0x2484c0d0  addiu       $a0, $a0, -0x3F30
    ctx->pc = 0x1e2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951120));
label_1e2dc0:
    // 0x1e2dc0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_1e2dc4:
    // 0x1e2dc4: 0x2463c0dc  addiu       $v1, $v1, -0x3F24
    ctx->pc = 0x1e2dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951132));
label_1e2dc8:
    // 0x1e2dc8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e2dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e2dcc:
    // 0x1e2dcc: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x1e2dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_1e2dd0:
    // 0x1e2dd0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2dd4:
    // 0x1e2dd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2dd8:
    // 0x1e2dd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e2dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e2ddc:
    // 0x1e2ddc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2de0:
    // 0x1e2de0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2de4:
    // 0x1e2de4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1e2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1e2de8:
    // 0x1e2de8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2dec:
    // 0x1e2dec: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1e2decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_1e2df0:
    // 0x1e2df0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2df4:
    // 0x1e2df4: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1e2df4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
label_1e2df8:
    // 0x1e2df8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2dfc:
    // 0x1e2dfc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e2dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2e00:
    // 0x1e2e00: 0xc078584  jal         func_1E1610
label_1e2e04:
    if (ctx->pc == 0x1E2E04u) {
        ctx->pc = 0x1E2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E00u;
        // 0x1e2e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E08u;
        goto label_1e2e08;
    }
    ctx->pc = 0x1E2E00u;
    SET_GPR_U32(ctx, 31, 0x1E2E08u);
    ctx->pc = 0x1E2E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E00u;
    // 0x1e2e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1610u, 0x1E2E00u, 0x1E2E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E08u;
label_1e2e08:
    // 0x1e2e08: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e2e0c:
    // 0x1e2e0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e2e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2e10:
    // 0x1e2e10: 0xc04805c  jal         func_120170
label_1e2e14:
    if (ctx->pc == 0x1E2E14u) {
        ctx->pc = 0x1E2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E10u;
        // 0x1e2e14: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E18u;
        goto label_1e2e18;
    }
    ctx->pc = 0x1E2E10u;
    SET_GPR_U32(ctx, 31, 0x1E2E18u);
    ctx->pc = 0x1E2E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E10u;
    // 0x1e2e14: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120170u, 0x1E2E10u, 0x1E2E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E18u;
label_1e2e18:
    // 0x1e2e18: 0x93828748  lbu         $v0, -0x78B8($gp)
    ctx->pc = 0x1e2e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936392)));
label_1e2e1c:
    // 0x1e2e1c: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x1e2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1e2e20:
    // 0x1e2e20: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e2e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e2e24:
    // 0x1e2e24: 0x83a5006c  lb          $a1, 0x6C($sp)
    ctx->pc = 0x1e2e24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 108)));
label_1e2e28:
    // 0x1e2e28: 0xc079750  jal         func_1E5D40
label_1e2e2c:
    if (ctx->pc == 0x1E2E2Cu) {
        ctx->pc = 0x1E2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E28u;
        // 0x1e2e2c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E30u;
        goto label_1e2e30;
    }
    ctx->pc = 0x1E2E28u;
    SET_GPR_U32(ctx, 31, 0x1E2E30u);
    ctx->pc = 0x1E2E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E28u;
    // 0x1e2e2c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5D40u, 0x1E2E28u, 0x1E2E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E30u;
label_1e2e30:
    // 0x1e2e30: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1e2e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2e34:
    // 0x1e2e34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e2e38:
    // 0x1e2e38: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1e2e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1e2e3c:
    // 0x1e2e3c: 0x320f809  jalr        $t9
label_1e2e40:
    if (ctx->pc == 0x1E2E40u) {
        ctx->pc = 0x1E2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E3Cu;
        // 0x1e2e40: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E44u;
        goto label_1e2e44;
    }
    ctx->pc = 0x1E2E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2E44u);
        ctx->pc = 0x1E2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E3Cu;
        // 0x1e2e40: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2E3Cu, 0x1E2E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2E44u;
label_1e2e44:
    // 0x1e2e44: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1e2e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1e2e48:
    // 0x1e2e48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2e4c:
    // 0x1e2e4c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e2e50:
    if (ctx->pc == 0x1E2E50u) {
        ctx->pc = 0x1E2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E4Cu;
        // 0x1e2e50: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E54u;
        goto label_1e2e54;
    }
    ctx->pc = 0x1E2E4Cu;
    {
        const bool branch_taken_0x1e2e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E4Cu;
        // 0x1e2e50: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e4c) {
            ctx->pc = 0x1E2E78u;
            return;
        }
    }
    ctx->pc = 0x1E2E54u;
label_1e2e54:
    // 0x1e2e54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e2e58:
    // 0x1e2e58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2e5c:
    // 0x1e2e5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e2e60:
    if (ctx->pc == 0x1E2E60u) {
        ctx->pc = 0x1E2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E5Cu;
        // 0x1e2e60: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E64u;
        goto label_1e2e64;
    }
    ctx->pc = 0x1E2E5Cu;
    {
        const bool branch_taken_0x1e2e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E5Cu;
        // 0x1e2e60: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e5c) {
            ctx->pc = 0x1E2E78u;
            return;
        }
    }
    ctx->pc = 0x1E2E64u;
label_1e2e64:
    // 0x1e2e64: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e2e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1e2e68:
    // 0x1e2e68: 0xc0483d8  jal         func_120F60
label_1e2e6c:
    if (ctx->pc == 0x1E2E6Cu) {
        ctx->pc = 0x1E2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E68u;
        // 0x1e2e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E70u;
        goto label_1e2e70;
    }
    ctx->pc = 0x1E2E68u;
    SET_GPR_U32(ctx, 31, 0x1E2E70u);
    ctx->pc = 0x1E2E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E68u;
    // 0x1e2e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E2E68u, 0x1E2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E70u;
label_1e2e70:
    // 0x1e2e70: 0xc0401a4  jal         func_100690
label_1e2e74:
    if (ctx->pc == 0x1E2E74u) {
        ctx->pc = 0x1E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E70u;
        // 0x1e2e74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E78u;
        goto label_fallthrough_0x1e2e70;
    }
    ctx->pc = 0x1E2E70u;
    SET_GPR_U32(ctx, 31, 0x1E2E78u);
    ctx->pc = 0x1E2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E70u;
    // 0x1e2e74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E2E70u, 0x1E2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1e2e70:
    ctx->pc = 0x1E2E78u;
}
