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

// Function: FUN_0012e070
// Address: 0x12e070 - 0x12e348
void FUN_0012e070_0x12e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012e070_0x12e070");
#endif

    switch (ctx->pc) {
        case 0x12e0bcu: goto label_12e0bc;
        case 0x12e0d8u: goto label_12e0d8;
        case 0x12e0e4u: goto label_12e0e4;
        case 0x12e104u: goto label_12e104;
        case 0x12e128u: goto label_12e128;
        case 0x12e134u: goto label_12e134;
        case 0x12e154u: goto label_12e154;
        case 0x12e174u: goto label_12e174;
        case 0x12e18cu: goto label_12e18c;
        case 0x12e1acu: goto label_12e1ac;
        case 0x12e1bcu: goto label_12e1bc;
        case 0x12e1d0u: goto label_12e1d0;
        case 0x12e1dcu: goto label_12e1dc;
        case 0x12e290u: goto label_12e290;
        case 0x12e2c0u: goto label_12e2c0;
        case 0x12e2d0u: goto label_12e2d0;
        case 0x12e2fcu: goto label_12e2fc;
        case 0x12e308u: goto label_12e308;
        case 0x12e314u: goto label_12e314;
        default: break;
    }

    ctx->pc = 0x12e070u;

    // 0x12e070: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x12e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x12e074: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x12e074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x12e078: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x12e078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x12e07c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12e07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x12e080: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12e080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12e084: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12e084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12e088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12e088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12e08c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x12e08cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e090: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12e094: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12e094u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12e09c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12e0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12e0a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e0a8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x12e0a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0ac: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x12e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x12e0b0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x12e0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0b4: 0xc049dd8  jal         func_127760
    ctx->pc = 0x12E0B4u;
    SET_GPR_U32(ctx, 31, 0x12E0BCu);
    ctx->pc = 0x12E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E0B4u;
    // 0x12e0b8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x12E0B4u, 0x12E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0BCu;
label_12e0bc:
    // 0x12e0bc: 0x27b200d4  addiu       $s2, $sp, 0xD4
    ctx->pc = 0x12e0bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x12e0c0: 0x27be00d8  addiu       $fp, $sp, 0xD8
    ctx->pc = 0x12e0c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x12e0c4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x12e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x12e0c8: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12E0C8u;
    {
        const bool branch_taken_0x12e0c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0C8u;
        // 0x12e0cc: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0c8) {
            ctx->pc = 0x12E120u;
            goto label_12e120;
        }
    }
    ctx->pc = 0x12E0D0u;
    // 0x12e0d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12E0D0u;
    {
        const bool branch_taken_0x12e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0D0u;
        // 0x12e0d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0d0) {
            ctx->pc = 0x12E108u;
            goto label_12e108;
        }
    }
    ctx->pc = 0x12E0D8u;
label_12e0d8:
    // 0x12e0d8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x12e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x12e0dc: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x12E0DCu;
    SET_GPR_U32(ctx, 31, 0x12E0E4u);
    ctx->pc = 0x12E0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E0DCu;
    // 0x12e0e0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x12E0DCu, 0x12E0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0E4u;
label_12e0e4:
    // 0x12e0e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e0e8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12e0ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e0f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12e0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e0f4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x12e0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12e0f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e0fc: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x12E0FCu;
    SET_GPR_U32(ctx, 31, 0x12E104u);
    ctx->pc = 0x12E100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E0FCu;
    // 0x12e100: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x12E0FCu, 0x12E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E104u;
label_12e104:
    // 0x12e104: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x12e104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_12e108:
    // 0x12e108: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x12e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x12e10c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x12e10cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e110: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x12E110u;
    {
        const bool branch_taken_0x12e110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e110) {
            ctx->pc = 0x12E0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e0d8;
        }
    }
    ctx->pc = 0x12E118u;
    // 0x12e118: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12E118u;
    {
        const bool branch_taken_0x12e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e118) {
            ctx->pc = 0x12E168u;
            goto label_12e168;
        }
    }
    ctx->pc = 0x12E120u;
label_12e120:
    // 0x12e120: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12E120u;
    {
        const bool branch_taken_0x12e120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E120u;
        // 0x12e124: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e120) {
            ctx->pc = 0x12E158u;
            goto label_12e158;
        }
    }
    ctx->pc = 0x12E128u;
label_12e128:
    // 0x12e128: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x12e128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x12e12c: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x12E12Cu;
    SET_GPR_U32(ctx, 31, 0x12E134u);
    ctx->pc = 0x12E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E12Cu;
    // 0x12e130: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x12E12Cu, 0x12E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E134u;
label_12e134:
    // 0x12e134: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12e134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e138: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12e138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12e13c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e140: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12e140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e144: 0x27a700f4  addiu       $a3, $sp, 0xF4
    ctx->pc = 0x12e144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x12e148: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e14c: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x12E14Cu;
    SET_GPR_U32(ctx, 31, 0x12E154u);
    ctx->pc = 0x12E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E14Cu;
    // 0x12e150: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x12E14Cu, 0x12E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E154u;
label_12e154:
    // 0x12e154: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12e154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12e158:
    // 0x12e158: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x12e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x12e15c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x12e15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e160: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x12E160u;
    {
        const bool branch_taken_0x12e160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e160) {
            ctx->pc = 0x12E128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e128;
        }
    }
    ctx->pc = 0x12E168u;
label_12e168:
    // 0x12e168: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12e168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12e16c: 0xc04b8e8  jal         func_12E3A0
    ctx->pc = 0x12E16Cu;
    SET_GPR_U32(ctx, 31, 0x12E174u);
    ctx->pc = 0x12E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E16Cu;
    // 0x12e170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E3A0u, 0x12E16Cu, 0x12E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E174u;
label_12e174:
    // 0x12e174: 0x27b600e4  addiu       $s6, $sp, 0xE4
    ctx->pc = 0x12e174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x12e178: 0x27b700e8  addiu       $s7, $sp, 0xE8
    ctx->pc = 0x12e178u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x12e17c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x12e17cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x12e180: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x12e180u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x12e184: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x12E184u;
    {
        const bool branch_taken_0x12e184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E184u;
        // 0x12e188: 0x8fd00000  lw          $s0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e184) {
            ctx->pc = 0x12E294u;
            goto label_12e294;
        }
    }
    ctx->pc = 0x12E18Cu;
label_12e18c:
    // 0x12e18c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e190: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x12e190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x12e194: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x12e194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x12e198: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x12e198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x12e19c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1a0: 0x27a60104  addiu       $a2, $sp, 0x104
    ctx->pc = 0x12e1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x12e1a4: 0xc04b924  jal         func_12E490
    ctx->pc = 0x12E1A4u;
    SET_GPR_U32(ctx, 31, 0x12E1ACu);
    ctx->pc = 0x12E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1A4u;
    // 0x12e1a8: 0xafa30104  sw          $v1, 0x104($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E490u, 0x12E1A4u, 0x12E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1ACu;
label_12e1ac:
    // 0x12e1ac: 0x8fb10100  lw          $s1, 0x100($sp)
    ctx->pc = 0x12e1acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12e1b0: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x12e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x12e1b4: 0xc04b8e4  jal         func_12E390
    ctx->pc = 0x12E1B4u;
    SET_GPR_U32(ctx, 31, 0x12E1BCu);
    ctx->pc = 0x12E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1B4u;
    // 0x12e1b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E390u, 0x12E1B4u, 0x12E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1BCu;
label_12e1bc:
    // 0x12e1bc: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x12e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x12e1c0: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12E1C0u;
    {
        const bool branch_taken_0x12e1c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1C0u;
        // 0x12e1c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1c0) {
            ctx->pc = 0x12E228u;
            goto label_12e228;
        }
    }
    ctx->pc = 0x12E1C8u;
    // 0x12e1c8: 0xc04b8e0  jal         func_12E380
    ctx->pc = 0x12E1C8u;
    SET_GPR_U32(ctx, 31, 0x12E1D0u);
    ctx->pc = 0x12E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E380u, 0x12E1C8u, 0x12E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1D0u;
label_12e1d0:
    // 0x12e1d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12e1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e1d4: 0xc04b8dc  jal         func_12E370
    ctx->pc = 0x12E1D4u;
    SET_GPR_U32(ctx, 31, 0x12E1DCu);
    ctx->pc = 0x12E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1D4u;
    // 0x12e1d8: 0x27a400f8  addiu       $a0, $sp, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E370u, 0x12E1D4u, 0x12E1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1DCu;
label_12e1dc:
    // 0x12e1dc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x12e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x12e1e0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x12e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12e1e4: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x12e1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e1e8: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x12e1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e1ec: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x12e1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e1f0: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x12e1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e1f4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x12e1f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12e1f8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x12e1f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12e1fc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x12e1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12e200: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x12e200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x12e204: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x12e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e208: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x12e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e20c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x12e20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e210: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x12e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e214: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x12e214u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x12e218: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x12e218u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x12e21c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x12e21cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x12e220: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12E220u;
    {
        const bool branch_taken_0x12e220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E220u;
        // 0x12e224: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e220) {
            ctx->pc = 0x12E26Cu;
            goto label_12e26c;
        }
    }
    ctx->pc = 0x12E228u;
label_12e228:
    // 0x12e228: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x12e228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12e22c: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x12e22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e230: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x12e230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e234: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x12e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e238: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x12e238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e23c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x12e23cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12e240: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x12e240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12e244: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x12e244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12e248: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x12e248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x12e24c: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x12e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e250: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x12e250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e254: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x12e254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e258: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x12e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e25c: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x12e25cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x12e260: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x12e260u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x12e264: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x12e264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x12e268: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x12e268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_12e26c:
    // 0x12e26c: 0x0  nop
    ctx->pc = 0x12e26cu;
    // NOP
    // 0x12e270: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x12e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12e274: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x12e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12e278: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12e278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12e27c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12e27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e280: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x12e280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12e284: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12e284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12e288: 0xc04b994  jal         func_12E650
    ctx->pc = 0x12E288u;
    SET_GPR_U32(ctx, 31, 0x12E290u);
    ctx->pc = 0x12E28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E288u;
    // 0x12e28c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E650u, 0x12E288u, 0x12E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E290u;
label_12e290:
    // 0x12e290: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x12e290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_12e294:
    // 0x12e294: 0x0  nop
    ctx->pc = 0x12e294u;
    // NOP
    // 0x12e298: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12e298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e29c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x12e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12e2a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e2a8: 0x1602ffb8  bne         $s0, $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x12E2A8u;
    {
        const bool branch_taken_0x12e2a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x12e2a8) {
            ctx->pc = 0x12E18Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e18c;
        }
    }
    ctx->pc = 0x12E2B0u;
    // 0x12e2b0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x12e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x12e2b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12e2b8: 0xc04b8d8  jal         func_12E360
    ctx->pc = 0x12E2B8u;
    SET_GPR_U32(ctx, 31, 0x12E2C0u);
    ctx->pc = 0x12E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2B8u;
    // 0x12e2bc: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E360u, 0x12E2B8u, 0x12E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2C0u;
label_12e2c0:
    // 0x12e2c0: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x12e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x12e2c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2c8: 0xc04b8d4  jal         func_12E350
    ctx->pc = 0x12E2C8u;
    SET_GPR_U32(ctx, 31, 0x12E2D0u);
    ctx->pc = 0x12E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2C8u;
    // 0x12e2cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E350u, 0x12E2C8u, 0x12E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2D0u;
label_12e2d0:
    // 0x12e2d0: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x12e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x12e2d4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12e2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12e2d8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x12e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x12e2dc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12e2e0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x12e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12e2e4: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x12e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12e2e8: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x12e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x12e2ec: 0x83a70108  lb          $a3, 0x108($sp)
    ctx->pc = 0x12e2ecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x12e2f0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12e2f4: 0xc04b944  jal         func_12E510
    ctx->pc = 0x12E2F4u;
    SET_GPR_U32(ctx, 31, 0x12E2FCu);
    ctx->pc = 0x12E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2F4u;
    // 0x12e2f8: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E510u, 0x12E2F4u, 0x12E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2FCu;
label_12e2fc:
    // 0x12e2fc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12e2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12e300: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12E300u;
    SET_GPR_U32(ctx, 31, 0x12E308u);
    ctx->pc = 0x12E304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E300u;
    // 0x12e304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12E300u, 0x12E308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E308u;
label_12e308:
    // 0x12e308: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12e308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12e30c: 0xc048414  jal         func_121050
    ctx->pc = 0x12E30Cu;
    SET_GPR_U32(ctx, 31, 0x12E314u);
    ctx->pc = 0x12E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E30Cu;
    // 0x12e310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x12E30Cu, 0x12E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E314u;
label_12e314:
    // 0x12e314: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12e314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12e318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e31c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x12e31cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12e320: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x12e320u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12e324: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12e324u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e328: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12e328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12e32c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12e32cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e330: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12e330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e334: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12e334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12e338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e33c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e340: 0x3e00008  jr          $ra
    ctx->pc = 0x12E340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E340u;
        // 0x12e344: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E348u;
}
