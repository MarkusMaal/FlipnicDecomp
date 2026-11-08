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

// Function: entry_001c7da8
// Address: 0x1c7da8 - 0x1c7e2c
void entry_001c7da8_0x1c7da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7da8_0x1c7da8");
#endif

    switch (ctx->pc) {
        case 0x1c7db4u: goto label_1c7db4;
        case 0x1c7dc4u: goto label_1c7dc4;
        case 0x1c7dd4u: goto label_1c7dd4;
        case 0x1c7ddcu: goto label_1c7ddc;
        case 0x1c7dfcu: goto label_1c7dfc;
        case 0x1c7e0cu: goto label_1c7e0c;
        case 0x1c7e1cu: goto label_1c7e1c;
        case 0x1c7e24u: goto label_1c7e24;
        default: break;
    }

    ctx->pc = 0x1c7da8u;

label_1c7da8:
    // 0x1c7da8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c7da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7dac: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7DACu;
    SET_GPR_U32(ctx, 31, 0x1C7DB4u);
    ctx->pc = 0x1C7DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DACu;
    // 0x1c7db0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7DACu, 0x1C7DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DB4u;
label_1c7db4:
    // 0x1c7db4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c7db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c7db8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7dbc: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C7DBCu;
    SET_GPR_U32(ctx, 31, 0x1C7DC4u);
    ctx->pc = 0x1C7DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DBCu;
    // 0x1c7dc0: 0x24a559f0  addiu       $a1, $a1, 0x59F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C7DBCu, 0x1C7DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DC4u;
label_1c7dc4:
    // 0x1c7dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7dc8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7dcc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7DCCu;
    SET_GPR_U32(ctx, 31, 0x1C7DD4u);
    ctx->pc = 0x1C7DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DCCu;
    // 0x1c7dd0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7DCCu, 0x1C7DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DD4u;
label_1c7dd4:
    // 0x1c7dd4: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C7DD4u;
    SET_GPR_U32(ctx, 31, 0x1C7DDCu);
    ctx->pc = 0x1C7DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DD4u;
    // 0x1c7dd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C7DD4u, 0x1C7DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DDCu;
label_1c7ddc:
    // 0x1c7ddc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c7ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c7de0: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1c7de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c7de4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C7DE4u;
    {
        const bool branch_taken_0x1c7de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DE4u;
        // 0x1c7de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7de4) {
            ctx->pc = 0x1C7DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7da8;
        }
    }
    ctx->pc = 0x1C7DECu;
    // 0x1c7dec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c7decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7df4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7DF4u;
    SET_GPR_U32(ctx, 31, 0x1C7DFCu);
    ctx->pc = 0x1C7DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DF4u;
    // 0x1c7df8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7DF4u, 0x1C7DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DFCu;
label_1c7dfc:
    // 0x1c7dfc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c7dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c7e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e04: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C7E04u;
    SET_GPR_U32(ctx, 31, 0x1C7E0Cu);
    ctx->pc = 0x1C7E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E04u;
    // 0x1c7e08: 0x24a55a00  addiu       $a1, $a1, 0x5A00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C7E04u, 0x1C7E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E0Cu;
label_1c7e0c:
    // 0x1c7e0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c7e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e14: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7E14u;
    SET_GPR_U32(ctx, 31, 0x1C7E1Cu);
    ctx->pc = 0x1C7E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E14u;
    // 0x1c7e18: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7E14u, 0x1C7E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E1Cu;
label_1c7e1c:
    // 0x1c7e1c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C7E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C7E24u);
    ctx->pc = 0x1C7E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E1Cu;
    // 0x1c7e20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C7E1Cu, 0x1C7E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E24u;
label_1c7e24:
    // 0x1c7e24: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1c7e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c7e2cu;
}
