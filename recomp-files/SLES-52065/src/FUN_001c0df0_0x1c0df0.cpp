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

// Function: FUN_001c0df0
// Address: 0x1c0df0 - 0x1c10f8
void FUN_001c0df0_0x1c0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c0df0_0x1c0df0");
#endif

    switch (ctx->pc) {
        case 0x1c0e28u: goto label_1c0e28;
        case 0x1c0e54u: goto label_1c0e54;
        case 0x1c0ea4u: goto label_1c0ea4;
        case 0x1c0ebcu: goto label_1c0ebc;
        case 0x1c0eccu: goto label_1c0ecc;
        case 0x1c0ee0u: goto label_1c0ee0;
        case 0x1c0ef4u: goto label_1c0ef4;
        case 0x1c0f08u: goto label_1c0f08;
        case 0x1c0f4cu: goto label_1c0f4c;
        case 0x1c0f5cu: goto label_1c0f5c;
        case 0x1c0f6cu: goto label_1c0f6c;
        case 0x1c0f90u: goto label_1c0f90;
        case 0x1c0fa0u: goto label_1c0fa0;
        case 0x1c0fb0u: goto label_1c0fb0;
        case 0x1c0fc8u: goto label_1c0fc8;
        case 0x1c0fe0u: goto label_1c0fe0;
        case 0x1c0ff4u: goto label_1c0ff4;
        case 0x1c1078u: goto label_1c1078;
        case 0x1c1088u: goto label_1c1088;
        case 0x1c1098u: goto label_1c1098;
        case 0x1c10a0u: goto label_1c10a0;
        default: break;
    }

    ctx->pc = 0x1c0df0u;

    // 0x1c0df0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1c0df4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c0df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c0df8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c0df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c0dfc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c0dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c0e00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c0e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c0e04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c0e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c0e08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c0e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c0e0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c0e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c0e10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c0e14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0e1c: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x1c0e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1c0e20: 0xc07047c  jal         func_1C11F0
    ctx->pc = 0x1C0E20u;
    SET_GPR_U32(ctx, 31, 0x1C0E28u);
    ctx->pc = 0x1C0E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E20u;
    // 0x1c0e24: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11F0u, 0x1C0E20u, 0x1C0E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E28u;
label_1c0e28:
    // 0x1c0e28: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x1c0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x1c0e2c: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x1c0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1c0e30: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0E30u;
    {
        const bool branch_taken_0x1c0e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E30u;
        // 0x1c0e34: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e30) {
            ctx->pc = 0x1C0E44u;
            goto label_1c0e44;
        }
    }
    ctx->pc = 0x1C0E38u;
    // 0x1c0e38: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c0e3c: 0xaea20060  sw          $v0, 0x60($s5)
    ctx->pc = 0x1c0e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 2));
    // 0x1c0e40: 0xaea20064  sw          $v0, 0x64($s5)
    ctx->pc = 0x1c0e40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 2));
label_1c0e44:
    // 0x1c0e44: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1c0e48: 0x244210c8  addiu       $v0, $v0, 0x10C8
    ctx->pc = 0x1c0e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    // 0x1c0e4c: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1C0E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C0E54u);
    ctx->pc = 0x1C0E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E4Cu;
    // 0x1c0e50: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1C0E4Cu, 0x1C0E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E54u;
label_1c0e54:
    // 0x1c0e54: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1c0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c0e58: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1c0e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c0e5c: 0x8ea50068  lw          $a1, 0x68($s5)
    ctx->pc = 0x1c0e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x1c0e60: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1c0e60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c0e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c0e68: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x1c0e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1c0e6c: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x1C0E6Cu;
    {
        const bool branch_taken_0x1c0e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E6Cu;
        // 0x1c0e70: 0x5f0c0  sll         $fp, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e6c) {
            ctx->pc = 0x1C10C8u;
            goto label_1c10c8;
        }
    }
    ctx->pc = 0x1C0E74u;
    // 0x1c0e74: 0x7e1023  subu        $v0, $v1, $fp
    ctx->pc = 0x1c0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1c0e78: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1c0e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1c0e7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c0e80: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1c0e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c0e84: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0E84u;
    {
        const bool branch_taken_0x1c0e84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E84u;
        // 0x1c0e88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e84) {
            ctx->pc = 0x1C0E94u;
            goto label_1c0e94;
        }
    }
    ctx->pc = 0x1C0E8Cu;
    // 0x1c0e8c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c0e90: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1c0e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1c0e94:
    // 0x1c0e94: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1c0e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c0e98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e9c: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C0EA4u);
    ctx->pc = 0x1C0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E9Cu;
    // 0x1c0ea0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C0E9Cu, 0x1C0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EA4u;
label_1c0ea4:
    // 0x1c0ea4: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x1c0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x1c0ea8: 0x3c3082a  slt         $at, $fp, $v1
    ctx->pc = 0x1c0ea8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c0eac: 0x10200084  beqz        $at, . + 4 + (0x84 << 2)
    ctx->pc = 0x1C0EACu;
    {
        const bool branch_taken_0x1c0eac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EACu;
        // 0x1c0eb0: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0eac) {
            ctx->pc = 0x1C10C0u;
            goto label_1c10c0;
        }
    }
    ctx->pc = 0x1C0EB4u;
    // 0x1c0eb4: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x1c0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x1c0eb8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1c0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1c0ebc:
    // 0x1c0ebc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ec0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c0ec4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0EC4u;
    SET_GPR_U32(ctx, 31, 0x1C0ECCu);
    ctx->pc = 0x1C0EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EC4u;
    // 0x1c0ec8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0EC4u, 0x1C0ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0ECCu;
label_1c0ecc:
    // 0x1c0ecc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1c0eccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ed0: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x1c0ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1c0ed4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ed8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0ED8u;
    SET_GPR_U32(ctx, 31, 0x1C0EE0u);
    ctx->pc = 0x1C0EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0ED8u;
    // 0x1c0edc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0ED8u, 0x1C0EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EE0u;
label_1c0ee0:
    // 0x1c0ee0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c0ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ee4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ee8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c0ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c0eec: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0EECu;
    SET_GPR_U32(ctx, 31, 0x1C0EF4u);
    ctx->pc = 0x1C0EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EECu;
    // 0x1c0ef0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0EECu, 0x1C0EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EF4u;
label_1c0ef4:
    // 0x1c0ef4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c0ef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ef8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0efc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c0efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c0f00: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0F00u;
    SET_GPR_U32(ctx, 31, 0x1C0F08u);
    ctx->pc = 0x1C0F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F00u;
    // 0x1c0f04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0F00u, 0x1C0F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F08u;
label_1c0f08:
    // 0x1c0f08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c0f08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f0c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c0f10: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1c0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1c0f14: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x1c0f14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c0f18: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x1C0F18u;
    {
        const bool branch_taken_0x1c0f18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f18) {
            ctx->pc = 0x1C1064u;
            goto label_1c1064;
        }
    }
    ctx->pc = 0x1C0F20u;
    // 0x1c0f20: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1c0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c0f24: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x1c0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1c0f28: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c0f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0f2c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1c0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c0f30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c0f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0f34: 0x84420884  lh          $v0, 0x884($v0)
    ctx->pc = 0x1c0f34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2180)));
    // 0x1c0f38: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0F38u;
    {
        const bool branch_taken_0x1c0f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F38u;
        // 0x1c0f3c: 0x3c050021  lui         $a1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f38) {
            ctx->pc = 0x1C0F80u;
            goto label_1c0f80;
        }
    }
    ctx->pc = 0x1C0F40u;
    // 0x1c0f40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c0f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f44: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C0F44u;
    SET_GPR_U32(ctx, 31, 0x1C0F4Cu);
    ctx->pc = 0x1C0F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F44u;
    // 0x1c0f48: 0x24a53f00  addiu       $a1, $a1, 0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C0F44u, 0x1C0F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F4Cu;
label_1c0f4c:
    // 0x1c0f4c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c0f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f54: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C0F54u;
    SET_GPR_U32(ctx, 31, 0x1C0F5Cu);
    ctx->pc = 0x1C0F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F54u;
    // 0x1c0f58: 0x24a53f00  addiu       $a1, $a1, 0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C0F54u, 0x1C0F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F5Cu;
label_1c0f5c:
    // 0x1c0f5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f60: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1c0f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c0f64: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0F64u;
    SET_GPR_U32(ctx, 31, 0x1C0F6Cu);
    ctx->pc = 0x1C0F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F64u;
    // 0x1c0f68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0F64u, 0x1C0F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F6Cu;
label_1c0f6c:
    // 0x1c0f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0f70: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1c0f70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c0f74: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1c0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1c0f78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0F78u;
    {
        const bool branch_taken_0x1c0f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F78u;
        // 0x1c0f7c: 0xa043008c  sb          $v1, 0x8C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f78) {
            ctx->pc = 0x1C0FBCu;
            goto label_1c0fbc;
        }
    }
    ctx->pc = 0x1C0F80u;
label_1c0f80:
    // 0x1c0f80: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0f84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c0f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f88: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C0F88u;
    SET_GPR_U32(ctx, 31, 0x1C0F90u);
    ctx->pc = 0x1C0F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F88u;
    // 0x1c0f8c: 0x24a53f10  addiu       $a1, $a1, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C0F88u, 0x1C0F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F90u;
label_1c0f90:
    // 0x1c0f90: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0f94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c0f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f98: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C0F98u;
    SET_GPR_U32(ctx, 31, 0x1C0FA0u);
    ctx->pc = 0x1C0F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F98u;
    // 0x1c0f9c: 0x24a53f10  addiu       $a1, $a1, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C0F98u, 0x1C0FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FA0u;
label_1c0fa0:
    // 0x1c0fa0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fa4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1c0fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c0fa8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0FA8u;
    SET_GPR_U32(ctx, 31, 0x1C0FB0u);
    ctx->pc = 0x1C0FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FA8u;
    // 0x1c0fac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0FA8u, 0x1C0FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FB0u;
label_1c0fb0:
    // 0x1c0fb0: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c0fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0fb4: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1c0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1c0fb8: 0xa040008c  sb          $zero, 0x8C($v0)
    ctx->pc = 0x1c0fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 0));
label_1c0fbc:
    // 0x1c0fbc: 0x0  nop
    ctx->pc = 0x1c0fbcu;
    // NOP
    // 0x1c0fc0: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1C0FC0u;
    SET_GPR_U32(ctx, 31, 0x1C0FC8u);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1C0FC0u, 0x1C0FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FC8u;
label_1c0fc8:
    // 0x1c0fc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0FC8u;
    {
        const bool branch_taken_0x1c0fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FC8u;
        // 0x1c0fcc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fc8) {
            ctx->pc = 0x1C0FE8u;
            goto label_1c0fe8;
        }
    }
    ctx->pc = 0x1C0FD0u;
    // 0x1c0fd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c0fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fd8: 0xc072ef4  jal         func_1CBBD0
    ctx->pc = 0x1C0FD8u;
    SET_GPR_U32(ctx, 31, 0x1C0FE0u);
    ctx->pc = 0x1C0FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FD8u;
    // 0x1c0fdc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBBD0u, 0x1C0FD8u, 0x1C0FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FE0u;
label_1c0fe0:
    // 0x1c0fe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0FE0u;
    {
        const bool branch_taken_0x1c0fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FE0u;
        // 0x1c0fe4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fe0) {
            ctx->pc = 0x1C0FF8u;
            goto label_1c0ff8;
        }
    }
    ctx->pc = 0x1C0FE8u;
label_1c0fe8:
    // 0x1c0fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fec: 0xc072ef4  jal         func_1CBBD0
    ctx->pc = 0x1C0FECu;
    SET_GPR_U32(ctx, 31, 0x1C0FF4u);
    ctx->pc = 0x1C0FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FECu;
    // 0x1c0ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBBD0u, 0x1C0FECu, 0x1C0FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FF4u;
label_1c0ff4:
    // 0x1c0ff4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0ff8:
    // 0x1c0ff8: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C0FF8u;
    {
        const bool branch_taken_0x1c0ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FF8u;
        // 0x1c0ffc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ff8) {
            ctx->pc = 0x1C1048u;
            goto label_1c1048;
        }
    }
    ctx->pc = 0x1C1000u;
    // 0x1c1000: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C1000u;
    {
        const bool branch_taken_0x1c1000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1000) {
            ctx->pc = 0x1C1030u;
            goto label_1c1030;
        }
    }
    ctx->pc = 0x1C1008u;
    // 0x1c1008: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1008u;
    {
        const bool branch_taken_0x1c1008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1008) {
            ctx->pc = 0x1C1018u;
            goto label_1c1018;
        }
    }
    ctx->pc = 0x1C1010u;
    // 0x1c1010: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C1010u;
    {
        const bool branch_taken_0x1c1010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1010) {
            ctx->pc = 0x1C1090u;
            goto label_1c1090;
        }
    }
    ctx->pc = 0x1C1018u;
label_1c1018:
    // 0x1c1018: 0xa2600008  sb          $zero, 0x8($s3)
    ctx->pc = 0x1c1018u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c101c: 0xa2800008  sb          $zero, 0x8($s4)
    ctx->pc = 0x1c101cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1020: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1c1020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1c1024: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x1c1024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1028: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C1028u;
    {
        const bool branch_taken_0x1c1028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1028u;
        // 0x1c102c: 0xa0400084  sb          $zero, 0x84($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1028) {
            ctx->pc = 0x1C1090u;
            goto label_1c1090;
        }
    }
    ctx->pc = 0x1C1030u;
label_1c1030:
    // 0x1c1030: 0xa2630008  sb          $v1, 0x8($s3)
    ctx->pc = 0x1c1030u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c1034: 0xa2800008  sb          $zero, 0x8($s4)
    ctx->pc = 0x1c1034u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1038: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1c1038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1c103c: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x1c103cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1040: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C1040u;
    {
        const bool branch_taken_0x1c1040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1040u;
        // 0x1c1044: 0xa0430084  sb          $v1, 0x84($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1040) {
            ctx->pc = 0x1C1090u;
            goto label_1c1090;
        }
    }
    ctx->pc = 0x1C1048u;
label_1c1048:
    // 0x1c1048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c104c: 0xa2620008  sb          $v0, 0x8($s3)
    ctx->pc = 0x1c104cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c1050: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x1c1050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1c1054: 0xa2820008  sb          $v0, 0x8($s4)
    ctx->pc = 0x1c1054u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c1058: 0xa062007c  sb          $v0, 0x7C($v1)
    ctx->pc = 0x1c1058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c105c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C105Cu;
    {
        const bool branch_taken_0x1c105c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C105Cu;
        // 0x1c1060: 0xa0620084  sb          $v0, 0x84($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 132), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c105c) {
            ctx->pc = 0x1C1090u;
            goto label_1c1090;
        }
    }
    ctx->pc = 0x1C1064u;
label_1c1064:
    // 0x1c1064: 0x0  nop
    ctx->pc = 0x1c1064u;
    // NOP
    // 0x1c1068: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c106c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1070: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C1070u;
    SET_GPR_U32(ctx, 31, 0x1C1078u);
    ctx->pc = 0x1C1074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1070u;
    // 0x1c1074: 0x24a53f30  addiu       $a1, $a1, 0x3F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C1070u, 0x1C1078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1078u;
label_1c1078:
    // 0x1c1078: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c107c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c107cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1080: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C1080u;
    SET_GPR_U32(ctx, 31, 0x1C1088u);
    ctx->pc = 0x1C1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1080u;
    // 0x1c1084: 0x24a53f30  addiu       $a1, $a1, 0x3F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C1080u, 0x1C1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1088u;
label_1c1088:
    // 0x1c1088: 0xa2600008  sb          $zero, 0x8($s3)
    ctx->pc = 0x1c1088u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c108c: 0xa2800008  sb          $zero, 0x8($s4)
    ctx->pc = 0x1c108cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 0));
label_1c1090:
    // 0x1c1090: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C1090u;
    SET_GPR_U32(ctx, 31, 0x1C1098u);
    ctx->pc = 0x1C1094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1090u;
    // 0x1c1094: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C1090u, 0x1C1098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1098u;
label_1c1098:
    // 0x1c1098: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C1098u;
    SET_GPR_U32(ctx, 31, 0x1C10A0u);
    ctx->pc = 0x1C109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1098u;
    // 0x1c109c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C1098u, 0x1C10A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10A0u;
label_1c10a0:
    // 0x1c10a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1c10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c10a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c10a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c10a8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1c10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1c10ac: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1c10acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1c10b0: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x1c10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x1c10b4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1c10b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c10b8: 0x1460ff80  bnez        $v1, . + 4 + (-0x80 << 2)
    ctx->pc = 0x1C10B8u;
    {
        const bool branch_taken_0x1c10b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10B8u;
        // 0x1c10bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10b8) {
            ctx->pc = 0x1C0EBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0ebc;
        }
    }
    ctx->pc = 0x1C10C0u;
label_1c10c0:
    // 0x1c10c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c10c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c10c4: 0xaea30074  sw          $v1, 0x74($s5)
    ctx->pc = 0x1c10c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 3));
label_1c10c8:
    // 0x1c10c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c10c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c10cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1c10ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c10d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c10d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c10d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c10d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c10d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c10d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c10dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c10dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c10e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c10e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c10e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c10e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c10e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c10e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c10ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c10ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c10f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C10F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10F0u;
        // 0x1c10f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C10F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C10F8u;
}
