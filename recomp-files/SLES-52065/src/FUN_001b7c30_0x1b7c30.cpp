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

// Function: FUN_001b7c30
// Address: 0x1b7c30 - 0x1b7d2c
void FUN_001b7c30_0x1b7c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7c30_0x1b7c30");
#endif

    switch (ctx->pc) {
        case 0x1b7c80u: goto label_1b7c80;
        case 0x1b7c9cu: goto label_1b7c9c;
        case 0x1b7ca8u: goto label_1b7ca8;
        case 0x1b7cbcu: goto label_1b7cbc;
        case 0x1b7cc4u: goto label_1b7cc4;
        case 0x1b7cd0u: goto label_1b7cd0;
        case 0x1b7cecu: goto label_1b7cec;
        case 0x1b7d08u: goto label_1b7d08;
        case 0x1b7d1cu: goto label_1b7d1c;
        default: break;
    }

    ctx->pc = 0x1b7c30u;

    // 0x1b7c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7c34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b7c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b7c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7c3c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1b7c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b7c40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7c44: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1b7c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7c48: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1b7c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7c4c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1b7c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7c50: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1b7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7c54: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1b7c54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b7c58: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1b7c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b7c5c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1b7c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1b7c60: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1b7c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1b7c64: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1b7c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7c68: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1b7c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1b7c6c: 0x8fb00024  lw          $s0, 0x24($sp)
    ctx->pc = 0x1b7c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1b7c70: 0x1602001c  bne         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B7C70u;
    {
        const bool branch_taken_0x1b7c70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7c70) {
            ctx->pc = 0x1B7CE4u;
            goto label_1b7ce4;
        }
    }
    ctx->pc = 0x1B7C78u;
    // 0x1b7c78: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7C78u;
    SET_GPR_U32(ctx, 31, 0x1B7C80u);
    ctx->pc = 0x1B7C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C78u;
    // 0x1b7c7c: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7C78u, 0x1B7C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C80u;
label_1b7c80:
    // 0x1b7c80: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7c84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7c88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7c90: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b7c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7c94: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B7C94u;
    SET_GPR_U32(ctx, 31, 0x1B7C9Cu);
    ctx->pc = 0x1B7C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C94u;
    // 0x1b7c98: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B7C94u, 0x1B7C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C9Cu;
label_1b7c9c:
    // 0x1b7c9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7ca0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7CA0u;
    {
        const bool branch_taken_0x1b7ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CA0u;
        // 0x1b7ca4: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ca0) {
            ctx->pc = 0x1B7CC4u;
            goto label_1b7cc4;
        }
    }
    ctx->pc = 0x1B7CA8u;
label_1b7ca8:
    // 0x1b7ca8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b7ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b7cac: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x1b7cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7cb0: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x1b7cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7cb4: 0xc06ea38  jal         func_1BA8E0
    ctx->pc = 0x1B7CB4u;
    SET_GPR_U32(ctx, 31, 0x1B7CBCu);
    ctx->pc = 0x1B7CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CB4u;
    // 0x1b7cb8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA8E0u, 0x1B7CB4u, 0x1B7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CBCu;
label_1b7cbc:
    // 0x1b7cbc: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B7CBCu;
    SET_GPR_U32(ctx, 31, 0x1B7CC4u);
    ctx->pc = 0x1B7CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CBCu;
    // 0x1b7cc0: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B7CBCu, 0x1B7CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CC4u;
label_1b7cc4:
    // 0x1b7cc4: 0x0  nop
    ctx->pc = 0x1b7cc4u;
    // NOP
    // 0x1b7cc8: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B7CC8u;
    SET_GPR_U32(ctx, 31, 0x1B7CD0u);
    ctx->pc = 0x1B7CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CC8u;
    // 0x1b7ccc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B7CC8u, 0x1B7CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CD0u;
label_1b7cd0:
    // 0x1b7cd0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1b7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b7cd4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B7CD4u;
    {
        const bool branch_taken_0x1b7cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7cd4) {
            ctx->pc = 0x1B7CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7ca8;
        }
    }
    ctx->pc = 0x1B7CDCu;
    // 0x1b7cdc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B7CDCu;
    {
        const bool branch_taken_0x1b7cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CDCu;
        // 0x1b7ce0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cdc) {
            ctx->pc = 0x1B7D20u;
            goto label_1b7d20;
        }
    }
    ctx->pc = 0x1B7CE4u;
label_1b7ce4:
    // 0x1b7ce4: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7CE4u;
    SET_GPR_U32(ctx, 31, 0x1B7CECu);
    ctx->pc = 0x1B7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CE4u;
    // 0x1b7ce8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7CE4u, 0x1B7CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CECu;
label_1b7cec:
    // 0x1b7cec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7cf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7cf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b7cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7cf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7cfc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7d00: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1B7D00u;
    SET_GPR_U32(ctx, 31, 0x1B7D08u);
    ctx->pc = 0x1B7D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D00u;
    // 0x1b7d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1B7D00u, 0x1B7D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D08u;
label_1b7d08:
    // 0x1b7d08: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b7d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b7d0c: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x1b7d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7d10: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x1b7d10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7d14: 0xc06ea38  jal         func_1BA8E0
    ctx->pc = 0x1B7D14u;
    SET_GPR_U32(ctx, 31, 0x1B7D1Cu);
    ctx->pc = 0x1B7D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D14u;
    // 0x1b7d18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA8E0u, 0x1B7D14u, 0x1B7D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D1Cu;
label_1b7d1c:
    // 0x1b7d1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7d20:
    // 0x1b7d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D24u;
        // 0x1b7d28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7D2Cu;
}
