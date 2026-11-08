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

// Function: FUN_00205d58
// Address: 0x205d58 - 0x205e5c
void FUN_00205d58_0x205d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00205d58_0x205d58");
#endif

    switch (ctx->pc) {
        case 0x205d88u: goto label_205d88;
        case 0x205db8u: goto label_205db8;
        case 0x205dbcu: goto label_205dbc;
        case 0x205dc8u: goto label_205dc8;
        case 0x205e30u: goto label_205e30;
        default: break;
    }

    ctx->pc = 0x205d58u;

    // 0x205d58: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x205d58u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x205d5c: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x205d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x205d60: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205D60u;
    {
        const bool branch_taken_0x205d60 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x205D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D60u;
        // 0x205d64: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d60) {
            ctx->pc = 0x205D78u;
            goto label_205d78;
        }
    }
    ctx->pc = 0x205D68u;
    // 0x205d68: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x205d68u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x205d6c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x205d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205d70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x205D70u;
    {
        const bool branch_taken_0x205d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D70u;
        // 0x205d74: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d70) {
            ctx->pc = 0x205D7Cu;
            goto label_205d7c;
        }
    }
    ctx->pc = 0x205D78u;
label_205d78:
    // 0x205d78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x205d78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205d7c:
    // 0x205d7c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x205d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x205d80: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x205d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x205d84: 0x0  nop
    ctx->pc = 0x205d84u;
    // NOP
label_205d88:
    // 0x205d88: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x205d88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x205d8c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x205d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x205d90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x205d94: 0x0  nop
    ctx->pc = 0x205d94u;
    // NOP
    // 0x205d98: 0x0  nop
    ctx->pc = 0x205d98u;
    // NOP
    // 0x205d9c: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x205D9Cu;
    {
        const bool branch_taken_0x205d9c = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x205d9c) {
            ctx->pc = 0x205D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205d88;
        }
    }
    ctx->pc = 0x205DA4u;
    // 0x205da4: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x205DA4u;
    {
        const bool branch_taken_0x205da4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x205DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DA4u;
        // 0x205da8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205da4) {
            ctx->pc = 0x205DB4u;
            goto label_205db4;
        }
    }
    ctx->pc = 0x205DACu;
    // 0x205dac: 0x3e00008  jr          $ra
    ctx->pc = 0x205DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DACu;
        // 0x205db0: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205DB4u;
label_205db4:
    // 0x205db4: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x205db4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_205db8:
    // 0x205db8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x205db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_205dbc:
    // 0x205dbc: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x205dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x205dc0: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x205dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x205dc4: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x205dc4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_205dc8:
    // 0x205dc8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x205dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x205dcc: 0x1102000e  beq         $t0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x205DCCu;
    {
        const bool branch_taken_0x205dcc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x205DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DCCu;
        // 0x205dd0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205dcc) {
            ctx->pc = 0x205E08u;
            goto label_205e08;
        }
    }
    ctx->pc = 0x205DD4u;
    // 0x205dd4: 0x2902002e  slti        $v0, $t0, 0x2E
    ctx->pc = 0x205dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x205dd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205DD8u;
    {
        const bool branch_taken_0x205dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DD8u;
        // 0x205ddc: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205dd8) {
            ctx->pc = 0x205DF0u;
            goto label_205df0;
        }
    }
    ctx->pc = 0x205DE0u;
    // 0x205de0: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205DE0u;
    {
        const bool branch_taken_0x205de0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DE0u;
        // 0x205de4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205de0) {
            ctx->pc = 0x205E00u;
            goto label_205e00;
        }
    }
    ctx->pc = 0x205DE8u;
    // 0x205de8: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x205DE8u;
    {
        const bool branch_taken_0x205de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DE8u;
        // 0x205dec: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205de8) {
            ctx->pc = 0x205DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205dbc;
        }
    }
    ctx->pc = 0x205DF0u;
label_205df0:
    // 0x205df0: 0x11020018  beq         $t0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x205DF0u;
    {
        const bool branch_taken_0x205df0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x205DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DF0u;
        // 0x205df4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205df0) {
            ctx->pc = 0x205E54u;
            goto label_205e54;
        }
    }
    ctx->pc = 0x205DF8u;
    // 0x205df8: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x205DF8u;
    {
        const bool branch_taken_0x205df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DF8u;
        // 0x205dfc: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205df8) {
            ctx->pc = 0x205DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205dbc;
        }
    }
    ctx->pc = 0x205E00u;
label_205e00:
    // 0x205e00: 0x3e00008  jr          $ra
    ctx->pc = 0x205E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E00u;
        // 0x205e04: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205E08u;
label_205e08:
    // 0x205e08: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x205e08u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x205e0c: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x205e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x205e10: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205E10u;
    {
        const bool branch_taken_0x205e10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x205E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E10u;
        // 0x205e14: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e10) {
            ctx->pc = 0x205E20u;
            goto label_205e20;
        }
    }
    ctx->pc = 0x205E18u;
    // 0x205e18: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x205E18u;
    {
        const bool branch_taken_0x205e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205e18) {
            ctx->pc = 0x205E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205E18u;
            // 0x205e1c: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205E28u;
            goto label_205e28;
        }
    }
    ctx->pc = 0x205E20u;
label_205e20:
    // 0x205e20: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x205E20u;
    {
        const bool branch_taken_0x205e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E20u;
        // 0x205e24: 0x2407002d  addiu       $a3, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e20) {
            ctx->pc = 0x205DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205db8;
        }
    }
    ctx->pc = 0x205E28u;
label_205e28:
    // 0x205e28: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x205e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x205e2c: 0x0  nop
    ctx->pc = 0x205e2cu;
    // NOP
label_205e30:
    // 0x205e30: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x205e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x205e34: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x205e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x205e38: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x205e38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x205e3c: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x205e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x205e40: 0x0  nop
    ctx->pc = 0x205e40u;
    // NOP
    // 0x205e44: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x205E44u;
    {
        const bool branch_taken_0x205e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205e44) {
            ctx->pc = 0x205E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205e30;
        }
    }
    ctx->pc = 0x205E4Cu;
    // 0x205e4c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x205E4Cu;
    {
        const bool branch_taken_0x205e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E4Cu;
        // 0x205e50: 0x80a80000  lb          $t0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e4c) {
            ctx->pc = 0x205DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205dc8;
        }
    }
    ctx->pc = 0x205E54u;
label_205e54:
    // 0x205e54: 0x3e00008  jr          $ra
    ctx->pc = 0x205E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E54u;
        // 0x205e58: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205E5Cu;
}
