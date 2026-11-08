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

// Function: FUN_001a7060
// Address: 0x1a7060 - 0x1a73fc
void FUN_001a7060_0x1a7060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7060_0x1a7060");
#endif

    switch (ctx->pc) {
        case 0x1a7080u: goto label_1a7080;
        case 0x1a7104u: goto label_1a7104;
        case 0x1a7114u: goto label_1a7114;
        case 0x1a7188u: goto label_1a7188;
        case 0x1a7198u: goto label_1a7198;
        case 0x1a7224u: goto label_1a7224;
        case 0x1a7234u: goto label_1a7234;
        case 0x1a7270u: goto label_1a7270;
        case 0x1a7284u: goto label_1a7284;
        case 0x1a7294u: goto label_1a7294;
        case 0x1a736cu: goto label_1a736c;
        case 0x1a7374u: goto label_1a7374;
        case 0x1a7388u: goto label_1a7388;
        case 0x1a73c0u: goto label_1a73c0;
        case 0x1a73c8u: goto label_1a73c8;
        case 0x1a73dcu: goto label_1a73dc;
        default: break;
    }

    ctx->pc = 0x1a7060u;

    // 0x1a7060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a7060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a7064: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a7064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a7068: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a7068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a706c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a706cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a7070: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a7070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7074: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a7074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a7078: 0xc045fb4  jal         func_117ED0
    ctx->pc = 0x1A7078u;
    SET_GPR_U32(ctx, 31, 0x1A7080u);
    ctx->pc = 0x1A707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7078u;
    // 0x1a707c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x117ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117ED0u, 0x1A7078u, 0x1A7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7080u;
label_1a7080:
    // 0x1a7080: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1a7080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1a7084: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a7084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a7088: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7088u;
    {
        const bool branch_taken_0x1a7088 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7088u;
        // 0x1a708c: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7088) {
            ctx->pc = 0x1A709Cu;
            goto label_1a709c;
        }
    }
    ctx->pc = 0x1A7090u;
    // 0x1a7090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7094: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x1A7094u;
    {
        const bool branch_taken_0x1a7094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7094u;
        // 0x1a7098: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7094) {
            ctx->pc = 0x1A73E0u;
            goto label_1a73e0;
        }
    }
    ctx->pc = 0x1A709Cu;
label_1a709c:
    // 0x1a709c: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1a709cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1a70a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a70a4: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1a70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1a70a8: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1a70a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a70ac: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1a70acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a70b0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a70b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a70b4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1a70b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a70b8: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x1a70b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a70bc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A70BCu;
    {
        const bool branch_taken_0x1a70bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A70C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70BCu;
        // 0x1a70c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70bc) {
            ctx->pc = 0x1A70CCu;
            goto label_1a70cc;
        }
    }
    ctx->pc = 0x1A70C4u;
    // 0x1a70c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A70C4u;
    {
        const bool branch_taken_0x1a70c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a70c4) {
            ctx->pc = 0x1A70D0u;
            goto label_1a70d0;
        }
    }
    ctx->pc = 0x1A70CCu;
label_1a70cc:
    // 0x1a70cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a70ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a70d0:
    // 0x1a70d0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A70D0u;
    {
        const bool branch_taken_0x1a70d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a70d0) {
            ctx->pc = 0x1A70FCu;
            goto label_1a70fc;
        }
    }
    ctx->pc = 0x1A70D8u;
    // 0x1a70d8: 0x86030088  lh          $v1, 0x88($s0)
    ctx->pc = 0x1a70d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1a70dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a70e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A70E0u;
    {
        const bool branch_taken_0x1a70e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a70e0) {
            ctx->pc = 0x1A70F0u;
            goto label_1a70f0;
        }
    }
    ctx->pc = 0x1A70E8u;
    // 0x1a70e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A70E8u;
    {
        const bool branch_taken_0x1a70e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a70e8) {
            ctx->pc = 0x1A70F4u;
            goto label_1a70f4;
        }
    }
    ctx->pc = 0x1A70F0u;
label_1a70f0:
    // 0x1a70f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a70f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a70f4:
    // 0x1a70f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A70F4u;
    {
        const bool branch_taken_0x1a70f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a70f4) {
            ctx->pc = 0x1A7128u;
            goto label_1a7128;
        }
    }
    ctx->pc = 0x1A70FCu;
label_1a70fc:
    // 0x1a70fc: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A70FCu;
    SET_GPR_U32(ctx, 31, 0x1A7104u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A70FCu, 0x1A7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7104u;
label_1a7104:
    // 0x1a7104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7108: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1a7108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a710c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A710Cu;
    SET_GPR_U32(ctx, 31, 0x1A7114u);
    ctx->pc = 0x1A7110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A710Cu;
    // 0x1a7110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A710Cu, 0x1A7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7114u;
label_1a7114:
    // 0x1a7114: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1a7114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a7118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a711c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a711cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7120: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1a7120u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1a7124: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x1a7124u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_1a7128:
    // 0x1a7128: 0x8603001c  lh          $v1, 0x1C($s0)
    ctx->pc = 0x1a7128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a712c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7130: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7130u;
    {
        const bool branch_taken_0x1a7130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7130) {
            ctx->pc = 0x1A7140u;
            goto label_1a7140;
        }
    }
    ctx->pc = 0x1A7138u;
    // 0x1a7138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7138u;
    {
        const bool branch_taken_0x1a7138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7138) {
            ctx->pc = 0x1A7144u;
            goto label_1a7144;
        }
    }
    ctx->pc = 0x1A7140u;
label_1a7140:
    // 0x1a7140: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7144:
    // 0x1a7144: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A7144u;
    {
        const bool branch_taken_0x1a7144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7144) {
            ctx->pc = 0x1A7170u;
            goto label_1a7170;
        }
    }
    ctx->pc = 0x1A714Cu;
    // 0x1a714c: 0x86030094  lh          $v1, 0x94($s0)
    ctx->pc = 0x1a714cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1a7150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7154: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7154u;
    {
        const bool branch_taken_0x1a7154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7154) {
            ctx->pc = 0x1A7164u;
            goto label_1a7164;
        }
    }
    ctx->pc = 0x1A715Cu;
    // 0x1a715c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A715Cu;
    {
        const bool branch_taken_0x1a715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a715c) {
            ctx->pc = 0x1A7168u;
            goto label_1a7168;
        }
    }
    ctx->pc = 0x1A7164u;
label_1a7164:
    // 0x1a7164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7168:
    // 0x1a7168: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A7168u;
    {
        const bool branch_taken_0x1a7168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7168) {
            ctx->pc = 0x1A71C8u;
            goto label_1a71c8;
        }
    }
    ctx->pc = 0x1A7170u;
label_1a7170:
    // 0x1a7170: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1a7170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a7174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7178: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A7178u;
    {
        const bool branch_taken_0x1a7178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7178) {
            ctx->pc = 0x1A71C8u;
            goto label_1a71c8;
        }
    }
    ctx->pc = 0x1A7180u;
    // 0x1a7180: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A7180u;
    SET_GPR_U32(ctx, 31, 0x1A7188u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A7180u, 0x1A7188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7188u;
label_1a7188:
    // 0x1a7188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a718c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a7190: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A7190u;
    SET_GPR_U32(ctx, 31, 0x1A7198u);
    ctx->pc = 0x1A7194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7190u;
    // 0x1a7194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A7190u, 0x1A7198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7198u;
label_1a7198:
    // 0x1a7198: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1a7198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x1a719c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a71a0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a71a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a71a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a71a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a71a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a71ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a71acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a71b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a71b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a71b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a71b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a71b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a71b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a71bc: 0x0  nop
    ctx->pc = 0x1a71bcu;
    // NOP
    // 0x1a71c0: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1a71c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x1a71c4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1a71c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_1a71c8:
    // 0x1a71c8: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x1a71c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a71cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a71d0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A71D0u;
    {
        const bool branch_taken_0x1a71d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a71d0) {
            ctx->pc = 0x1A71E0u;
            goto label_1a71e0;
        }
    }
    ctx->pc = 0x1A71D8u;
    // 0x1a71d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A71D8u;
    {
        const bool branch_taken_0x1a71d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a71d8) {
            ctx->pc = 0x1A71E4u;
            goto label_1a71e4;
        }
    }
    ctx->pc = 0x1A71E0u;
label_1a71e0:
    // 0x1a71e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a71e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a71e4:
    // 0x1a71e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A71E4u;
    {
        const bool branch_taken_0x1a71e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a71e4) {
            ctx->pc = 0x1A7210u;
            goto label_1a7210;
        }
    }
    ctx->pc = 0x1A71ECu;
    // 0x1a71ec: 0x86030098  lh          $v1, 0x98($s0)
    ctx->pc = 0x1a71ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1a71f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a71f4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A71F4u;
    {
        const bool branch_taken_0x1a71f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a71f4) {
            ctx->pc = 0x1A7204u;
            goto label_1a7204;
        }
    }
    ctx->pc = 0x1A71FCu;
    // 0x1a71fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A71FCu;
    {
        const bool branch_taken_0x1a71fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a71fc) {
            ctx->pc = 0x1A7208u;
            goto label_1a7208;
        }
    }
    ctx->pc = 0x1A7204u;
label_1a7204:
    // 0x1a7204: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7208:
    // 0x1a7208: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A7208u;
    {
        const bool branch_taken_0x1a7208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7208) {
            ctx->pc = 0x1A7264u;
            goto label_1a7264;
        }
    }
    ctx->pc = 0x1A7210u;
label_1a7210:
    // 0x1a7210: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1a7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a7214: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A7214u;
    {
        const bool branch_taken_0x1a7214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7214) {
            ctx->pc = 0x1A7264u;
            goto label_1a7264;
        }
    }
    ctx->pc = 0x1A721Cu;
    // 0x1a721c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A721Cu;
    SET_GPR_U32(ctx, 31, 0x1A7224u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A721Cu, 0x1A7224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7224u;
label_1a7224:
    // 0x1a7224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7228: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a7228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a722c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A722Cu;
    SET_GPR_U32(ctx, 31, 0x1A7234u);
    ctx->pc = 0x1A7230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A722Cu;
    // 0x1a7230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A722Cu, 0x1A7234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7234u;
label_1a7234:
    // 0x1a7234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a7234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7238: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a7238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a723c: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x1a723cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x1a7240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7244: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a7244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7248: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a7248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a724c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a724cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7250: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a7250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a7254: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a7254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a7258: 0x0  nop
    ctx->pc = 0x1a7258u;
    // NOP
    // 0x1a725c: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1a725cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1a7260: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x1a7260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_1a7264:
    // 0x1a7264: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a7264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a7268: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A7268u;
    SET_GPR_U32(ctx, 31, 0x1A7270u);
    ctx->pc = 0x1A726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7268u;
    // 0x1a726c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A7268u, 0x1A7270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7270u;
label_1a7270:
    // 0x1a7270: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x1a7270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a7274: 0xc64d0014  lwc1        $f13, 0x14($s2)
    ctx->pc = 0x1a7274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a7278: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1a7278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1a727c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1A727Cu;
    SET_GPR_U32(ctx, 31, 0x1A7284u);
    ctx->pc = 0x1A7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A727Cu;
    // 0x1a7280: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1A727Cu, 0x1A7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7284u;
label_1a7284:
    // 0x1a7284: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a7284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a7288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a728c: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A728Cu;
    SET_GPR_U32(ctx, 31, 0x1A7294u);
    ctx->pc = 0x1A7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A728Cu;
    // 0x1a7290: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A728Cu, 0x1A7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7294u;
label_1a7294:
    // 0x1a7294: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1a7294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7298: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a7298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a729c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a729cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a72a0: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1a72a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x1a72a4: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x1a72a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a72a8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1a72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1a72ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a72acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a72b0: 0x0  nop
    ctx->pc = 0x1a72b0u;
    // NOP
    // 0x1a72b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a72b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a72b8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1a72b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1a72bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a72bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a72c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a72c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a72c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a72c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a72c8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1a72c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1a72cc: 0x0  nop
    ctx->pc = 0x1a72ccu;
    // NOP
    // 0x1a72d0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1a72d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1a72d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A72D4u;
    {
        const bool branch_taken_0x1a72d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72D4u;
        // 0x1a72d8: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72d4) {
            ctx->pc = 0x1A72E4u;
            goto label_1a72e4;
        }
    }
    ctx->pc = 0x1A72DCu;
    // 0x1a72dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A72DCu;
    {
        const bool branch_taken_0x1a72dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72DCu;
        // 0x1a72e0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72dc) {
            ctx->pc = 0x1A72E8u;
            goto label_1a72e8;
        }
    }
    ctx->pc = 0x1A72E4u;
label_1a72e4:
    // 0x1a72e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a72e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a72e8:
    // 0x1a72e8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a72ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a72ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a72f0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1a72f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1a72f4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1a72f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a72f8: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A72F8u;
    {
        const bool branch_taken_0x1a72f8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a72f8) {
            ctx->pc = 0x1A7330u;
            goto label_1a7330;
        }
    }
    ctx->pc = 0x1A7300u;
    // 0x1a7300: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a7300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7304: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a7304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a7308: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a730c: 0x0  nop
    ctx->pc = 0x1a730cu;
    // NOP
    // 0x1a7310: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a7310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a7314: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a7314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7318: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a7318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a731c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a731cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a7320: 0x0  nop
    ctx->pc = 0x1a7320u;
    // NOP
    // 0x1a7324: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a7324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7328: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7328u;
    {
        const bool branch_taken_0x1a7328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7328) {
            ctx->pc = 0x1A733Cu;
            goto label_1a733c;
        }
    }
    ctx->pc = 0x1A7330u;
label_1a7330:
    // 0x1a7330: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1a7330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1a7334: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a7334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a7338: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1a7338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_1a733c:
    // 0x1a733c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1a733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a7340: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7340u;
    {
        const bool branch_taken_0x1a7340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7340u;
        // 0x1a7344: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7340) {
            ctx->pc = 0x1A7350u;
            goto label_1a7350;
        }
    }
    ctx->pc = 0x1A7348u;
    // 0x1a7348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7348u;
    {
        const bool branch_taken_0x1a7348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7348u;
        // 0x1a734c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7348) {
            ctx->pc = 0x1A7354u;
            goto label_1a7354;
        }
    }
    ctx->pc = 0x1A7350u;
label_1a7350:
    // 0x1a7350: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7354:
    // 0x1a7354: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a7354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a7358: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a7358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a735c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1a735cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1a7360: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7360u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a7364: 0xc062860  jal         func_18A180
    ctx->pc = 0x1A7364u;
    SET_GPR_U32(ctx, 31, 0x1A736Cu);
    ctx->pc = 0x1A7368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7364u;
    // 0x1a7368: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A7364u, 0x1A736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A736Cu;
label_1a736c:
    // 0x1a736c: 0xc062114  jal         func_188450
    ctx->pc = 0x1A736Cu;
    SET_GPR_U32(ctx, 31, 0x1A7374u);
    ctx->pc = 0x1A7370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A736Cu;
    // 0x1a7370: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A736Cu, 0x1A7374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7374u;
label_1a7374:
    // 0x1a7374: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a7374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a7378: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a7378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a737c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a737cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7380: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A7380u;
    SET_GPR_U32(ctx, 31, 0x1A7388u);
    ctx->pc = 0x1A7384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7380u;
    // 0x1a7384: 0x24a50728  addiu       $a1, $a1, 0x728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A7380u, 0x1A7388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7388u;
label_1a7388:
    // 0x1a7388: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1a7388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a738c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7390: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7390u;
    {
        const bool branch_taken_0x1a7390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7390u;
        // 0x1a7394: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7390) {
            ctx->pc = 0x1A73A0u;
            goto label_1a73a0;
        }
    }
    ctx->pc = 0x1A7398u;
    // 0x1a7398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7398u;
    {
        const bool branch_taken_0x1a7398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7398u;
        // 0x1a739c: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7398) {
            ctx->pc = 0x1A73A8u;
            goto label_1a73a8;
        }
    }
    ctx->pc = 0x1A73A0u;
label_1a73a0:
    // 0x1a73a0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1a73a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a73a4: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a73a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1a73a8:
    // 0x1a73a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a73a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a73ac: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1a73acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1a73b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a73b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a73b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a73b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1a73b8: 0xc062860  jal         func_18A180
    ctx->pc = 0x1A73B8u;
    SET_GPR_U32(ctx, 31, 0x1A73C0u);
    ctx->pc = 0x1A73BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A73B8u;
    // 0x1a73bc: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A73B8u, 0x1A73C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A73C0u;
label_1a73c0:
    // 0x1a73c0: 0xc062114  jal         func_188450
    ctx->pc = 0x1A73C0u;
    SET_GPR_U32(ctx, 31, 0x1A73C8u);
    ctx->pc = 0x1A73C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A73C0u;
    // 0x1a73c4: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A73C0u, 0x1A73C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A73C8u;
label_1a73c8:
    // 0x1a73c8: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a73c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a73cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a73ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a73d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a73d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a73d4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A73D4u;
    SET_GPR_U32(ctx, 31, 0x1A73DCu);
    ctx->pc = 0x1A73D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A73D4u;
    // 0x1a73d8: 0x24a50728  addiu       $a1, $a1, 0x728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A73D4u, 0x1A73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A73DCu;
label_1a73dc:
    // 0x1a73dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a73dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a73e0:
    // 0x1a73e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a73e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a73e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a73e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a73e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a73e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a73ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a73ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a73f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a73f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a73f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A73F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73F4u;
        // 0x1a73f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A73F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A73FCu;
}
