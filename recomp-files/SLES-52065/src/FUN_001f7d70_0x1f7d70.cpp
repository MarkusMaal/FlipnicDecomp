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

// Function: FUN_001f7d70
// Address: 0x1f7d70 - 0x1f7f58
void FUN_001f7d70_0x1f7d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7d70_0x1f7d70");
#endif

    switch (ctx->pc) {
        case 0x1f7db4u: goto label_1f7db4;
        case 0x1f7dbcu: goto label_1f7dbc;
        case 0x1f7dc8u: goto label_1f7dc8;
        case 0x1f7de0u: goto label_1f7de0;
        case 0x1f7df8u: goto label_1f7df8;
        case 0x1f7e00u: goto label_1f7e00;
        case 0x1f7e20u: goto label_1f7e20;
        case 0x1f7e34u: goto label_1f7e34;
        case 0x1f7e54u: goto label_1f7e54;
        case 0x1f7e60u: goto label_1f7e60;
        case 0x1f7eb0u: goto label_1f7eb0;
        case 0x1f7edcu: goto label_1f7edc;
        case 0x1f7ef0u: goto label_1f7ef0;
        case 0x1f7f14u: goto label_1f7f14;
        case 0x1f7f28u: goto label_1f7f28;
        default: break;
    }

    ctx->pc = 0x1f7d70u;

    // 0x1f7d70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f7d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f7d74: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f7d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f7d78: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1f7d78u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x1f7d7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f7d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f7d80: 0x8ec2bb10  lw          $v0, -0x44F0($s6)
    ctx->pc = 0x1f7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21BB10u));
    // 0x1f7d84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f7d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f7d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1f7d8c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1f7d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1f7d90: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f7d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f7d94: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f7d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f7d98: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f7d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f7d9c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f7d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f7da0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7DA0u;
    {
        const bool branch_taken_0x1f7da0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DA0u;
        // 0x1f7da4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7da0) {
            ctx->pc = 0x1F7DB4u;
            goto label_1f7db4;
        }
    }
    ctx->pc = 0x1F7DA8u;
    // 0x1f7da8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7dac: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7DACu;
    SET_GPR_U32(ctx, 31, 0x1F7DB4u);
    ctx->pc = 0x1F7DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7DACu;
    // 0x1f7db0: 0x248447c8  addiu       $a0, $a0, 0x47C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7DACu, 0x1F7DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DB4u;
label_1f7db4:
    // 0x1f7db4: 0xc07dc12  jal         func_1F7048
    ctx->pc = 0x1F7DB4u;
    SET_GPR_U32(ctx, 31, 0x1F7DBCu);
    ctx->pc = 0x1F7DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7DB4u;
    // 0x1f7db8: 0x3c150022  lui         $s5, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7048u, 0x1F7DB4u, 0x1F7DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DBCu;
label_1f7dbc:
    // 0x1f7dbc: 0x8ea4bb30  lw          $a0, -0x44D0($s5)
    ctx->pc = 0x1f7dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949680)));
    // 0x1f7dc0: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F7DC0u;
    SET_GPR_U32(ctx, 31, 0x1F7DC8u);
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F7DC0u, 0x1F7DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DC8u;
label_1f7dc8:
    // 0x1f7dc8: 0x8ea3bb30  lw          $v1, -0x44D0($s5)
    ctx->pc = 0x1f7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949680)));
    // 0x1f7dcc: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1F7DCCu;
    {
        const bool branch_taken_0x1f7dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DCCu;
        // 0x1f7dd0: 0x3a440008  xori        $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7dcc) {
            ctx->pc = 0x1F7EF4u;
            goto label_1f7ef4;
        }
    }
    ctx->pc = 0x1F7DD4u;
    // 0x1f7dd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f7dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7dd8: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1F7DD8u;
    SET_GPR_U32(ctx, 31, 0x1F7DE0u);
    ctx->pc = 0x1F7DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7DD8u;
    // 0x1f7ddc: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1F7DD8u, 0x1F7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DE0u;
label_1f7de0:
    // 0x1f7de0: 0x8e22bb48  lw          $v0, -0x44B8($s1)
    ctx->pc = 0x1f7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949704)));
    // 0x1f7de4: 0x441002b  bgez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F7DE4u;
    {
        const bool branch_taken_0x1f7de4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DE4u;
        // 0x1f7de8: 0x3c140039  lui         $s4, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7de4) {
            ctx->pc = 0x1F7E94u;
            goto label_1f7e94;
        }
    }
    ctx->pc = 0x1F7DECu;
    // 0x1f7dec: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1f7decu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1f7df0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F7DF0u;
    {
        const bool branch_taken_0x1f7df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DF0u;
        // 0x1f7df4: 0x3c170022  lui         $s7, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7df0) {
            ctx->pc = 0x1F7E1Cu;
            goto label_1f7e1c;
        }
    }
    ctx->pc = 0x1F7DF8u;
label_1f7df8:
    // 0x1f7df8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7dfc: 0x0  nop
    ctx->pc = 0x1f7dfcu;
    // NOP
label_1f7e00:
    // 0x1f7e00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7e04: 0x0  nop
    ctx->pc = 0x1f7e04u;
    // NOP
    // 0x1f7e08: 0x0  nop
    ctx->pc = 0x1f7e08u;
    // NOP
    // 0x1f7e0c: 0x0  nop
    ctx->pc = 0x1f7e0cu;
    // NOP
    // 0x1f7e10: 0x0  nop
    ctx->pc = 0x1f7e10u;
    // NOP
    // 0x1f7e14: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7E14u;
    {
        const bool branch_taken_0x1f7e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7e14) {
            ctx->pc = 0x1F7E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7e00;
        }
    }
    ctx->pc = 0x1F7E1Cu;
label_1f7e1c:
    // 0x1f7e1c: 0x26901590  addiu       $s0, $s4, 0x1590
    ctx->pc = 0x1f7e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 5520));
label_1f7e20:
    // 0x1f7e20: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f7e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f7e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e28: 0x34a5059c  ori         $a1, $a1, 0x59C
    ctx->pc = 0x1f7e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1436);
    // 0x1f7e2c: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F7E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F7E34u);
    ctx->pc = 0x1F7E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E2Cu;
    // 0x1f7e30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F7E2Cu, 0x1F7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E34u;
label_1f7e34:
    // 0x1f7e34: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F7E34u;
    {
        const bool branch_taken_0x1f7e34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f7e34) {
            ctx->pc = 0x1F7E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7E34u;
            // 0x1f7e38: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7E84u;
            goto label_1f7e84;
        }
    }
    ctx->pc = 0x1F7E3Cu;
    // 0x1f7e3c: 0x8ec2bb10  lw          $v0, -0x44F0($s6)
    ctx->pc = 0x1f7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949648)));
    // 0x1f7e40: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7E40u;
    {
        const bool branch_taken_0x1f7e40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E40u;
        // 0x1f7e44: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e40) {
            ctx->pc = 0x1F7E58u;
            goto label_1f7e58;
        }
    }
    ctx->pc = 0x1F7E48u;
    // 0x1f7e48: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7e4c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7E4Cu;
    SET_GPR_U32(ctx, 31, 0x1F7E54u);
    ctx->pc = 0x1F7E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E4Cu;
    // 0x1f7e50: 0x248447e0  addiu       $a0, $a0, 0x47E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7E4Cu, 0x1F7E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E54u;
label_1f7e54:
    // 0x1f7e54: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1f7e58:
    // 0x1f7e58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7e5c: 0x0  nop
    ctx->pc = 0x1f7e5cu;
    // NOP
label_1f7e60:
    // 0x1f7e60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7e64: 0x0  nop
    ctx->pc = 0x1f7e64u;
    // NOP
    // 0x1f7e68: 0x0  nop
    ctx->pc = 0x1f7e68u;
    // NOP
    // 0x1f7e6c: 0x0  nop
    ctx->pc = 0x1f7e6cu;
    // NOP
    // 0x1f7e70: 0x0  nop
    ctx->pc = 0x1f7e70u;
    // NOP
    // 0x1f7e74: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7E74u;
    {
        const bool branch_taken_0x1f7e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7e74) {
            ctx->pc = 0x1F7E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7e60;
        }
    }
    ctx->pc = 0x1F7E7Cu;
    // 0x1f7e7c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F7E7Cu;
    {
        const bool branch_taken_0x1f7e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E7Cu;
        // 0x1f7e80: 0x26901590  addiu       $s0, $s4, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 5520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e7c) {
            ctx->pc = 0x1F7E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7e20;
        }
    }
    ctx->pc = 0x1F7E84u;
label_1f7e84:
    // 0x1f7e84: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F7E84u;
    {
        const bool branch_taken_0x1f7e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E84u;
        // 0x1f7e88: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e84) {
            ctx->pc = 0x1F7DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7df8;
        }
    }
    ctx->pc = 0x1F7E8Cu;
    // 0x1f7e8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7E8Cu;
    {
        const bool branch_taken_0x1f7e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E8Cu;
        // 0x1f7e90: 0xae20bb48  sw          $zero, -0x44B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294949704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e8c) {
            ctx->pc = 0x1F7E9Cu;
            goto label_1f7e9c;
        }
    }
    ctx->pc = 0x1F7E94u;
label_1f7e94:
    // 0x1f7e94: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1f7e94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1f7e98: 0x3c170022  lui         $s7, 0x22
    ctx->pc = 0x1f7e98u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)34 << 16));
label_1f7e9c:
    // 0x1f7e9c: 0x267015d0  addiu       $s0, $s3, 0x15D0
    ctx->pc = 0x1f7e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5584));
    // 0x1f7ea0: 0xae7215d0  sw          $s2, 0x15D0($s3)
    ctx->pc = 0x1f7ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5584), GPR_U32(ctx, 18));
    // 0x1f7ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ea8: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F7EA8u;
    SET_GPR_U32(ctx, 31, 0x1F7EB0u);
    ctx->pc = 0x1F7EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7EA8u;
    // 0x1f7eac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F7EA8u, 0x1F7EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7EB0u;
label_1f7eb0:
    // 0x1f7eb0: 0x26f1d580  addiu       $s1, $s7, -0x2A80
    ctx->pc = 0x1f7eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956416));
    // 0x1f7eb4: 0x26841590  addiu       $a0, $s4, 0x1590
    ctx->pc = 0x1f7eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 5520));
    // 0x1f7eb8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f7eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ebc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f7ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f7ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ec8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f7ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7ecc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1f7eccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ed0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f7ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7ed4: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F7ED4u;
    SET_GPR_U32(ctx, 31, 0x1F7EDCu);
    ctx->pc = 0x1F7ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7ED4u;
    // 0x1f7ed8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F7ED4u, 0x1F7EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7EDCu;
label_1f7edc:
    // 0x1f7edc: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7EDCu;
    {
        const bool branch_taken_0x1f7edc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f7edc) {
            ctx->pc = 0x1F7EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7EDCu;
            // 0x1f7ee0: 0x8ec2bb10  lw          $v0, -0x44F0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7F04u;
            goto label_1f7f04;
        }
    }
    ctx->pc = 0x1F7EE4u;
    // 0x1f7ee4: 0x8ea4bb30  lw          $a0, -0x44D0($s5)
    ctx->pc = 0x1f7ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949680)));
    // 0x1f7ee8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F7EE8u;
    SET_GPR_U32(ctx, 31, 0x1F7EF0u);
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F7EE8u, 0x1F7EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7EF0u;
label_1f7ef0:
    // 0x1f7ef0: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x1f7ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
label_1f7ef4:
    // 0x1f7ef4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7ef8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f7efc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F7EFCu;
    {
        const bool branch_taken_0x1f7efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EFCu;
        // 0x1f7f00: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7efc) {
            ctx->pc = 0x1F7F2Cu;
            goto label_1f7f2c;
        }
    }
    ctx->pc = 0x1F7F04u;
label_1f7f04:
    // 0x1f7f04: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7F04u;
    {
        const bool branch_taken_0x1f7f04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F04u;
        // 0x1f7f08: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f04) {
            ctx->pc = 0x1F7F14u;
            goto label_1f7f14;
        }
    }
    ctx->pc = 0x1F7F0Cu;
    // 0x1f7f0c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7F0Cu;
    SET_GPR_U32(ctx, 31, 0x1F7F14u);
    ctx->pc = 0x1F7F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F0Cu;
    // 0x1f7f10: 0x24844800  addiu       $a0, $a0, 0x4800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7F0Cu, 0x1F7F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F14u;
label_1f7f14:
    // 0x1f7f14: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1f7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1f7f18: 0x8ea4bb30  lw          $a0, -0x44D0($s5)
    ctx->pc = 0x1f7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949680)));
    // 0x1f7f1c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1f7f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1f7f20: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F7F20u;
    SET_GPR_U32(ctx, 31, 0x1F7F28u);
    ctx->pc = 0x1F7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F20u;
    // 0x1f7f24: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F7F20u, 0x1F7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F28u;
label_1f7f28:
    // 0x1f7f28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f7f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7f2c:
    // 0x1f7f2c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f7f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f7f30: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1f7f30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f7f34: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f7f34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f7f38: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f7f38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f7f3c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f7f3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7f40: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f7f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7f44: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f7f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7f48: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f7f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f7f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7f50: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F50u;
        // 0x1f7f54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7F58u;
}
