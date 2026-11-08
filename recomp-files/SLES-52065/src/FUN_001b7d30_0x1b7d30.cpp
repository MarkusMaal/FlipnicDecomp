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

// Function: FUN_001b7d30
// Address: 0x1b7d30 - 0x1b7e7c
void FUN_001b7d30_0x1b7d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7d30_0x1b7d30");
#endif

    switch (ctx->pc) {
        case 0x1b7d90u: goto label_1b7d90;
        case 0x1b7dacu: goto label_1b7dac;
        case 0x1b7db8u: goto label_1b7db8;
        case 0x1b7dc4u: goto label_1b7dc4;
        case 0x1b7ddcu: goto label_1b7ddc;
        case 0x1b7de4u: goto label_1b7de4;
        case 0x1b7df0u: goto label_1b7df0;
        case 0x1b7e0cu: goto label_1b7e0c;
        case 0x1b7e28u: goto label_1b7e28;
        case 0x1b7e34u: goto label_1b7e34;
        case 0x1b7e3cu: goto label_1b7e3c;
        case 0x1b7e50u: goto label_1b7e50;
        case 0x1b7e64u: goto label_1b7e64;
        default: break;
    }

    ctx->pc = 0x1b7d30u;

    // 0x1b7d30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b7d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b7d34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b7d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b7d38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b7d3c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1b7d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b7d40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7d44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7d4c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1b7d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7d50: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1b7d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7d54: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1b7d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7d58: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1b7d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7d5c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1b7d5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b7d60: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1b7d60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b7d64: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1b7d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1b7d68: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1b7d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1b7d6c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1b7d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7d70: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1b7d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7d74: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x1b7d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1b7d78: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1b7d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1b7d7c: 0x8fb10044  lw          $s1, 0x44($sp)
    ctx->pc = 0x1b7d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1b7d80: 0x16220020  bne         $s1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B7D80u;
    {
        const bool branch_taken_0x1b7d80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D80u;
        // 0x1b7d84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d80) {
            ctx->pc = 0x1B7E04u;
            goto label_1b7e04;
        }
    }
    ctx->pc = 0x1B7D88u;
    // 0x1b7d88: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7D88u;
    SET_GPR_U32(ctx, 31, 0x1B7D90u);
    ctx->pc = 0x1B7D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D88u;
    // 0x1b7d8c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7D88u, 0x1B7D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D90u;
label_1b7d90:
    // 0x1b7d90: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b7d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7d94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7d98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b7d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7d9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7da0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b7da0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7da4: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B7DA4u;
    SET_GPR_U32(ctx, 31, 0x1B7DACu);
    ctx->pc = 0x1B7DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DA4u;
    // 0x1b7da8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B7DA4u, 0x1B7DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DACu;
label_1b7dac:
    // 0x1b7dac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7db0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B7DB0u;
    {
        const bool branch_taken_0x1b7db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DB0u;
        // 0x1b7db4: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7db0) {
            ctx->pc = 0x1B7DE4u;
            goto label_1b7de4;
        }
    }
    ctx->pc = 0x1B7DB8u;
label_1b7db8:
    // 0x1b7db8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1b7db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7dbc: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1B7DBCu;
    SET_GPR_U32(ctx, 31, 0x1B7DC4u);
    ctx->pc = 0x1B7DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DBCu;
    // 0x1b7dc0: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1B7DBCu, 0x1B7DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DC4u;
label_1b7dc4:
    // 0x1b7dc4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1b7dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1b7dc8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1b7dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b7dcc: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x1b7dccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b7dd0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1b7dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b7dd4: 0xc06e73c  jal         func_1B9CF0
    ctx->pc = 0x1B7DD4u;
    SET_GPR_U32(ctx, 31, 0x1B7DDCu);
    ctx->pc = 0x1B7DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DD4u;
    // 0x1b7dd8: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CF0u, 0x1B7DD4u, 0x1B7DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DDCu;
label_1b7ddc:
    // 0x1b7ddc: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B7DDCu;
    SET_GPR_U32(ctx, 31, 0x1B7DE4u);
    ctx->pc = 0x1B7DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DDCu;
    // 0x1b7de0: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B7DDCu, 0x1B7DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DE4u;
label_1b7de4:
    // 0x1b7de4: 0x0  nop
    ctx->pc = 0x1b7de4u;
    // NOP
    // 0x1b7de8: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B7DE8u;
    SET_GPR_U32(ctx, 31, 0x1B7DF0u);
    ctx->pc = 0x1B7DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DE8u;
    // 0x1b7dec: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B7DE8u, 0x1B7DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DF0u;
label_1b7df0:
    // 0x1b7df0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b7df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1b7df4: 0x1462fff0  bne         $v1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B7DF4u;
    {
        const bool branch_taken_0x1b7df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7df4) {
            ctx->pc = 0x1B7DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7db8;
        }
    }
    ctx->pc = 0x1B7DFCu;
    // 0x1b7dfc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B7DFCu;
    {
        const bool branch_taken_0x1b7dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DFCu;
        // 0x1b7e00: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7dfc) {
            ctx->pc = 0x1B7E68u;
            goto label_1b7e68;
        }
    }
    ctx->pc = 0x1B7E04u;
label_1b7e04:
    // 0x1b7e04: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7E04u;
    SET_GPR_U32(ctx, 31, 0x1B7E0Cu);
    ctx->pc = 0x1B7E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E04u;
    // 0x1b7e08: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7E04u, 0x1B7E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E0Cu;
label_1b7e0c:
    // 0x1b7e0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b7e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7e10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7e14: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x1b7e14u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7e18: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b7e1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b7e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7e20: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1B7E20u;
    SET_GPR_U32(ctx, 31, 0x1B7E28u);
    ctx->pc = 0x1B7E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E20u;
    // 0x1b7e24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1B7E20u, 0x1B7E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E28u;
label_1b7e28:
    // 0x1b7e28: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1b7e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7e2c: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1B7E2Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E34u);
    ctx->pc = 0x1B7E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E2Cu;
    // 0x1b7e30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1B7E2Cu, 0x1B7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E34u;
label_1b7e34:
    // 0x1b7e34: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7E34u;
    SET_GPR_U32(ctx, 31, 0x1B7E3Cu);
    ctx->pc = 0x1B7E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E34u;
    // 0x1b7e38: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7E34u, 0x1B7E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E3Cu;
label_1b7e3c:
    // 0x1b7e3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7e40: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b7e44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b7e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7e48: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1B7E48u;
    SET_GPR_U32(ctx, 31, 0x1B7E50u);
    ctx->pc = 0x1B7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E48u;
    // 0x1b7e4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1B7E48u, 0x1B7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E50u;
label_1b7e50:
    // 0x1b7e50: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1b7e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1b7e54: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1b7e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b7e58: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x1b7e58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b7e5c: 0xc06e73c  jal         func_1B9CF0
    ctx->pc = 0x1B7E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E64u);
    ctx->pc = 0x1B7E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E5Cu;
    // 0x1b7e60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CF0u, 0x1B7E5Cu, 0x1B7E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E64u;
label_1b7e64:
    // 0x1b7e64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b7e68:
    // 0x1b7e68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7e68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7e6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7e70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E74u;
        // 0x1b7e78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7E7Cu;
}
