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

// Function: FUN_00108d80
// Address: 0x108d80 - 0x108eec
void FUN_00108d80_0x108d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00108d80_0x108d80");
#endif

    switch (ctx->pc) {
        case 0x108da8u: goto label_108da8;
        case 0x108db0u: goto label_108db0;
        case 0x108dc4u: goto label_108dc4;
        case 0x108dccu: goto label_108dcc;
        case 0x108dd4u: goto label_108dd4;
        case 0x108de0u: goto label_108de0;
        case 0x108df0u: goto label_108df0;
        case 0x108e30u: goto label_108e30;
        case 0x108e44u: goto label_108e44;
        case 0x108e4cu: goto label_108e4c;
        case 0x108e6cu: goto label_108e6c;
        case 0x108ebcu: goto label_108ebc;
        case 0x108ec8u: goto label_108ec8;
        case 0x108ed0u: goto label_108ed0;
        default: break;
    }

    ctx->pc = 0x108d80u;

    // 0x108d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x108d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x108d84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x108d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x108d88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x108d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x108d8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x108d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x108d90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x108d90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x108d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x108d98: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x108d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d9c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x108d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108da0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108DA0u;
    SET_GPR_U32(ctx, 31, 0x108DA8u);
    ctx->pc = 0x108DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DA0u;
    // 0x108da4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108DA0u, 0x108DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DA8u;
label_108da8:
    // 0x108da8: 0xc049f08  jal         func_127C20
    ctx->pc = 0x108DA8u;
    SET_GPR_U32(ctx, 31, 0x108DB0u);
    ctx->pc = 0x108DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DA8u;
    // 0x108dac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C20u, 0x108DA8u, 0x108DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DB0u;
label_108db0:
    // 0x108db0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x108db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x108db4: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x108DB4u;
    {
        const bool branch_taken_0x108db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x108DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DB4u;
        // 0x108db8: 0x26642c00  addiu       $a0, $s3, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108db4) {
            ctx->pc = 0x108DE4u;
            goto label_108de4;
        }
    }
    ctx->pc = 0x108DBCu;
    // 0x108dbc: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108DBCu;
    SET_GPR_U32(ctx, 31, 0x108DC4u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108DBCu, 0x108DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DC4u;
label_108dc4:
    // 0x108dc4: 0xc04a02c  jal         func_1280B0
    ctx->pc = 0x108DC4u;
    SET_GPR_U32(ctx, 31, 0x108DCCu);
    ctx->pc = 0x108DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DC4u;
    // 0x108dc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280B0u, 0x108DC4u, 0x108DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DCCu;
label_108dcc:
    // 0x108dcc: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108DCCu;
    SET_GPR_U32(ctx, 31, 0x108DD4u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108DCCu, 0x108DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DD4u;
label_108dd4:
    // 0x108dd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108dd8: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x108DD8u;
    SET_GPR_U32(ctx, 31, 0x108DE0u);
    ctx->pc = 0x108DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DD8u;
    // 0x108ddc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x108DD8u, 0x108DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DE0u;
label_108de0:
    // 0x108de0: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x108de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
label_108de4:
    // 0x108de4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108de8: 0xc0583f0  jal         func_160FC0
    ctx->pc = 0x108DE8u;
    SET_GPR_U32(ctx, 31, 0x108DF0u);
    ctx->pc = 0x108DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DE8u;
    // 0x108dec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FC0u, 0x108DE8u, 0x108DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DF0u;
label_108df0:
    // 0x108df0: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x108df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x108df4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108DF4u;
    {
        const bool branch_taken_0x108df4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DF4u;
        // 0x108df8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108df4) {
            ctx->pc = 0x108E04u;
            goto label_108e04;
        }
    }
    ctx->pc = 0x108DFCu;
    // 0x108dfc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108DFCu;
    {
        const bool branch_taken_0x108dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DFCu;
        // 0x108e00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108dfc) {
            ctx->pc = 0x108E1Cu;
            goto label_108e1c;
        }
    }
    ctx->pc = 0x108E04u;
label_108e04:
    // 0x108e04: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108e08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108e0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108e10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x108e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108e14: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x108e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x108e18: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x108e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_108e1c:
    // 0x108e1c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x108e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x108e20: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x108e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108e24: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x108e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x108e28: 0xc0564c8  jal         func_159320
    ctx->pc = 0x108E28u;
    SET_GPR_U32(ctx, 31, 0x108E30u);
    ctx->pc = 0x108E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E28u;
    // 0x108e2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159320u, 0x108E28u, 0x108E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E30u;
label_108e30:
    // 0x108e30: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x108e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x108e34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x108e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e3c: 0xc058138  jal         func_1604E0
    ctx->pc = 0x108E3Cu;
    SET_GPR_U32(ctx, 31, 0x108E44u);
    ctx->pc = 0x108E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E3Cu;
    // 0x108e40: 0x260702d0  addiu       $a3, $s0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x108E3Cu, 0x108E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E44u;
label_108e44:
    // 0x108e44: 0xc055d4c  jal         func_157530
    ctx->pc = 0x108E44u;
    SET_GPR_U32(ctx, 31, 0x108E4Cu);
    ctx->pc = 0x108E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E44u;
    // 0x108e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157530u, 0x108E44u, 0x108E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E4Cu;
label_108e4c:
    // 0x108e4c: 0x8e622c1c  lw          $v0, 0x2C1C($s3)
    ctx->pc = 0x108e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11292)));
    // 0x108e50: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x108e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x108e54: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x108e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x108e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x108e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x108e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108e64: 0xc055dec  jal         func_1577B0
    ctx->pc = 0x108E64u;
    SET_GPR_U32(ctx, 31, 0x108E6Cu);
    ctx->pc = 0x108E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E64u;
    // 0x108e68: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577B0u, 0x108E64u, 0x108E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E6Cu;
label_108e6c:
    // 0x108e6c: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x108E6Cu;
    {
        const bool branch_taken_0x108e6c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x108e6c) {
            ctx->pc = 0x108E84u;
            goto label_108e84;
        }
    }
    ctx->pc = 0x108E74u;
    // 0x108e74: 0x860201ec  lh          $v0, 0x1EC($s0)
    ctx->pc = 0x108e74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x108e78: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x108E78u;
    {
        const bool branch_taken_0x108e78 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108e78) {
            ctx->pc = 0x108E84u;
            goto label_108e84;
        }
    }
    ctx->pc = 0x108E80u;
    // 0x108e80: 0xa60201ee  sh          $v0, 0x1EE($s0)
    ctx->pc = 0x108e80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 2));
label_108e84:
    // 0x108e84: 0xa61201ec  sh          $s2, 0x1EC($s0)
    ctx->pc = 0x108e84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 492), (uint16_t)GPR_U32(ctx, 18));
    // 0x108e88: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x108e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x108e8c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108E8Cu;
    {
        const bool branch_taken_0x108e8c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E8Cu;
        // 0x108e90: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e8c) {
            ctx->pc = 0x108E9Cu;
            goto label_108e9c;
        }
    }
    ctx->pc = 0x108E94u;
    // 0x108e94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108E94u;
    {
        const bool branch_taken_0x108e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E94u;
        // 0x108e98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e94) {
            ctx->pc = 0x108EB4u;
            goto label_108eb4;
        }
    }
    ctx->pc = 0x108E9Cu;
label_108e9c:
    // 0x108e9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108ea0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108ea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108ea8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x108ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108eac: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x108eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x108eb0: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x108eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_108eb4:
    // 0x108eb4: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108EB4u;
    SET_GPR_U32(ctx, 31, 0x108EBCu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108EB4u, 0x108EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EBCu;
label_108ebc:
    // 0x108ebc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ec0: 0xc04a018  jal         func_128060
    ctx->pc = 0x108EC0u;
    SET_GPR_U32(ctx, 31, 0x108EC8u);
    ctx->pc = 0x108EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EC0u;
    // 0x108ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x108EC0u, 0x108EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EC8u;
label_108ec8:
    // 0x108ec8: 0xc0423bc  jal         func_108EF0
    ctx->pc = 0x108EC8u;
    SET_GPR_U32(ctx, 31, 0x108ED0u);
    ctx->pc = 0x108ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EC8u;
    // 0x108ecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108EF0u, 0x108EC8u, 0x108ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108ED0u;
label_108ed0:
    // 0x108ed0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x108ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108ed4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x108ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x108ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108edc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x108EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EE4u;
        // 0x108ee8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108EECu;
}
