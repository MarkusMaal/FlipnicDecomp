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

// Function: FUN_001c9d60
// Address: 0x1c9d60 - 0x1c9fa4
void FUN_001c9d60_0x1c9d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c9d60_0x1c9d60");
#endif

    switch (ctx->pc) {
        case 0x1c9d7cu: goto label_1c9d7c;
        case 0x1c9d84u: goto label_1c9d84;
        case 0x1c9d98u: goto label_1c9d98;
        case 0x1c9da8u: goto label_1c9da8;
        case 0x1c9dc0u: goto label_1c9dc0;
        case 0x1c9dd0u: goto label_1c9dd0;
        case 0x1c9de0u: goto label_1c9de0;
        case 0x1c9de8u: goto label_1c9de8;
        case 0x1c9e08u: goto label_1c9e08;
        case 0x1c9e10u: goto label_1c9e10;
        case 0x1c9e20u: goto label_1c9e20;
        case 0x1c9e28u: goto label_1c9e28;
        case 0x1c9e38u: goto label_1c9e38;
        case 0x1c9e4cu: goto label_1c9e4c;
        case 0x1c9e64u: goto label_1c9e64;
        case 0x1c9e78u: goto label_1c9e78;
        case 0x1c9e88u: goto label_1c9e88;
        case 0x1c9e98u: goto label_1c9e98;
        case 0x1c9ea8u: goto label_1c9ea8;
        case 0x1c9eb0u: goto label_1c9eb0;
        case 0x1c9ec4u: goto label_1c9ec4;
        case 0x1c9eccu: goto label_1c9ecc;
        case 0x1c9edcu: goto label_1c9edc;
        case 0x1c9ee8u: goto label_1c9ee8;
        case 0x1c9ef4u: goto label_1c9ef4;
        case 0x1c9efcu: goto label_1c9efc;
        case 0x1c9f0cu: goto label_1c9f0c;
        case 0x1c9f20u: goto label_1c9f20;
        case 0x1c9f34u: goto label_1c9f34;
        case 0x1c9f48u: goto label_1c9f48;
        case 0x1c9f50u: goto label_1c9f50;
        case 0x1c9f68u: goto label_1c9f68;
        case 0x1c9f78u: goto label_1c9f78;
        case 0x1c9f8cu: goto label_1c9f8c;
        default: break;
    }

    ctx->pc = 0x1c9d60u;

    // 0x1c9d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c9d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c9d64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c9d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c9d68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c9d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c9d6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9d70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c9d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c9d74: 0xc073124  jal         func_1CC490
    ctx->pc = 0x1C9D74u;
    SET_GPR_U32(ctx, 31, 0x1C9D7Cu);
    ctx->pc = 0x1C9D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D74u;
    // 0x1c9d78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC490u, 0x1C9D74u, 0x1C9D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D7Cu;
label_1c9d7c:
    // 0x1c9d7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d80: 0x2a210011  slti        $at, $s1, 0x11
    ctx->pc = 0x1c9d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
label_1c9d84:
    // 0x1c9d84: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9D84u;
    {
        const bool branch_taken_0x1c9d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D84u;
        // 0x1c9d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d84) {
            ctx->pc = 0x1C9DB0u;
            goto label_1c9db0;
        }
    }
    ctx->pc = 0x1C9D8Cu;
    // 0x1c9d8c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c9d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9d90: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9D90u;
    SET_GPR_U32(ctx, 31, 0x1C9D98u);
    ctx->pc = 0x1C9D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D90u;
    // 0x1c9d94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9D90u, 0x1C9D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D98u;
label_1c9d98:
    // 0x1c9d98: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c9d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c9d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9da0: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C9DA0u;
    SET_GPR_U32(ctx, 31, 0x1C9DA8u);
    ctx->pc = 0x1C9DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DA0u;
    // 0x1c9da4: 0x24a569d0  addiu       $a1, $a1, 0x69D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C9DA0u, 0x1C9DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DA8u;
label_1c9da8:
    // 0x1c9da8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9DA8u;
    {
        const bool branch_taken_0x1c9da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9da8) {
            ctx->pc = 0x1C9DD0u;
            goto label_1c9dd0;
        }
    }
    ctx->pc = 0x1C9DB0u;
label_1c9db0:
    // 0x1c9db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9db4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9db8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9DB8u;
    SET_GPR_U32(ctx, 31, 0x1C9DC0u);
    ctx->pc = 0x1C9DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DB8u;
    // 0x1c9dbc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9DB8u, 0x1C9DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DC0u;
label_1c9dc0:
    // 0x1c9dc0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c9dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c9dc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9dc8: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C9DC8u;
    SET_GPR_U32(ctx, 31, 0x1C9DD0u);
    ctx->pc = 0x1C9DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DC8u;
    // 0x1c9dcc: 0x24a569f0  addiu       $a1, $a1, 0x69F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C9DC8u, 0x1C9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DD0u;
label_1c9dd0:
    // 0x1c9dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9dd4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c9dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9dd8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9DD8u;
    SET_GPR_U32(ctx, 31, 0x1C9DE0u);
    ctx->pc = 0x1C9DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DD8u;
    // 0x1c9ddc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9DD8u, 0x1C9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DE0u;
label_1c9de0:
    // 0x1c9de0: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C9DE0u;
    SET_GPR_U32(ctx, 31, 0x1C9DE8u);
    ctx->pc = 0x1C9DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DE0u;
    // 0x1c9de4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C9DE0u, 0x1C9DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DE8u;
label_1c9de8:
    // 0x1c9de8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c9de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c9dec: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x1c9decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1c9df0: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C9DF0u;
    {
        const bool branch_taken_0x1c9df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DF0u;
        // 0x1c9df4: 0x2a210011  slti        $at, $s1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9df0) {
            ctx->pc = 0x1C9D84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9d84;
        }
    }
    ctx->pc = 0x1C9DF8u;
    // 0x1c9df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9dfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c9dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9e00: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C9E00u;
    SET_GPR_U32(ctx, 31, 0x1C9E08u);
    ctx->pc = 0x1C9E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E00u;
    // 0x1c9e04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C9E00u, 0x1C9E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E08u;
label_1c9e08:
    // 0x1c9e08: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C9E08u;
    SET_GPR_U32(ctx, 31, 0x1C9E10u);
    ctx->pc = 0x1C9E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E08u;
    // 0x1c9e0c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C9E08u, 0x1C9E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E10u;
label_1c9e10:
    // 0x1c9e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c9e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9e18: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9E18u;
    SET_GPR_U32(ctx, 31, 0x1C9E20u);
    ctx->pc = 0x1C9E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E18u;
    // 0x1c9e1c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9E18u, 0x1C9E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E20u;
label_1c9e20:
    // 0x1c9e20: 0xc073094  jal         func_1CC250
    ctx->pc = 0x1C9E20u;
    SET_GPR_U32(ctx, 31, 0x1C9E28u);
    ctx->pc = 0x1C9E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E20u;
    // 0x1c9e24: 0xa0510008  sb          $s1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC250u, 0x1C9E20u, 0x1C9E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E28u;
label_1c9e28:
    // 0x1c9e28: 0x24460005  addiu       $a2, $v0, 0x5
    ctx->pc = 0x1c9e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1c9e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e30: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9E30u;
    SET_GPR_U32(ctx, 31, 0x1C9E38u);
    ctx->pc = 0x1C9E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E30u;
    // 0x1c9e34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9E30u, 0x1C9E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E38u;
label_1c9e38:
    // 0x1c9e38: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c9e38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c9e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c9e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c9e44: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C9E44u;
    SET_GPR_U32(ctx, 31, 0x1C9E4Cu);
    ctx->pc = 0x1C9E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E44u;
    // 0x1c9e48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C9E44u, 0x1C9E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E4Cu;
label_1c9e4c:
    // 0x1c9e4c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c9e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c9e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e54: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c9e58: 0x8c462830  lw          $a2, 0x2830($v0)
    ctx->pc = 0x1c9e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10288)));
    // 0x1c9e5c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C9E64u);
    ctx->pc = 0x1C9E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E5Cu;
    // 0x1c9e60: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9E5Cu, 0x1C9E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E64u;
label_1c9e64:
    // 0x1c9e64: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c9e64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c9e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c9e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9e70: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C9E70u;
    SET_GPR_U32(ctx, 31, 0x1C9E78u);
    ctx->pc = 0x1C9E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E70u;
    // 0x1c9e74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C9E70u, 0x1C9E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E78u;
label_1c9e78:
    // 0x1c9e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e7c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c9e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c9e80: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C9E80u;
    SET_GPR_U32(ctx, 31, 0x1C9E88u);
    ctx->pc = 0x1C9E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E80u;
    // 0x1c9e84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C9E80u, 0x1C9E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E88u;
label_1c9e88:
    // 0x1c9e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e8c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c9e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c9e90: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C9E90u;
    SET_GPR_U32(ctx, 31, 0x1C9E98u);
    ctx->pc = 0x1C9E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E90u;
    // 0x1c9e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C9E90u, 0x1C9E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E98u;
label_1c9e98:
    // 0x1c9e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e9c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c9e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c9ea0: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C9EA0u;
    SET_GPR_U32(ctx, 31, 0x1C9EA8u);
    ctx->pc = 0x1C9EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EA0u;
    // 0x1c9ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C9EA0u, 0x1C9EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EA8u;
label_1c9ea8:
    // 0x1c9ea8: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C9EA8u;
    SET_GPR_U32(ctx, 31, 0x1C9EB0u);
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C9EA8u, 0x1C9EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EB0u;
label_1c9eb0:
    // 0x1c9eb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9eb8: 0x26450003  addiu       $a1, $s2, 0x3
    ctx->pc = 0x1c9eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x1c9ebc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9EBCu;
    SET_GPR_U32(ctx, 31, 0x1C9EC4u);
    ctx->pc = 0x1C9EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EBCu;
    // 0x1c9ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9EBCu, 0x1C9EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EC4u;
label_1c9ec4:
    // 0x1c9ec4: 0xc073094  jal         func_1CC250
    ctx->pc = 0x1C9EC4u;
    SET_GPR_U32(ctx, 31, 0x1C9ECCu);
    ctx->pc = 0x1C9EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EC4u;
    // 0x1c9ec8: 0xa0510008  sb          $s1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC250u, 0x1C9EC4u, 0x1C9ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9ECCu;
label_1c9ecc:
    // 0x1c9ecc: 0x26450003  addiu       $a1, $s2, 0x3
    ctx->pc = 0x1c9eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x1c9ed0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1c9ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c9ed4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9ED4u;
    SET_GPR_U32(ctx, 31, 0x1C9EDCu);
    ctx->pc = 0x1C9ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9ED4u;
    // 0x1c9ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9ED4u, 0x1C9EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EDCu;
label_1c9edc:
    // 0x1c9edc: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c9edcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c9ee0: 0xc0727ec  jal         func_1C9FB0
    ctx->pc = 0x1C9EE0u;
    SET_GPR_U32(ctx, 31, 0x1C9EE8u);
    ctx->pc = 0x1C9EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EE0u;
    // 0x1c9ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FB0u, 0x1C9EE0u, 0x1C9EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EE8u;
label_1c9ee8:
    // 0x1c9ee8: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1c9ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c9eec: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C9EECu;
    SET_GPR_U32(ctx, 31, 0x1C9EF4u);
    ctx->pc = 0x1C9EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EECu;
    // 0x1c9ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA340u, 0x1C9EECu, 0x1C9EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EF4u;
label_1c9ef4:
    // 0x1c9ef4: 0xc0728b0  jal         func_1CA2C0
    ctx->pc = 0x1C9EF4u;
    SET_GPR_U32(ctx, 31, 0x1C9EFCu);
    ctx->pc = 0x1C9EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EF4u;
    // 0x1c9ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2C0u, 0x1C9EF4u, 0x1C9EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EFCu;
label_1c9efc:
    // 0x1c9efc: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1c9efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x1c9f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f04: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C9F04u;
    SET_GPR_U32(ctx, 31, 0x1C9F0Cu);
    ctx->pc = 0x1C9F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F04u;
    // 0x1c9f08: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C9F04u, 0x1C9F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F0Cu;
label_1c9f0c:
    // 0x1c9f0c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c9f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c9f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f14: 0x24a56a10  addiu       $a1, $a1, 0x6A10
    ctx->pc = 0x1c9f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27152));
    // 0x1c9f18: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1C9F18u;
    SET_GPR_U32(ctx, 31, 0x1C9F20u);
    ctx->pc = 0x1C9F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F18u;
    // 0x1c9f1c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1C9F18u, 0x1C9F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F20u;
label_1c9f20:
    // 0x1c9f20: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c9f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c9f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f28: 0x24a56a50  addiu       $a1, $a1, 0x6A50
    ctx->pc = 0x1c9f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27216));
    // 0x1c9f2c: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C9F2Cu;
    SET_GPR_U32(ctx, 31, 0x1C9F34u);
    ctx->pc = 0x1C9F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F2Cu;
    // 0x1c9f30: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C9F2Cu, 0x1C9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F34u;
label_1c9f34:
    // 0x1c9f34: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c9f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c9f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f3c: 0x24a570b0  addiu       $a1, $a1, 0x70B0
    ctx->pc = 0x1c9f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28848));
    // 0x1c9f40: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C9F40u;
    SET_GPR_U32(ctx, 31, 0x1C9F48u);
    ctx->pc = 0x1C9F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F40u;
    // 0x1c9f44: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C9F40u, 0x1C9F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F48u;
label_1c9f48:
    // 0x1c9f48: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1C9F48u;
    SET_GPR_U32(ctx, 31, 0x1C9F50u);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1C9F48u, 0x1C9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F50u;
label_1c9f50:
    // 0x1c9f50: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1c9f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c9f54: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1c9f54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f58: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C9F58u;
    {
        const bool branch_taken_0x1c9f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9f58) {
            ctx->pc = 0x1C9F8Cu;
            goto label_1c9f8c;
        }
    }
    ctx->pc = 0x1C9F60u;
    // 0x1c9f60: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1C9F60u;
    SET_GPR_U32(ctx, 31, 0x1C9F68u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1C9F60u, 0x1C9F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F68u;
label_1c9f68:
    // 0x1c9f68: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c9f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c9f6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c9f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f70: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1C9F70u;
    SET_GPR_U32(ctx, 31, 0x1C9F78u);
    ctx->pc = 0x1C9F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F70u;
    // 0x1c9f74: 0x24a56990  addiu       $a1, $a1, 0x6990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1C9F70u, 0x1C9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F78u;
label_1c9f78:
    // 0x1c9f78: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c9f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c9f7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c9f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f80: 0x24a569a0  addiu       $a1, $a1, 0x69A0
    ctx->pc = 0x1c9f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
    // 0x1c9f84: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1C9F84u;
    SET_GPR_U32(ctx, 31, 0x1C9F8Cu);
    ctx->pc = 0x1C9F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F84u;
    // 0x1c9f88: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1C9F84u, 0x1C9F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F8Cu;
label_1c9f8c:
    // 0x1c9f8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c9f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9f90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c9f90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9f94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F9Cu;
        // 0x1c9fa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9FA4u;
}
