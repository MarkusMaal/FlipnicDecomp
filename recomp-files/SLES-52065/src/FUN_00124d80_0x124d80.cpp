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

// Function: FUN_00124d80
// Address: 0x124d80 - 0x12504c
void FUN_00124d80_0x124d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00124d80_0x124d80");
#endif

    switch (ctx->pc) {
        case 0x124db4u: goto label_124db4;
        case 0x124dc0u: goto label_124dc0;
        case 0x124dd0u: goto label_124dd0;
        case 0x124dfcu: goto label_124dfc;
        case 0x124e08u: goto label_124e08;
        case 0x124e2cu: goto label_124e2c;
        case 0x124e4cu: goto label_124e4c;
        case 0x124e70u: goto label_124e70;
        case 0x124e90u: goto label_124e90;
        case 0x124ea4u: goto label_124ea4;
        case 0x124ec4u: goto label_124ec4;
        case 0x124ed0u: goto label_124ed0;
        case 0x124eecu: goto label_124eec;
        case 0x124ef4u: goto label_124ef4;
        case 0x124f00u: goto label_124f00;
        case 0x124f7cu: goto label_124f7c;
        case 0x12500cu: goto label_12500c;
        default: break;
    }

    ctx->pc = 0x124d80u;

    // 0x124d80: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x124d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x124d84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x124d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x124d88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x124d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x124d8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x124d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x124d90: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x124d90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x124d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x124d98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x124d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x124d9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x124d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x124da0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x124da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x124da4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x124da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124da8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dac: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x124DACu;
    SET_GPR_U32(ctx, 31, 0x124DB4u);
    ctx->pc = 0x124DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DACu;
    // 0x124db0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x124DACu, 0x124DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DB4u;
label_124db4:
    // 0x124db4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x124db4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124db8: 0xc080748  jal         func_201D20
    ctx->pc = 0x124DB8u;
    SET_GPR_U32(ctx, 31, 0x124DC0u);
    ctx->pc = 0x124DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DB8u;
    // 0x124dbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x124DB8u, 0x124DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DC0u;
label_124dc0:
    // 0x124dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x124dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dc8: 0xc080702  jal         func_201C08
    ctx->pc = 0x124DC8u;
    SET_GPR_U32(ctx, 31, 0x124DD0u);
    ctx->pc = 0x124DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DC8u;
    // 0x124dcc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x124DC8u, 0x124DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DD0u;
label_124dd0:
    // 0x124dd0: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x124dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x124dd4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x124dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x124dd8: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x124dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x124ddc: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x124ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x124de0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x124de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x124de4: 0x24a5eae0  addiu       $a1, $a1, -0x1520
    ctx->pc = 0x124de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961888));
    // 0x124de8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x124de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x124dec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124df0: 0x2508eaf0  addiu       $t0, $t0, -0x1510
    ctx->pc = 0x124df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961904));
    // 0x124df4: 0xc0805c8  jal         func_201720
    ctx->pc = 0x124DF4u;
    SET_GPR_U32(ctx, 31, 0x124DFCu);
    ctx->pc = 0x124DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DF4u;
    // 0x124df8: 0xae360098  sw          $s6, 0x98($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x124DF4u, 0x124DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DFCu;
label_124dfc:
    // 0x124dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e00: 0xc048f14  jal         func_123C50
    ctx->pc = 0x124E00u;
    SET_GPR_U32(ctx, 31, 0x124E08u);
    ctx->pc = 0x124E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E00u;
    // 0x124e04: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123C50u, 0x124E00u, 0x124E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E08u;
label_124e08:
    // 0x124e08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124E08u;
    {
        const bool branch_taken_0x124e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124e08) {
            ctx->pc = 0x124E18u;
            goto label_124e18;
        }
    }
    ctx->pc = 0x124E10u;
    // 0x124e10: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x124E10u;
    {
        const bool branch_taken_0x124e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E10u;
        // 0x124e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e10) {
            ctx->pc = 0x125024u;
            goto label_125024;
        }
    }
    ctx->pc = 0x124E18u;
label_124e18:
    // 0x124e18: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x124e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x124e1c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x124e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x124e20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x124e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x124e24: 0xc040168  jal         func_1005A0
    ctx->pc = 0x124E24u;
    SET_GPR_U32(ctx, 31, 0x124E2Cu);
    ctx->pc = 0x124E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E24u;
    // 0x124e28: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x124E24u, 0x124E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E2Cu;
label_124e2c:
    // 0x124e2c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x124e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x124e30: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x124e30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x124e34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e38: 0x24a5f860  addiu       $a1, $a1, -0x7A0
    ctx->pc = 0x124e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965344));
    // 0x124e3c: 0x24c6f9c0  addiu       $a2, $a2, -0x640
    ctx->pc = 0x124e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965696));
    // 0x124e40: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x124e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x124e44: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x124E44u;
    SET_GPR_U32(ctx, 31, 0x124E4Cu);
    ctx->pc = 0x124E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E44u;
    // 0x124e48: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x124E44u, 0x124E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E4Cu;
label_124e4c:
    // 0x124e4c: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x124e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x124e50: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x124e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x124e54: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x124E54u;
    {
        const bool branch_taken_0x124e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E54u;
        // 0x124e58: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e54) {
            ctx->pc = 0x124E98u;
            goto label_124e98;
        }
    }
    ctx->pc = 0x124E5Cu;
    // 0x124e5c: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x124e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x124e60: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x124e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x124e64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x124e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x124e68: 0xc040168  jal         func_1005A0
    ctx->pc = 0x124E68u;
    SET_GPR_U32(ctx, 31, 0x124E70u);
    ctx->pc = 0x124E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E68u;
    // 0x124e6c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x124E68u, 0x124E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E70u;
label_124e70:
    // 0x124e70: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x124e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x124e74: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x124e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x124e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e7c: 0x24a5f860  addiu       $a1, $a1, -0x7A0
    ctx->pc = 0x124e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965344));
    // 0x124e80: 0x24c6f9c0  addiu       $a2, $a2, -0x640
    ctx->pc = 0x124e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965696));
    // 0x124e84: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x124e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x124e88: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x124E88u;
    SET_GPR_U32(ctx, 31, 0x124E90u);
    ctx->pc = 0x124E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E88u;
    // 0x124e8c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x124E88u, 0x124E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E90u;
label_124e90:
    // 0x124e90: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x124e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x124e94: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x124e94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_124e98:
    // 0x124e98: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x124E98u;
    {
        const bool branch_taken_0x124e98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E98u;
        // 0x124e9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e98) {
            ctx->pc = 0x125020u;
            goto label_125020;
        }
    }
    ctx->pc = 0x124EA0u;
    // 0x124ea0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x124ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124ea4:
    // 0x124ea4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x124ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x124ea8: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x124ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x124eac: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x124eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x124eb0: 0x24a5eae0  addiu       $a1, $a1, -0x1520
    ctx->pc = 0x124eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961888));
    // 0x124eb4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x124eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x124eb8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x124eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ebc: 0xc0805c8  jal         func_201720
    ctx->pc = 0x124EBCu;
    SET_GPR_U32(ctx, 31, 0x124EC4u);
    ctx->pc = 0x124EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EBCu;
    // 0x124ec0: 0x2508eaf0  addiu       $t0, $t0, -0x1510 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x124EBCu, 0x124EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124EC4u;
label_124ec4:
    // 0x124ec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x124ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ec8: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x124EC8u;
    SET_GPR_U32(ctx, 31, 0x124ED0u);
    ctx->pc = 0x124ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EC8u;
    // 0x124ecc: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x124EC8u, 0x124ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124ED0u;
label_124ed0:
    // 0x124ed0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x124ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ed4: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x124ED4u;
    {
        const bool branch_taken_0x124ed4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x124ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124ED4u;
        // 0x124ed8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ed4) {
            ctx->pc = 0x124EE4u;
            goto label_124ee4;
        }
    }
    ctx->pc = 0x124EDCu;
    // 0x124edc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x124EDCu;
    {
        const bool branch_taken_0x124edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EDCu;
        // 0x124ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124edc) {
            ctx->pc = 0x125024u;
            goto label_125024;
        }
    }
    ctx->pc = 0x124EE4u;
label_124ee4:
    // 0x124ee4: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x124EE4u;
    SET_GPR_U32(ctx, 31, 0x124EECu);
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x124EE4u, 0x124EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124EECu;
label_124eec:
    // 0x124eec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x124EECu;
    {
        const bool branch_taken_0x124eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124eec) {
            ctx->pc = 0x124F10u;
            goto label_124f10;
        }
    }
    ctx->pc = 0x124EF4u;
label_124ef4:
    // 0x124ef4: 0x0  nop
    ctx->pc = 0x124ef4u;
    // NOP
    // 0x124ef8: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x124EF8u;
    SET_GPR_U32(ctx, 31, 0x124F00u);
    ctx->pc = 0x124EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EF8u;
    // 0x124efc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x124EF8u, 0x124F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F00u;
label_124f00:
    // 0x124f00: 0x0  nop
    ctx->pc = 0x124f00u;
    // NOP
    // 0x124f04: 0x0  nop
    ctx->pc = 0x124f04u;
    // NOP
    // 0x124f08: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x124F08u;
    {
        const bool branch_taken_0x124f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124f08) {
            ctx->pc = 0x124EF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124ef4;
        }
    }
    ctx->pc = 0x124F10u;
label_124f10:
    // 0x124f10: 0x92830021  lbu         $v1, 0x21($s4)
    ctx->pc = 0x124f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 33)));
    // 0x124f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124f18: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x124f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
    // 0x124f1c: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x124f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x124f20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124F20u;
    {
        const bool branch_taken_0x124f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x124F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F20u;
        // 0x124f24: 0x26950010  addiu       $s5, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f20) {
            ctx->pc = 0x124F30u;
            goto label_124f30;
        }
    }
    ctx->pc = 0x124F28u;
    // 0x124f28: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x124F28u;
    {
        const bool branch_taken_0x124f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F28u;
        // 0x124f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f28) {
            ctx->pc = 0x125024u;
            goto label_125024;
        }
    }
    ctx->pc = 0x124F30u;
label_124f30:
    // 0x124f30: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x124f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x124f34: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x124f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x124f38: 0x24420b50  addiu       $v0, $v0, 0xB50
    ctx->pc = 0x124f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2896));
    // 0x124f3c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x124f3cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x210B50u));
    // 0x124f40: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x124f40u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x210B60u));
    // 0x124f44: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x124f44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x124f48: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x124f48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x124f4c: 0x92a40013  lbu         $a0, 0x13($s5)
    ctx->pc = 0x124f4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x124f50: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x124f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x124f54: 0x96a2000c  lhu         $v0, 0xC($s5)
    ctx->pc = 0x124f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x124f58: 0x96a60014  lhu         $a2, 0x14($s5)
    ctx->pc = 0x124f58u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x124f5c: 0x96a70016  lhu         $a3, 0x16($s5)
    ctx->pc = 0x124f5cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
    // 0x124f60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x124f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x124f64: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x124f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x124f68: 0x8cb40280  lw          $s4, 0x280($a1)
    ctx->pc = 0x124f68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x124f6c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x124f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x124f70: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x124f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x124f74: 0xc047ec4  jal         func_11FB10
    ctx->pc = 0x124F74u;
    SET_GPR_U32(ctx, 31, 0x124F7Cu);
    ctx->pc = 0x124F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F74u;
    // 0x124f78: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FB10u, 0x124F74u, 0x124F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F7Cu;
label_124f7c:
    // 0x124f7c: 0x92a20012  lbu         $v0, 0x12($s5)
    ctx->pc = 0x124f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x124f80: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x124F80u;
    {
        const bool branch_taken_0x124f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F80u;
        // 0x124f84: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f80) {
            ctx->pc = 0x12500Cu;
            goto label_12500c;
        }
    }
    ctx->pc = 0x124F88u;
    // 0x124f88: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x124f88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124f8c: 0x14680003  bne         $v1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124F8Cu;
    {
        const bool branch_taken_0x124f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x124f8c) {
            ctx->pc = 0x124F9Cu;
            goto label_124f9c;
        }
    }
    ctx->pc = 0x124F94u;
    // 0x124f94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x124F94u;
    {
        const bool branch_taken_0x124f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F94u;
        // 0x124f98: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f94) {
            ctx->pc = 0x124FBCu;
            goto label_124fbc;
        }
    }
    ctx->pc = 0x124F9Cu;
label_124f9c:
    // 0x124f9c: 0x0  nop
    ctx->pc = 0x124f9cu;
    // NOP
    // 0x124fa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x124fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124fa4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124FA4u;
    {
        const bool branch_taken_0x124fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x124fa4) {
            ctx->pc = 0x124FB4u;
            goto label_124fb4;
        }
    }
    ctx->pc = 0x124FACu;
    // 0x124fac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124FACu;
    {
        const bool branch_taken_0x124fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124fac) {
            ctx->pc = 0x124FBCu;
            goto label_124fbc;
        }
    }
    ctx->pc = 0x124FB4u;
label_124fb4:
    // 0x124fb4: 0x0  nop
    ctx->pc = 0x124fb4u;
    // NOP
    // 0x124fb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x124fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124fbc:
    // 0x124fbc: 0x0  nop
    ctx->pc = 0x124fbcu;
    // NOP
    // 0x124fc0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x124fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x124fc4: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124FC4u;
    {
        const bool branch_taken_0x124fc4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x124fc4) {
            ctx->pc = 0x124FDCu;
            goto label_124fdc;
        }
    }
    ctx->pc = 0x124FCCu;
    // 0x124fcc: 0x96a2000e  lhu         $v0, 0xE($s5)
    ctx->pc = 0x124fccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x124fd0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x124fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x124fd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x124FD4u;
    {
        const bool branch_taken_0x124fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FD4u;
        // 0x124fd8: 0x238c2  srl         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fd4) {
            ctx->pc = 0x124FECu;
            goto label_124fec;
        }
    }
    ctx->pc = 0x124FDCu;
label_124fdc:
    // 0x124fdc: 0x0  nop
    ctx->pc = 0x124fdcu;
    // NOP
    // 0x124fe0: 0x96a2000e  lhu         $v0, 0xE($s5)
    ctx->pc = 0x124fe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x124fe4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x124fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x124fe8: 0x23902  srl         $a3, $v0, 4
    ctx->pc = 0x124fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_124fec:
    // 0x124fec: 0x0  nop
    ctx->pc = 0x124fecu;
    // NOP
    // 0x124ff0: 0x96a3000c  lhu         $v1, 0xC($s5)
    ctx->pc = 0x124ff0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x124ff4: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x124ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x124ff8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x124ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x124ffc: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x124ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x125000: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x125000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x125004: 0xc047ec4  jal         func_11FB10
    ctx->pc = 0x125004u;
    SET_GPR_U32(ctx, 31, 0x12500Cu);
    ctx->pc = 0x125008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125004u;
    // 0x125008: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FB10u, 0x125004u, 0x12500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12500Cu;
label_12500c:
    // 0x12500c: 0x0  nop
    ctx->pc = 0x12500cu;
    // NOP
    // 0x125010: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x125010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x125014: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x125014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x125018: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x125018u;
    {
        const bool branch_taken_0x125018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125018u;
        // 0x12501c: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125018) {
            ctx->pc = 0x124EA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124ea4;
        }
    }
    ctx->pc = 0x125020u;
label_125020:
    // 0x125020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125024:
    // 0x125024: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x125024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125028: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x125028u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12502c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12502cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125030: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x125030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125034: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x125034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125038: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x125038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12503c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12503cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125044: 0x3e00008  jr          $ra
    ctx->pc = 0x125044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125044u;
        // 0x125048: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12504Cu;
}
