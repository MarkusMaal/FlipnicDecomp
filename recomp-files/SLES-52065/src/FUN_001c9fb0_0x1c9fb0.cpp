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

// Function: FUN_001c9fb0
// Address: 0x1c9fb0 - 0x1ca2c0
void FUN_001c9fb0_0x1c9fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c9fb0_0x1c9fb0");
#endif

    switch (ctx->pc) {
        case 0x1c9fe8u: goto label_1c9fe8;
        case 0x1ca014u: goto label_1ca014;
        case 0x1ca07cu: goto label_1ca07c;
        case 0x1ca090u: goto label_1ca090;
        case 0x1ca0a0u: goto label_1ca0a0;
        case 0x1ca0b4u: goto label_1ca0b4;
        case 0x1ca0c8u: goto label_1ca0c8;
        case 0x1ca0dcu: goto label_1ca0dc;
        case 0x1ca120u: goto label_1ca120;
        case 0x1ca130u: goto label_1ca130;
        case 0x1ca140u: goto label_1ca140;
        case 0x1ca168u: goto label_1ca168;
        case 0x1ca178u: goto label_1ca178;
        case 0x1ca188u: goto label_1ca188;
        case 0x1ca1a0u: goto label_1ca1a0;
        case 0x1ca1b8u: goto label_1ca1b8;
        case 0x1ca248u: goto label_1ca248;
        case 0x1ca258u: goto label_1ca258;
        case 0x1ca268u: goto label_1ca268;
        case 0x1ca270u: goto label_1ca270;
        default: break;
    }

    ctx->pc = 0x1c9fb0u;

    // 0x1c9fb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c9fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1c9fb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c9fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c9fb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c9fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c9fbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c9fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c9fc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c9fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c9fc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c9fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c9fc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c9fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c9fcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c9fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c9fd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c9fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c9fd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c9fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c9fdc: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x1c9fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1c9fe0: 0xc0728f0  jal         func_1CA3C0
    ctx->pc = 0x1C9FE0u;
    SET_GPR_U32(ctx, 31, 0x1C9FE8u);
    ctx->pc = 0x1C9FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9FE0u;
    // 0x1c9fe4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA3C0u, 0x1C9FE0u, 0x1C9FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9FE8u;
label_1c9fe8:
    // 0x1c9fe8: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x1c9fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x1c9fec: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x1c9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1c9ff0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9FF0u;
    {
        const bool branch_taken_0x1c9ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FF0u;
        // 0x1c9ff4: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ff0) {
            ctx->pc = 0x1CA004u;
            goto label_1ca004;
        }
    }
    ctx->pc = 0x1C9FF8u;
    // 0x1c9ff8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c9ffc: 0xaea20060  sw          $v0, 0x60($s5)
    ctx->pc = 0x1c9ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 2));
    // 0x1ca000: 0xaea20064  sw          $v0, 0x64($s5)
    ctx->pc = 0x1ca000u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 2));
label_1ca004:
    // 0x1ca004: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1ca004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1ca008: 0x244210c8  addiu       $v0, $v0, 0x10C8
    ctx->pc = 0x1ca008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    // 0x1ca00c: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1CA00Cu;
    SET_GPR_U32(ctx, 31, 0x1CA014u);
    ctx->pc = 0x1CA010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA00Cu;
    // 0x1ca010: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1CA00Cu, 0x1CA014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA014u;
label_1ca014:
    // 0x1ca014: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ca014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca018: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ca018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ca01c: 0x24422500  addiu       $v0, $v0, 0x2500
    ctx->pc = 0x1ca01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9472));
    // 0x1ca020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca024: 0x8ea30068  lw          $v1, 0x68($s5)
    ctx->pc = 0x1ca024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x1ca028: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ca028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca02c: 0x3b8c0  sll         $s7, $v1, 3
    ctx->pc = 0x1ca02cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ca030: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1ca030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1ca034: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ca034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ca038: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ca038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca03c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ca03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ca040: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ca040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ca044: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1ca044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1ca048: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x1ca048u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1ca04c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ca04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ca050: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1ca050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1ca054: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1ca054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ca058: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1ca058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ca05c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA05Cu;
    {
        const bool branch_taken_0x1ca05c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA05Cu;
        // 0x1ca060: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca05c) {
            ctx->pc = 0x1CA06Cu;
            goto label_1ca06c;
        }
    }
    ctx->pc = 0x1CA064u;
    // 0x1ca064: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ca064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca068: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1ca068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1ca06c:
    // 0x1ca06c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ca06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ca070: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca074: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CA074u;
    SET_GPR_U32(ctx, 31, 0x1CA07Cu);
    ctx->pc = 0x1CA078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA074u;
    // 0x1ca078: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CA074u, 0x1CA07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA07Cu;
label_1ca07c:
    // 0x1ca07c: 0x26e30008  addiu       $v1, $s7, 0x8
    ctx->pc = 0x1ca07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x1ca080: 0x2e3082a  slt         $at, $s7, $v1
    ctx->pc = 0x1ca080u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ca084: 0x10200080  beqz        $at, . + 4 + (0x80 << 2)
    ctx->pc = 0x1CA084u;
    {
        const bool branch_taken_0x1ca084 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA084u;
        // 0x1ca088: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca084) {
            ctx->pc = 0x1CA288u;
            goto label_1ca288;
        }
    }
    ctx->pc = 0x1CA08Cu;
    // 0x1ca08c: 0x17f040  sll         $fp, $s7, 1
    ctx->pc = 0x1ca08cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_1ca090:
    // 0x1ca090: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca094: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ca094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca098: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA098u;
    SET_GPR_U32(ctx, 31, 0x1CA0A0u);
    ctx->pc = 0x1CA09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA098u;
    // 0x1ca09c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA098u, 0x1CA0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0A0u;
label_1ca0a0:
    // 0x1ca0a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ca0a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0a4: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x1ca0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1ca0a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0ac: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA0ACu;
    SET_GPR_U32(ctx, 31, 0x1CA0B4u);
    ctx->pc = 0x1CA0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA0ACu;
    // 0x1ca0b0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA0ACu, 0x1CA0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0B4u;
label_1ca0b4:
    // 0x1ca0b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca0b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0bc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ca0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ca0c0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA0C0u;
    SET_GPR_U32(ctx, 31, 0x1CA0C8u);
    ctx->pc = 0x1CA0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA0C0u;
    // 0x1ca0c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA0C0u, 0x1CA0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0C8u;
label_1ca0c8:
    // 0x1ca0c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ca0c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0d0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1ca0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ca0d4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA0D4u;
    SET_GPR_U32(ctx, 31, 0x1CA0DCu);
    ctx->pc = 0x1CA0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA0D4u;
    // 0x1ca0d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA0D4u, 0x1CA0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0DCu;
label_1ca0dc:
    // 0x1ca0dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ca0dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1ca0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ca0e4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1ca0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1ca0e8: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x1ca0e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ca0ec: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x1CA0ECu;
    {
        const bool branch_taken_0x1ca0ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0ec) {
            ctx->pc = 0x1CA234u;
            goto label_1ca234;
        }
    }
    ctx->pc = 0x1CA0F4u;
    // 0x1ca0f4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ca0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ca0f8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1ca0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1ca0fc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ca0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ca100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca104: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1ca104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1ca108: 0x84420884  lh          $v0, 0x884($v0)
    ctx->pc = 0x1ca108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2180)));
    // 0x1ca10c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA10Cu;
    {
        const bool branch_taken_0x1ca10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA10Cu;
        // 0x1ca110: 0x3c050021  lui         $a1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca10c) {
            ctx->pc = 0x1CA154u;
            goto label_1ca154;
        }
    }
    ctx->pc = 0x1CA114u;
    // 0x1ca114: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ca114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca118: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA118u;
    SET_GPR_U32(ctx, 31, 0x1CA120u);
    ctx->pc = 0x1CA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA118u;
    // 0x1ca11c: 0x24a569d0  addiu       $a1, $a1, 0x69D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA118u, 0x1CA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA120u;
label_1ca120:
    // 0x1ca120: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca128: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA128u;
    SET_GPR_U32(ctx, 31, 0x1CA130u);
    ctx->pc = 0x1CA12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA128u;
    // 0x1ca12c: 0x24a569d0  addiu       $a1, $a1, 0x69D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA128u, 0x1CA130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA130u;
label_1ca130:
    // 0x1ca130: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca134: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ca134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ca138: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA138u;
    SET_GPR_U32(ctx, 31, 0x1CA140u);
    ctx->pc = 0x1CA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA138u;
    // 0x1ca13c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA138u, 0x1CA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA140u;
label_1ca140:
    // 0x1ca140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca144: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1ca144u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca148: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1ca148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ca14c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA14Cu;
    {
        const bool branch_taken_0x1ca14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA14Cu;
        // 0x1ca150: 0xa043008c  sb          $v1, 0x8C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca14c) {
            ctx->pc = 0x1CA194u;
            goto label_1ca194;
        }
    }
    ctx->pc = 0x1CA154u;
label_1ca154:
    // 0x1ca154: 0x0  nop
    ctx->pc = 0x1ca154u;
    // NOP
    // 0x1ca158: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca15c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ca15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca160: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA160u;
    SET_GPR_U32(ctx, 31, 0x1CA168u);
    ctx->pc = 0x1CA164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA160u;
    // 0x1ca164: 0x24a569e0  addiu       $a1, $a1, 0x69E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA160u, 0x1CA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA168u;
label_1ca168:
    // 0x1ca168: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca16c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca170: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA170u;
    SET_GPR_U32(ctx, 31, 0x1CA178u);
    ctx->pc = 0x1CA174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA170u;
    // 0x1ca174: 0x24a569e0  addiu       $a1, $a1, 0x69E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA170u, 0x1CA178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA178u;
label_1ca178:
    // 0x1ca178: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca17c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ca17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ca180: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA180u;
    SET_GPR_U32(ctx, 31, 0x1CA188u);
    ctx->pc = 0x1CA184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA180u;
    // 0x1ca184: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA180u, 0x1CA188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA188u;
label_1ca188:
    // 0x1ca188: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1ca188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca18c: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1ca18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ca190: 0xa040008c  sb          $zero, 0x8C($v0)
    ctx->pc = 0x1ca190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 0));
label_1ca194:
    // 0x1ca194: 0x0  nop
    ctx->pc = 0x1ca194u;
    // NOP
    // 0x1ca198: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1CA198u;
    SET_GPR_U32(ctx, 31, 0x1CA1A0u);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1CA198u, 0x1CA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1A0u;
label_1ca1a0:
    // 0x1ca1a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA1A0u;
    {
        const bool branch_taken_0x1ca1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1a0) {
            ctx->pc = 0x1CA1C0u;
            goto label_1ca1c0;
        }
    }
    ctx->pc = 0x1CA1A8u;
    // 0x1ca1a8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ca1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ca1ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ca1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1b0: 0xc072ef4  jal         func_1CBBD0
    ctx->pc = 0x1CA1B0u;
    SET_GPR_U32(ctx, 31, 0x1CA1B8u);
    ctx->pc = 0x1CA1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1B0u;
    // 0x1ca1b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBBD0u, 0x1CA1B0u, 0x1CA1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1B8u;
label_1ca1b8:
    // 0x1ca1b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA1B8u;
    {
        const bool branch_taken_0x1ca1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1B8u;
        // 0x1ca1bc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1b8) {
            ctx->pc = 0x1CA1C8u;
            goto label_1ca1c8;
        }
    }
    ctx->pc = 0x1CA1C0u;
label_1ca1c0:
    // 0x1ca1c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ca1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ca1c8:
    // 0x1ca1c8: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA1C8u;
    {
        const bool branch_taken_0x1ca1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1C8u;
        // 0x1ca1cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1c8) {
            ctx->pc = 0x1CA218u;
            goto label_1ca218;
        }
    }
    ctx->pc = 0x1CA1D0u;
    // 0x1ca1d0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA1D0u;
    {
        const bool branch_taken_0x1ca1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca1d0) {
            ctx->pc = 0x1CA200u;
            goto label_1ca200;
        }
    }
    ctx->pc = 0x1CA1D8u;
    // 0x1ca1d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA1D8u;
    {
        const bool branch_taken_0x1ca1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1d8) {
            ctx->pc = 0x1CA1E8u;
            goto label_1ca1e8;
        }
    }
    ctx->pc = 0x1CA1E0u;
    // 0x1ca1e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CA1E0u;
    {
        const bool branch_taken_0x1ca1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1e0) {
            ctx->pc = 0x1CA260u;
            goto label_1ca260;
        }
    }
    ctx->pc = 0x1CA1E8u;
label_1ca1e8:
    // 0x1ca1e8: 0xa2600008  sb          $zero, 0x8($s3)
    ctx->pc = 0x1ca1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca1ec: 0xa2800008  sb          $zero, 0x8($s4)
    ctx->pc = 0x1ca1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca1f0: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1ca1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ca1f4: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x1ca1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca1f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CA1F8u;
    {
        const bool branch_taken_0x1ca1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1F8u;
        // 0x1ca1fc: 0xa0400084  sb          $zero, 0x84($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1f8) {
            ctx->pc = 0x1CA260u;
            goto label_1ca260;
        }
    }
    ctx->pc = 0x1CA200u;
label_1ca200:
    // 0x1ca200: 0xa2630008  sb          $v1, 0x8($s3)
    ctx->pc = 0x1ca200u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca204: 0xa2800008  sb          $zero, 0x8($s4)
    ctx->pc = 0x1ca204u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca208: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1ca208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ca20c: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x1ca20cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca210: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA210u;
    {
        const bool branch_taken_0x1ca210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA210u;
        // 0x1ca214: 0xa0430084  sb          $v1, 0x84($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca210) {
            ctx->pc = 0x1CA260u;
            goto label_1ca260;
        }
    }
    ctx->pc = 0x1CA218u;
label_1ca218:
    // 0x1ca218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca21c: 0xa2620008  sb          $v0, 0x8($s3)
    ctx->pc = 0x1ca21cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca220: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x1ca220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ca224: 0xa2820008  sb          $v0, 0x8($s4)
    ctx->pc = 0x1ca224u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca228: 0xa062007c  sb          $v0, 0x7C($v1)
    ctx->pc = 0x1ca228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca22c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CA22Cu;
    {
        const bool branch_taken_0x1ca22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA22Cu;
        // 0x1ca230: 0xa0620084  sb          $v0, 0x84($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 132), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca22c) {
            ctx->pc = 0x1CA260u;
            goto label_1ca260;
        }
    }
    ctx->pc = 0x1CA234u;
label_1ca234:
    // 0x1ca234: 0x0  nop
    ctx->pc = 0x1ca234u;
    // NOP
    // 0x1ca238: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca23c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ca23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca240: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA240u;
    SET_GPR_U32(ctx, 31, 0x1CA248u);
    ctx->pc = 0x1CA244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA240u;
    // 0x1ca244: 0x24a56a00  addiu       $a1, $a1, 0x6A00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA240u, 0x1CA248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA248u;
label_1ca248:
    // 0x1ca248: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca24c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca250: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA250u;
    SET_GPR_U32(ctx, 31, 0x1CA258u);
    ctx->pc = 0x1CA254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA250u;
    // 0x1ca254: 0x24a56a00  addiu       $a1, $a1, 0x6A00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA250u, 0x1CA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA258u;
label_1ca258:
    // 0x1ca258: 0xa2600008  sb          $zero, 0x8($s3)
    ctx->pc = 0x1ca258u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca25c: 0xa2800008  sb          $zero, 0x8($s4)
    ctx->pc = 0x1ca25cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 0));
label_1ca260:
    // 0x1ca260: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA260u;
    SET_GPR_U32(ctx, 31, 0x1CA268u);
    ctx->pc = 0x1CA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA260u;
    // 0x1ca264: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA260u, 0x1CA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA268u;
label_1ca268:
    // 0x1ca268: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA268u;
    SET_GPR_U32(ctx, 31, 0x1CA270u);
    ctx->pc = 0x1CA26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA268u;
    // 0x1ca26c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA268u, 0x1CA270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA270u;
label_1ca270:
    // 0x1ca270: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ca270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ca274: 0x26e30008  addiu       $v1, $s7, 0x8
    ctx->pc = 0x1ca274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x1ca278: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1ca278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ca27c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ca27cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ca280: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
    ctx->pc = 0x1CA280u;
    {
        const bool branch_taken_0x1ca280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA280u;
        // 0x1ca284: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca280) {
            ctx->pc = 0x1CA090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca090;
        }
    }
    ctx->pc = 0x1CA288u;
label_1ca288:
    // 0x1ca288: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1ca288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ca28c: 0xaea30074  sw          $v1, 0x74($s5)
    ctx->pc = 0x1ca28cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 3));
    // 0x1ca290: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ca290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca294: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ca294u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ca298: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ca298u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ca29c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ca29cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ca2a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ca2a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca2a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ca2a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca2a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ca2a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca2ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ca2acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2B8u;
        // 0x1ca2bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA2C0u;
}
