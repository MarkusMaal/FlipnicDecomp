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

// Function: FUN_001b7b10
// Address: 0x1b7b10 - 0x1b7c28
void FUN_001b7b10_0x1b7b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7b10_0x1b7b10");
#endif

    switch (ctx->pc) {
        case 0x1b7b58u: goto label_1b7b58;
        case 0x1b7b74u: goto label_1b7b74;
        case 0x1b7b80u: goto label_1b7b80;
        case 0x1b7b8cu: goto label_1b7b8c;
        case 0x1b7b98u: goto label_1b7b98;
        case 0x1b7ba0u: goto label_1b7ba0;
        case 0x1b7ba8u: goto label_1b7ba8;
        case 0x1b7bc4u: goto label_1b7bc4;
        case 0x1b7be0u: goto label_1b7be0;
        case 0x1b7becu: goto label_1b7bec;
        case 0x1b7bf4u: goto label_1b7bf4;
        case 0x1b7c08u: goto label_1b7c08;
        case 0x1b7c10u: goto label_1b7c10;
        default: break;
    }

    ctx->pc = 0x1b7b10u;

    // 0x1b7b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b7b14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b7b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b7b18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b7b1c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1b7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b7b20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7b24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7b2c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1b7b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7b30: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1b7b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7b34: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1b7b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7b38: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1b7b38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b7b3c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1b7b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b7b40: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1b7b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1b7b44: 0x8fb10044  lw          $s1, 0x44($sp)
    ctx->pc = 0x1b7b44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1b7b48: 0x1622001c  bne         $s1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B7B48u;
    {
        const bool branch_taken_0x1b7b48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B48u;
        // 0x1b7b4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b48) {
            ctx->pc = 0x1B7BBCu;
            goto label_1b7bbc;
        }
    }
    ctx->pc = 0x1B7B50u;
    // 0x1b7b50: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7B50u;
    SET_GPR_U32(ctx, 31, 0x1B7B58u);
    ctx->pc = 0x1B7B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B50u;
    // 0x1b7b54: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7B50u, 0x1B7B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B58u;
label_1b7b58:
    // 0x1b7b58: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7b5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7b60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b7b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7b68: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b7b68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7b6c: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B7B6Cu;
    SET_GPR_U32(ctx, 31, 0x1B7B74u);
    ctx->pc = 0x1B7B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B6Cu;
    // 0x1b7b70: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B7B6Cu, 0x1B7B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B74u;
label_1b7b74:
    // 0x1b7b74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7b78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7B78u;
    {
        const bool branch_taken_0x1b7b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B78u;
        // 0x1b7b7c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b78) {
            ctx->pc = 0x1B7BA0u;
            goto label_1b7ba0;
        }
    }
    ctx->pc = 0x1B7B80u;
label_1b7b80:
    // 0x1b7b80: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1b7b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b7b84: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1B7B84u;
    SET_GPR_U32(ctx, 31, 0x1B7B8Cu);
    ctx->pc = 0x1B7B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B84u;
    // 0x1b7b88: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1B7B84u, 0x1B7B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B8Cu;
label_1b7b8c:
    // 0x1b7b8c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1b7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b7b90: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1B7B90u;
    SET_GPR_U32(ctx, 31, 0x1B7B98u);
    ctx->pc = 0x1B7B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B90u;
    // 0x1b7b94: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1B7B90u, 0x1B7B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B98u;
label_1b7b98:
    // 0x1b7b98: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B7B98u;
    SET_GPR_U32(ctx, 31, 0x1B7BA0u);
    ctx->pc = 0x1B7B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B98u;
    // 0x1b7b9c: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B7B98u, 0x1B7BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BA0u;
label_1b7ba0:
    // 0x1b7ba0: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B7BA0u;
    SET_GPR_U32(ctx, 31, 0x1B7BA8u);
    ctx->pc = 0x1B7BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BA0u;
    // 0x1b7ba4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B7BA0u, 0x1B7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BA8u;
label_1b7ba8:
    // 0x1b7ba8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1b7ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b7bac: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B7BACu;
    {
        const bool branch_taken_0x1b7bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7bac) {
            ctx->pc = 0x1B7B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7b80;
        }
    }
    ctx->pc = 0x1B7BB4u;
    // 0x1b7bb4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B7BB4u;
    {
        const bool branch_taken_0x1b7bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BB4u;
        // 0x1b7bb8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7bb4) {
            ctx->pc = 0x1B7C14u;
            goto label_1b7c14;
        }
    }
    ctx->pc = 0x1B7BBCu;
label_1b7bbc:
    // 0x1b7bbc: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7BBCu;
    SET_GPR_U32(ctx, 31, 0x1B7BC4u);
    ctx->pc = 0x1B7BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BBCu;
    // 0x1b7bc0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7BBCu, 0x1B7BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BC4u;
label_1b7bc4:
    // 0x1b7bc4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b7bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7bc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7bcc: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x1b7bccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7bd0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b7bd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b7bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7bd8: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1B7BD8u;
    SET_GPR_U32(ctx, 31, 0x1B7BE0u);
    ctx->pc = 0x1B7BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BD8u;
    // 0x1b7bdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1B7BD8u, 0x1B7BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BE0u;
label_1b7be0:
    // 0x1b7be0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1b7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b7be4: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1B7BE4u;
    SET_GPR_U32(ctx, 31, 0x1B7BECu);
    ctx->pc = 0x1B7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BE4u;
    // 0x1b7be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1B7BE4u, 0x1B7BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BECu;
label_1b7bec:
    // 0x1b7bec: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7BECu;
    SET_GPR_U32(ctx, 31, 0x1B7BF4u);
    ctx->pc = 0x1B7BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BECu;
    // 0x1b7bf0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7BECu, 0x1B7BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BF4u;
label_1b7bf4:
    // 0x1b7bf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7bf8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b7bfc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7c00: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1B7C00u;
    SET_GPR_U32(ctx, 31, 0x1B7C08u);
    ctx->pc = 0x1B7C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C00u;
    // 0x1b7c04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1B7C00u, 0x1B7C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C08u;
label_1b7c08:
    // 0x1b7c08: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1B7C08u;
    SET_GPR_U32(ctx, 31, 0x1B7C10u);
    ctx->pc = 0x1B7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C08u;
    // 0x1b7c0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1B7C08u, 0x1B7C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C10u;
label_1b7c10:
    // 0x1b7c10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b7c14:
    // 0x1b7c14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C20u;
        // 0x1b7c24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7C28u;
}
