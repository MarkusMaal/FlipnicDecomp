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

// Function: FUN_0014b020
// Address: 0x14b020 - 0x14b1fc
void FUN_0014b020_0x14b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014b020_0x14b020");
#endif

    switch (ctx->pc) {
        case 0x14b068u: goto label_14b068;
        case 0x14b070u: goto label_14b070;
        case 0x14b084u: goto label_14b084;
        case 0x14b094u: goto label_14b094;
        case 0x14b0ccu: goto label_14b0cc;
        case 0x14b180u: goto label_14b180;
        case 0x14b198u: goto label_14b198;
        case 0x14b1a0u: goto label_14b1a0;
        case 0x14b1e4u: goto label_14b1e4;
        default: break;
    }

    ctx->pc = 0x14b020u;

    // 0x14b020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14b024: 0x3c013fff  lui         $at, 0x3FFF
    ctx->pc = 0x14b024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16383 << 16));
    // 0x14b028: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14b028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14b02c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x14b02cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x14b030: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b034: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b038: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14b038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b03c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b040: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x14b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x14b044: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x14b044u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14b048: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B048u;
    {
        const bool branch_taken_0x14b048 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B048u;
        // 0x14b04c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b048) {
            ctx->pc = 0x14B070u;
            goto label_14b070;
        }
    }
    ctx->pc = 0x14B050u;
    // 0x14b050: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14b050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14b054: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14b054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14b058: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14b058u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14b05c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14b060: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14B060u;
    SET_GPR_U32(ctx, 31, 0x14B068u);
    ctx->pc = 0x14B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B060u;
    // 0x14b064: 0x24a5f200  addiu       $a1, $a1, -0xE00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14B060u, 0x14B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B068u;
label_14b068:
    // 0x14b068: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14B068u;
    SET_GPR_U32(ctx, 31, 0x14B070u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14B068u, 0x14B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B070u;
label_14b070:
    // 0x14b070: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14b070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14b074: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B074u;
    {
        const bool branch_taken_0x14b074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B074u;
        // 0x14b078: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b074) {
            ctx->pc = 0x14B094u;
            goto label_14b094;
        }
    }
    ctx->pc = 0x14B07Cu;
    // 0x14b07c: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x14B07Cu;
    SET_GPR_U32(ctx, 31, 0x14B084u);
    ctx->pc = 0x14B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B07Cu;
    // 0x14b080: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x14B07Cu, 0x14B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B084u;
label_14b084:
    // 0x14b084: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x14b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x14b088: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b08c: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x14B08Cu;
    SET_GPR_U32(ctx, 31, 0x14B094u);
    ctx->pc = 0x14B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B08Cu;
    // 0x14b090: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x14B08Cu, 0x14B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B094u;
label_14b094:
    // 0x14b094: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x14b094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x14b098: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x14b098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x14b09c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x14b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14b0a0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x14b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x14b0a4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x14b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x14b0a8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x14b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x14b0ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14b0b0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x14b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14b0b4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B0B4u;
    {
        const bool branch_taken_0x14b0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B0B4u;
        // 0x14b0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0b4) {
            ctx->pc = 0x14B0D4u;
            goto label_14b0d4;
        }
    }
    ctx->pc = 0x14B0BCu;
    // 0x14b0bc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14b0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b0c0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x14b0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x14b0c4: 0xc052d20  jal         func_14B480
    ctx->pc = 0x14B0C4u;
    SET_GPR_U32(ctx, 31, 0x14B0CCu);
    ctx->pc = 0x14B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0C4u;
    // 0x14b0c8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B480u, 0x14B0C4u, 0x14B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0CCu;
label_14b0cc:
    // 0x14b0cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14B0CCu;
    {
        const bool branch_taken_0x14b0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B0CCu;
        // 0x14b0d0: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0cc) {
            ctx->pc = 0x14B0E0u;
            goto label_14b0e0;
        }
    }
    ctx->pc = 0x14B0D4u;
label_14b0d4:
    // 0x14b0d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14b0d8: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x14b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x14b0dc: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x14b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_14b0e0:
    // 0x14b0e0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x14b0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14b0e4: 0xa6082b  sltu        $at, $a1, $a2
    ctx->pc = 0x14b0e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x14b0e8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x14B0E8u;
    {
        const bool branch_taken_0x14b0e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B0E8u;
        // 0x14b0ec: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0e8) {
            ctx->pc = 0x14B11Cu;
            goto label_14b11c;
        }
    }
    ctx->pc = 0x14B0F0u;
    // 0x14b0f0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x14b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14b0f4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x14b0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14b0f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14b0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14b0fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14b100: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14b100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b104: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b108: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14B108u;
    {
        const bool branch_taken_0x14b108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b108) {
            ctx->pc = 0x14B170u;
            goto label_14b170;
        }
    }
    ctx->pc = 0x14B110u;
    // 0x14b110: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x14b110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b114: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14B114u;
    {
        const bool branch_taken_0x14b114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B114u;
        // 0x14b118: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b114) {
            ctx->pc = 0x14B170u;
            goto label_14b170;
        }
    }
    ctx->pc = 0x14B11Cu;
label_14b11c:
    // 0x14b11c: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x14b11cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x14b120: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x14b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14b124: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x14b124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14b128: 0x2012  mflo        $a0
    ctx->pc = 0x14b128u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x14b12c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14b130: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x14b130u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14b134: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B134u;
    {
        const bool branch_taken_0x14b134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b134) {
            ctx->pc = 0x14B140u;
            goto label_14b140;
        }
    }
    ctx->pc = 0x14B13Cu;
    // 0x14b13c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x14b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_14b140:
    // 0x14b140: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x14b140u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x14b144: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x14b144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14b148: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14b148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14b14c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b150: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14b150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b154: 0x2010  mfhi        $a0
    ctx->pc = 0x14b154u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x14b158: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14b158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14b15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b160: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B160u;
    {
        const bool branch_taken_0x14b160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b160) {
            ctx->pc = 0x14B170u;
            goto label_14b170;
        }
    }
    ctx->pc = 0x14B168u;
    // 0x14b168: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x14b168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b16c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14b16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_14b170:
    // 0x14b170: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x14b170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x14b174: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14b174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14b178: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14B178u;
    {
        const bool branch_taken_0x14b178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B178u;
        // 0x14b17c: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b178) {
            ctx->pc = 0x14B1B0u;
            goto label_14b1b0;
        }
    }
    ctx->pc = 0x14B180u;
label_14b180:
    // 0x14b180: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x14b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14b184: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x14b184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14b188: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b18c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b190: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14B190u;
    SET_GPR_U32(ctx, 31, 0x14B198u);
    ctx->pc = 0x14B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B190u;
    // 0x14b194: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14B190u, 0x14B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B198u;
label_14b198:
    // 0x14b198: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x14B198u;
    SET_GPR_U32(ctx, 31, 0x14B1A0u);
    ctx->pc = 0x14B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B198u;
    // 0x14b19c: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x14B198u, 0x14B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1A0u;
label_14b1a0:
    // 0x14b1a0: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x14b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14b1a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14b1a8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x14b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14b1ac: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x14b1acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_14b1b0:
    // 0x14b1b0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14b1b4: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x14b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14b1b8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14b1bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b1c0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x14b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x14b1c4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14b1c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14b1c8: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x14B1C8u;
    {
        const bool branch_taken_0x14b1c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b1c8) {
            ctx->pc = 0x14B180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b180;
        }
    }
    ctx->pc = 0x14B1D0u;
    // 0x14b1d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b1d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B1D4u;
    {
        const bool branch_taken_0x14b1d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b1d4) {
            ctx->pc = 0x14B1E4u;
            goto label_14b1e4;
        }
    }
    ctx->pc = 0x14B1DCu;
    // 0x14b1dc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14B1DCu;
    SET_GPR_U32(ctx, 31, 0x14B1E4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14B1DCu, 0x14B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1E4u;
label_14b1e4:
    // 0x14b1e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14b1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b1e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14b1e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b1ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b1f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1F4u;
        // 0x14b1f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B1FCu;
}
