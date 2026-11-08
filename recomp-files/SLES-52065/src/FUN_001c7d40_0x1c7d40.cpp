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

// Function: FUN_001c7d40
// Address: 0x1c7d40 - 0x1c8168
void FUN_001c7d40_0x1c7d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c7d40_0x1c7d40");
#endif

    switch (ctx->pc) {
        case 0x1c7d84u: goto label_1c7d84;
        case 0x1c7da8u: goto label_1c7da8;
        case 0x1c7db4u: goto label_1c7db4;
        case 0x1c7dc4u: goto label_1c7dc4;
        case 0x1c7dd4u: goto label_1c7dd4;
        case 0x1c7ddcu: goto label_1c7ddc;
        case 0x1c7dfcu: goto label_1c7dfc;
        case 0x1c7e0cu: goto label_1c7e0c;
        case 0x1c7e1cu: goto label_1c7e1c;
        case 0x1c7e24u: goto label_1c7e24;
        case 0x1c7e2cu: goto label_1c7e2c;
        case 0x1c7e38u: goto label_1c7e38;
        case 0x1c7e48u: goto label_1c7e48;
        case 0x1c7e58u: goto label_1c7e58;
        case 0x1c7e60u: goto label_1c7e60;
        case 0x1c7e80u: goto label_1c7e80;
        case 0x1c7e88u: goto label_1c7e88;
        case 0x1c7e94u: goto label_1c7e94;
        case 0x1c7ea0u: goto label_1c7ea0;
        case 0x1c7eacu: goto label_1c7eac;
        case 0x1c7ebcu: goto label_1c7ebc;
        case 0x1c7eccu: goto label_1c7ecc;
        case 0x1c7ed4u: goto label_1c7ed4;
        case 0x1c7ef8u: goto label_1c7ef8;
        case 0x1c7f18u: goto label_1c7f18;
        case 0x1c7f28u: goto label_1c7f28;
        case 0x1c7f34u: goto label_1c7f34;
        case 0x1c7f40u: goto label_1c7f40;
        case 0x1c7f50u: goto label_1c7f50;
        case 0x1c7f64u: goto label_1c7f64;
        case 0x1c7f78u: goto label_1c7f78;
        case 0x1c7f8cu: goto label_1c7f8c;
        case 0x1c7fa4u: goto label_1c7fa4;
        case 0x1c7fb4u: goto label_1c7fb4;
        case 0x1c7fbcu: goto label_1c7fbc;
        case 0x1c7fccu: goto label_1c7fcc;
        case 0x1c7fdcu: goto label_1c7fdc;
        case 0x1c7fe4u: goto label_1c7fe4;
        case 0x1c7ff4u: goto label_1c7ff4;
        case 0x1c8004u: goto label_1c8004;
        case 0x1c8028u: goto label_1c8028;
        case 0x1c803cu: goto label_1c803c;
        case 0x1c8050u: goto label_1c8050;
        case 0x1c8094u: goto label_1c8094;
        case 0x1c80a0u: goto label_1c80a0;
        case 0x1c80acu: goto label_1c80ac;
        case 0x1c80b8u: goto label_1c80b8;
        case 0x1c80ccu: goto label_1c80cc;
        case 0x1c80dcu: goto label_1c80dc;
        case 0x1c80ecu: goto label_1c80ec;
        case 0x1c80fcu: goto label_1c80fc;
        case 0x1c810cu: goto label_1c810c;
        case 0x1c8114u: goto label_1c8114;
        case 0x1c811cu: goto label_1c811c;
        case 0x1c8130u: goto label_1c8130;
        case 0x1c8148u: goto label_1c8148;
        default: break;
    }

    ctx->pc = 0x1c7d40u;

    // 0x1c7d40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c7d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c7d44: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c7d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c7d48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c7d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c7d4c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c7d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c7d50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c7d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c7d54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c7d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c7d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c7d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7d60: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x1c7d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x1c7d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d68: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1c7d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x1c7d6c: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c7d70: 0x8c422830  lw          $v0, 0x2830($v0)
    ctx->pc = 0x1c7d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10288)));
    // 0x1c7d74: 0xac820068  sw          $v0, 0x68($a0)
    ctx->pc = 0x1c7d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x1c7d78: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1c7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1c7d7c: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C7D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D84u);
    ctx->pc = 0x1C7D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D7Cu;
    // 0x1c7d80: 0xac82006c  sw          $v0, 0x6C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C7D7Cu, 0x1C7D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D84u;
label_1c7d84:
    // 0x1c7d84: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x1c7d84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7d88: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c7d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c7d8c: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c7d90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c7d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d94: 0x9042282a  lbu         $v0, 0x282A($v0)
    ctx->pc = 0x1c7d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10282)));
    // 0x1c7d98: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1c7d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x1c7d9c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1c7d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c7da0: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1c7da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x1c7da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
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
label_1c7e2c:
    // 0x1c7e2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c7e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7e30: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7E30u;
    SET_GPR_U32(ctx, 31, 0x1C7E38u);
    ctx->pc = 0x1C7E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E30u;
    // 0x1c7e34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7E30u, 0x1C7E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E38u;
label_1c7e38:
    // 0x1c7e38: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c7e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c7e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e40: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C7E40u;
    SET_GPR_U32(ctx, 31, 0x1C7E48u);
    ctx->pc = 0x1C7E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E40u;
    // 0x1c7e44: 0x24a55a10  addiu       $a1, $a1, 0x5A10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C7E40u, 0x1C7E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E48u;
label_1c7e48:
    // 0x1c7e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7e50: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7E50u;
    SET_GPR_U32(ctx, 31, 0x1C7E58u);
    ctx->pc = 0x1C7E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E50u;
    // 0x1c7e54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7E50u, 0x1C7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E58u;
label_1c7e58:
    // 0x1c7e58: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C7E58u;
    SET_GPR_U32(ctx, 31, 0x1C7E60u);
    ctx->pc = 0x1C7E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E58u;
    // 0x1c7e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C7E58u, 0x1C7E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E60u;
label_1c7e60:
    // 0x1c7e60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c7e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c7e64: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x1c7e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c7e68: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C7E68u;
    {
        const bool branch_taken_0x1c7e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E68u;
        // 0x1c7e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e68) {
            ctx->pc = 0x1C7E2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7e2c;
        }
    }
    ctx->pc = 0x1C7E70u;
    // 0x1c7e70: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1c7e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c7e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e78: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7E78u;
    SET_GPR_U32(ctx, 31, 0x1C7E80u);
    ctx->pc = 0x1C7E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E78u;
    // 0x1c7e7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7E78u, 0x1C7E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E80u;
label_1c7e80:
    // 0x1c7e80: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C7E80u;
    SET_GPR_U32(ctx, 31, 0x1C7E88u);
    ctx->pc = 0x1C7E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E80u;
    // 0x1c7e84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C7E80u, 0x1C7E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E88u;
label_1c7e88:
    // 0x1c7e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e8c: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C7E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C7E94u);
    ctx->pc = 0x1C7E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E8Cu;
    // 0x1c7e90: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C7E8Cu, 0x1C7E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E94u;
label_1c7e94:
    // 0x1c7e94: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x1c7e94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7e98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c7e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ea0:
    // 0x1c7ea0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c7ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c7ea4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7EA4u;
    SET_GPR_U32(ctx, 31, 0x1C7EACu);
    ctx->pc = 0x1C7EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7EA4u;
    // 0x1c7ea8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7EA4u, 0x1C7EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7EACu;
label_1c7eac:
    // 0x1c7eac: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c7eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c7eb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7eb4: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C7EB4u;
    SET_GPR_U32(ctx, 31, 0x1C7EBCu);
    ctx->pc = 0x1C7EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7EB4u;
    // 0x1c7eb8: 0x24a55a10  addiu       $a1, $a1, 0x5A10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C7EB4u, 0x1C7EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7EBCu;
label_1c7ebc:
    // 0x1c7ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ec0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c7ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c7ec4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7EC4u;
    SET_GPR_U32(ctx, 31, 0x1C7ECCu);
    ctx->pc = 0x1C7EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7EC4u;
    // 0x1c7ec8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7EC4u, 0x1C7ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7ECCu;
label_1c7ecc:
    // 0x1c7ecc: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C7ECCu;
    SET_GPR_U32(ctx, 31, 0x1C7ED4u);
    ctx->pc = 0x1C7ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7ECCu;
    // 0x1c7ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C7ECCu, 0x1C7ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7ED4u;
label_1c7ed4:
    // 0x1c7ed4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c7ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c7ed8: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1c7ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c7edc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C7EDCu;
    {
        const bool branch_taken_0x1c7edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EDCu;
        // 0x1c7ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7edc) {
            ctx->pc = 0x1C7EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7ea0;
        }
    }
    ctx->pc = 0x1C7EE4u;
    // 0x1c7ee4: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1c7ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c7ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7eec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c7eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c7ef0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7EF0u;
    SET_GPR_U32(ctx, 31, 0x1C7EF8u);
    ctx->pc = 0x1C7EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7EF0u;
    // 0x1c7ef4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7EF0u, 0x1C7EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7EF8u;
label_1c7ef8:
    // 0x1c7ef8: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c7ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c7efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f00: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1c7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c7f04: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c7f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c7f08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c7f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c7f0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c7f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c7f10: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7F10u;
    SET_GPR_U32(ctx, 31, 0x1C7F18u);
    ctx->pc = 0x1C7F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F10u;
    // 0x1c7f14: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7F10u, 0x1C7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F18u;
label_1c7f18:
    // 0x1c7f18: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c7f18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f20: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C7F20u;
    SET_GPR_U32(ctx, 31, 0x1C7F28u);
    ctx->pc = 0x1C7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F20u;
    // 0x1c7f24: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C7F20u, 0x1C7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F28u;
label_1c7f28:
    // 0x1c7f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f2c: 0xc06dd9c  jal         func_1B7670
    ctx->pc = 0x1C7F2Cu;
    SET_GPR_U32(ctx, 31, 0x1C7F34u);
    ctx->pc = 0x1C7F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F2Cu;
    // 0x1c7f30: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7670u, 0x1C7F2Cu, 0x1C7F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F34u;
label_1c7f34:
    // 0x1c7f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f38: 0xc06dd9c  jal         func_1B7670
    ctx->pc = 0x1C7F38u;
    SET_GPR_U32(ctx, 31, 0x1C7F40u);
    ctx->pc = 0x1C7F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F38u;
    // 0x1c7f3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7670u, 0x1C7F38u, 0x1C7F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F40u;
label_1c7f40:
    // 0x1c7f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f44: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c7f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c7f48: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7F48u;
    SET_GPR_U32(ctx, 31, 0x1C7F50u);
    ctx->pc = 0x1C7F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F48u;
    // 0x1c7f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7F48u, 0x1C7F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F50u;
label_1c7f50:
    // 0x1c7f50: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c7f50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f58: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c7f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c7f5c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C7F64u);
    ctx->pc = 0x1C7F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F5Cu;
    // 0x1c7f60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7F5Cu, 0x1C7F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F64u;
label_1c7f64:
    // 0x1c7f64: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c7f64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f6c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c7f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c7f70: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7F70u;
    SET_GPR_U32(ctx, 31, 0x1C7F78u);
    ctx->pc = 0x1C7F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F70u;
    // 0x1c7f74: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7F70u, 0x1C7F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F78u;
label_1c7f78:
    // 0x1c7f78: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c7f78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f80: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c7f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c7f84: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7F84u;
    SET_GPR_U32(ctx, 31, 0x1C7F8Cu);
    ctx->pc = 0x1C7F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F84u;
    // 0x1c7f88: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7F84u, 0x1C7F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F8Cu;
label_1c7f8c:
    // 0x1c7f8c: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c7f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c7f90: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1c7f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1c7f94: 0x8c2621e0  lw          $a2, 0x21E0($at)
    ctx->pc = 0x1c7f94u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2221E0u));
    // 0x1c7f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f9c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7F9Cu;
    SET_GPR_U32(ctx, 31, 0x1C7FA4u);
    ctx->pc = 0x1C7FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F9Cu;
    // 0x1c7fa0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7F9Cu, 0x1C7FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FA4u;
label_1c7fa4:
    // 0x1c7fa4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c7fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c7fa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fac: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C7FACu;
    SET_GPR_U32(ctx, 31, 0x1C7FB4u);
    ctx->pc = 0x1C7FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7FACu;
    // 0x1c7fb0: 0x24a559d0  addiu       $a1, $a1, 0x59D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C7FACu, 0x1C7FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FB4u;
label_1c7fb4:
    // 0x1c7fb4: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C7FB4u;
    SET_GPR_U32(ctx, 31, 0x1C7FBCu);
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C7FB4u, 0x1C7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FBCu;
label_1c7fbc:
    // 0x1c7fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fc0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c7fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c7fc4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7FC4u;
    SET_GPR_U32(ctx, 31, 0x1C7FCCu);
    ctx->pc = 0x1C7FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7FC4u;
    // 0x1c7fc8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7FC4u, 0x1C7FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FCCu;
label_1c7fcc:
    // 0x1c7fcc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c7fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c7fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fd4: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C7FD4u;
    SET_GPR_U32(ctx, 31, 0x1C7FDCu);
    ctx->pc = 0x1C7FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7FD4u;
    // 0x1c7fd8: 0x24a559b0  addiu       $a1, $a1, 0x59B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C7FD4u, 0x1C7FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FDCu;
label_1c7fdc:
    // 0x1c7fdc: 0xc073094  jal         func_1CC250
    ctx->pc = 0x1C7FDCu;
    SET_GPR_U32(ctx, 31, 0x1C7FE4u);
    ctx->pc = 0x1CC250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC250u, 0x1C7FDCu, 0x1C7FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FE4u;
label_1c7fe4:
    // 0x1c7fe4: 0x24460005  addiu       $a2, $v0, 0x5
    ctx->pc = 0x1c7fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1c7fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fec: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7FECu;
    SET_GPR_U32(ctx, 31, 0x1C7FF4u);
    ctx->pc = 0x1C7FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7FECu;
    // 0x1c7ff0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7FECu, 0x1C7FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FF4u;
label_1c7ff4:
    // 0x1c7ff4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c7ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c7ff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ffc: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C7FFCu;
    SET_GPR_U32(ctx, 31, 0x1C8004u);
    ctx->pc = 0x1C8000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7FFCu;
    // 0x1c8000: 0x24a559b0  addiu       $a1, $a1, 0x59B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C7FFCu, 0x1C8004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8004u;
label_1c8004:
    // 0x1c8004: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c8004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c8008: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c800c: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c800cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c8010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8014: 0x24a55a20  addiu       $a1, $a1, 0x5A20
    ctx->pc = 0x1c8014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23072));
    // 0x1c8018: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1c8018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c801c: 0x8c422830  lw          $v0, 0x2830($v0)
    ctx->pc = 0x1c801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10288)));
    // 0x1c8020: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1C8020u;
    SET_GPR_U32(ctx, 31, 0x1C8028u);
    ctx->pc = 0x1C8024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8020u;
    // 0x1c8024: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1C8020u, 0x1C8028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8028u;
label_1c8028:
    // 0x1c8028: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c802c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8030: 0x24a55c20  addiu       $a1, $a1, 0x5C20
    ctx->pc = 0x1c8030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23584));
    // 0x1c8034: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C8034u;
    SET_GPR_U32(ctx, 31, 0x1C803Cu);
    ctx->pc = 0x1C8038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8034u;
    // 0x1c8038: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C8034u, 0x1C803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C803Cu;
label_1c803c:
    // 0x1c803c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c803cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8044: 0x24a55d10  addiu       $a1, $a1, 0x5D10
    ctx->pc = 0x1c8044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23824));
    // 0x1c8048: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C8048u;
    SET_GPR_U32(ctx, 31, 0x1C8050u);
    ctx->pc = 0x1C804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8048u;
    // 0x1c804c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C8048u, 0x1C8050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8050u;
label_1c8050:
    // 0x1c8050: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x1c8050u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x1c8054: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1c8054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c8058: 0x25086050  addiu       $t0, $t0, 0x6050
    ctx->pc = 0x1c8058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24656));
    // 0x1c805c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c805cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8060: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1c8060u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x216050u));
    // 0x1c8064: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1c8064u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x216060u));
    // 0x1c8068: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1c8068u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x216070u));
    // 0x1c806c: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1c806cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x216080u));
    // 0x1c8070: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c8070u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c8074: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1c8074u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1c8078: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1c8078u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1c807c: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1c807cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1c8080: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x1c8080u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x216090u));
    // 0x1c8084: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x1c8084u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x2160A0u));
    // 0x1c8088: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x1c8088u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x1c808c: 0xc0721e8  jal         func_1C87A0
    ctx->pc = 0x1C808Cu;
    SET_GPR_U32(ctx, 31, 0x1C8094u);
    ctx->pc = 0x1C8090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C808Cu;
    // 0x1c8090: 0x7ce20050  sq          $v0, 0x50($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C87A0u, 0x1C808Cu, 0x1C8094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8094u;
label_1c8094:
    // 0x1c8094: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1c8094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1c8098: 0xc0721ec  jal         func_1C87B0
    ctx->pc = 0x1C8098u;
    SET_GPR_U32(ctx, 31, 0x1C80A0u);
    ctx->pc = 0x1C809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8098u;
    // 0x1c809c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C87B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C87B0u, 0x1C8098u, 0x1C80A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80A0u;
label_1c80a0:
    // 0x1c80a0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1c80a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1c80a4: 0xc0721f4  jal         func_1C87D0
    ctx->pc = 0x1C80A4u;
    SET_GPR_U32(ctx, 31, 0x1C80ACu);
    ctx->pc = 0x1C80A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80A4u;
    // 0x1c80a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C87D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C87D0u, 0x1C80A4u, 0x1C80ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80ACu;
label_1c80ac:
    // 0x1c80ac: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1c80acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x1c80b0: 0xc0721f8  jal         func_1C87E0
    ctx->pc = 0x1C80B0u;
    SET_GPR_U32(ctx, 31, 0x1C80B8u);
    ctx->pc = 0x1C80B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80B0u;
    // 0x1c80b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C87E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C87E0u, 0x1C80B0u, 0x1C80B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80B8u;
label_1c80b8:
    // 0x1c80b8: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1c80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x1c80bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c80bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80c0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1c80c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c80c4: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C80C4u;
    SET_GPR_U32(ctx, 31, 0x1C80CCu);
    ctx->pc = 0x1C80C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80C4u;
    // 0x1c80c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C80C4u, 0x1C80CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80CCu;
label_1c80cc:
    // 0x1c80cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c80ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c80d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c80d4: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C80D4u;
    SET_GPR_U32(ctx, 31, 0x1C80DCu);
    ctx->pc = 0x1C80D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80D4u;
    // 0x1c80d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C80D4u, 0x1C80DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80DCu;
label_1c80dc:
    // 0x1c80dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c80dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80e0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c80e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c80e4: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C80E4u;
    SET_GPR_U32(ctx, 31, 0x1C80ECu);
    ctx->pc = 0x1C80E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80E4u;
    // 0x1c80e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C80E4u, 0x1C80ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80ECu;
label_1c80ec:
    // 0x1c80ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c80ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80f0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c80f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c80f4: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C80F4u;
    SET_GPR_U32(ctx, 31, 0x1C80FCu);
    ctx->pc = 0x1C80F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80F4u;
    // 0x1c80f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C80F4u, 0x1C80FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80FCu;
label_1c80fc:
    // 0x1c80fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c80fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8100: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c8100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c8104: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C8104u;
    SET_GPR_U32(ctx, 31, 0x1C810Cu);
    ctx->pc = 0x1C8108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8104u;
    // 0x1c8108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C8104u, 0x1C810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C810Cu;
label_1c810c:
    // 0x1c810c: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C810Cu;
    SET_GPR_U32(ctx, 31, 0x1C8114u);
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C810Cu, 0x1C8114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8114u;
label_1c8114:
    // 0x1c8114: 0xc073094  jal         func_1CC250
    ctx->pc = 0x1C8114u;
    SET_GPR_U32(ctx, 31, 0x1C811Cu);
    ctx->pc = 0x1C8118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8114u;
    // 0x1c8118: 0x24520007  addiu       $s2, $v0, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC250u, 0x1C8114u, 0x1C811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C811Cu;
label_1c811c:
    // 0x1c811c: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x1c811cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c8120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8124: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c8124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8128: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8128u;
    SET_GPR_U32(ctx, 31, 0x1C8130u);
    ctx->pc = 0x1C812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8128u;
    // 0x1c812c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8128u, 0x1C8130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8130u;
label_1c8130:
    // 0x1c8130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8134: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c8134u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c8138: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c8138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c813c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c813cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8140: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8140u;
    SET_GPR_U32(ctx, 31, 0x1C8148u);
    ctx->pc = 0x1C8144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8140u;
    // 0x1c8144: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8140u, 0x1C8148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8148u;
label_1c8148:
    // 0x1c8148: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c8148u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c814c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c814cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8150: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c8150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8154: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c8154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8158: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c815c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c815cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8160: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8160u;
        // 0x1c8164: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8168u;
}
