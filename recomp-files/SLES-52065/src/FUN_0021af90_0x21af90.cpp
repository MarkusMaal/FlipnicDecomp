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

// Function: FUN_0021af90
// Address: 0x21af90 - 0x21b174
void FUN_0021af90_0x21af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021af90_0x21af90");
#endif

    switch (ctx->pc) {
        case 0x21af90u: goto label_21af90;
        case 0x21af94u: goto label_21af94;
        case 0x21af98u: goto label_21af98;
        case 0x21af9cu: goto label_21af9c;
        case 0x21afa0u: goto label_21afa0;
        case 0x21afa4u: goto label_21afa4;
        case 0x21afa8u: goto label_21afa8;
        case 0x21afacu: goto label_21afac;
        case 0x21afb0u: goto label_21afb0;
        case 0x21afb4u: goto label_21afb4;
        case 0x21afb8u: goto label_21afb8;
        case 0x21afbcu: goto label_21afbc;
        case 0x21afc0u: goto label_21afc0;
        case 0x21afc4u: goto label_21afc4;
        case 0x21afc8u: goto label_21afc8;
        case 0x21afccu: goto label_21afcc;
        case 0x21afd0u: goto label_21afd0;
        case 0x21afd4u: goto label_21afd4;
        case 0x21afd8u: goto label_21afd8;
        case 0x21afdcu: goto label_21afdc;
        case 0x21afe0u: goto label_21afe0;
        case 0x21afe4u: goto label_21afe4;
        case 0x21afe8u: goto label_21afe8;
        case 0x21afecu: goto label_21afec;
        case 0x21aff0u: goto label_21aff0;
        case 0x21aff4u: goto label_21aff4;
        case 0x21aff8u: goto label_21aff8;
        case 0x21affcu: goto label_21affc;
        case 0x21b000u: goto label_21b000;
        case 0x21b004u: goto label_21b004;
        case 0x21b008u: goto label_21b008;
        case 0x21b00cu: goto label_21b00c;
        case 0x21b010u: goto label_21b010;
        case 0x21b014u: goto label_21b014;
        case 0x21b018u: goto label_21b018;
        case 0x21b01cu: goto label_21b01c;
        case 0x21b020u: goto label_21b020;
        case 0x21b024u: goto label_21b024;
        case 0x21b028u: goto label_21b028;
        case 0x21b02cu: goto label_21b02c;
        case 0x21b030u: goto label_21b030;
        case 0x21b034u: goto label_21b034;
        case 0x21b038u: goto label_21b038;
        case 0x21b03cu: goto label_21b03c;
        case 0x21b040u: goto label_21b040;
        case 0x21b044u: goto label_21b044;
        case 0x21b048u: goto label_21b048;
        case 0x21b04cu: goto label_21b04c;
        case 0x21b050u: goto label_21b050;
        case 0x21b054u: goto label_21b054;
        case 0x21b058u: goto label_21b058;
        case 0x21b05cu: goto label_21b05c;
        case 0x21b060u: goto label_21b060;
        case 0x21b064u: goto label_21b064;
        case 0x21b068u: goto label_21b068;
        case 0x21b06cu: goto label_21b06c;
        case 0x21b070u: goto label_21b070;
        case 0x21b074u: goto label_21b074;
        case 0x21b078u: goto label_21b078;
        case 0x21b07cu: goto label_21b07c;
        case 0x21b080u: goto label_21b080;
        case 0x21b084u: goto label_21b084;
        case 0x21b088u: goto label_21b088;
        case 0x21b08cu: goto label_21b08c;
        case 0x21b090u: goto label_21b090;
        case 0x21b094u: goto label_21b094;
        case 0x21b098u: goto label_21b098;
        case 0x21b09cu: goto label_21b09c;
        case 0x21b0a0u: goto label_21b0a0;
        case 0x21b0a4u: goto label_21b0a4;
        case 0x21b0a8u: goto label_21b0a8;
        case 0x21b0acu: goto label_21b0ac;
        case 0x21b0b0u: goto label_21b0b0;
        case 0x21b0b4u: goto label_21b0b4;
        case 0x21b0b8u: goto label_21b0b8;
        case 0x21b0bcu: goto label_21b0bc;
        case 0x21b0c0u: goto label_21b0c0;
        case 0x21b0c4u: goto label_21b0c4;
        case 0x21b0c8u: goto label_21b0c8;
        case 0x21b0ccu: goto label_21b0cc;
        case 0x21b0d0u: goto label_21b0d0;
        case 0x21b0d4u: goto label_21b0d4;
        case 0x21b0d8u: goto label_21b0d8;
        case 0x21b0dcu: goto label_21b0dc;
        case 0x21b0e0u: goto label_21b0e0;
        case 0x21b0e4u: goto label_21b0e4;
        case 0x21b0e8u: goto label_21b0e8;
        case 0x21b0ecu: goto label_21b0ec;
        case 0x21b0f0u: goto label_21b0f0;
        case 0x21b0f4u: goto label_21b0f4;
        case 0x21b0f8u: goto label_21b0f8;
        case 0x21b0fcu: goto label_21b0fc;
        case 0x21b100u: goto label_21b100;
        case 0x21b104u: goto label_21b104;
        case 0x21b108u: goto label_21b108;
        case 0x21b10cu: goto label_21b10c;
        case 0x21b110u: goto label_21b110;
        case 0x21b114u: goto label_21b114;
        case 0x21b118u: goto label_21b118;
        case 0x21b11cu: goto label_21b11c;
        case 0x21b120u: goto label_21b120;
        case 0x21b124u: goto label_21b124;
        case 0x21b128u: goto label_21b128;
        case 0x21b12cu: goto label_21b12c;
        case 0x21b130u: goto label_21b130;
        case 0x21b134u: goto label_21b134;
        case 0x21b138u: goto label_21b138;
        case 0x21b13cu: goto label_21b13c;
        case 0x21b140u: goto label_21b140;
        case 0x21b144u: goto label_21b144;
        case 0x21b148u: goto label_21b148;
        case 0x21b14cu: goto label_21b14c;
        case 0x21b150u: goto label_21b150;
        case 0x21b154u: goto label_21b154;
        case 0x21b158u: goto label_21b158;
        case 0x21b15cu: goto label_21b15c;
        case 0x21b160u: goto label_21b160;
        case 0x21b164u: goto label_21b164;
        case 0x21b168u: goto label_21b168;
        case 0x21b16cu: goto label_21b16c;
        case 0x21b170u: goto label_21b170;
        default: break;
    }

    ctx->pc = 0x21af90u;

label_21af90:
    // 0x21af90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x21af90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_21af94:
    // 0x21af94: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21af94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_21af98:
    // 0x21af98: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x21af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_21af9c:
    // 0x21af9c: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21afa0:
    // 0x21afa0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x21afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_21afa4:
    // 0x21afa4: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x21afa4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21afa8:
    // 0x21afa8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x21afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_21afac:
    // 0x21afac: 0x3c178007  lui         $s7, 0x8007
    ctx->pc = 0x21afacu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32775 << 16));
label_21afb0:
    // 0x21afb0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x21afb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_21afb4:
    // 0x21afb4: 0x3c168007  lui         $s6, 0x8007
    ctx->pc = 0x21afb4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32775 << 16));
label_21afb8:
    // 0x21afb8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x21afb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_21afbc:
    // 0x21afbc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21afbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21afc0:
    // 0x21afc0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x21afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_21afc4:
    // 0x21afc4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21afc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21afc8:
    // 0x21afc8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x21afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_21afcc:
    // 0x21afcc: 0x3c128007  lui         $s2, 0x8007
    ctx->pc = 0x21afccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32775 << 16));
label_21afd0:
    // 0x21afd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_21afd4:
    // 0x21afd4: 0x2411004c  addiu       $s1, $zero, 0x4C
    ctx->pc = 0x21afd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_21afd8:
    // 0x21afd8: 0x8c484728  lw          $t0, 0x4728($v0)
    ctx->pc = 0x21afd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
label_21afdc:
    // 0x21afdc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21afdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21afe0:
    // 0x21afe0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x21afe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_21afe4:
    // 0x21afe4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x21afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_21afe8:
    // 0x21afe8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x21afe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_21afec:
    // 0x21afec: 0x8d130000  lw          $s3, 0x0($t0)
    ctx->pc = 0x21afecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_21aff0:
    // 0x21aff0: 0x8c624730  lw          $v0, 0x4730($v1)
    ctx->pc = 0x21aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18224)));
label_21aff4:
    // 0x21aff4: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x21aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_21aff8:
    // 0x21aff8: 0x40f809  jalr        $v0
label_21affc:
    if (ctx->pc == 0x21AFFCu) {
        ctx->pc = 0x21AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFF8u;
        // 0x21affc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B000u;
        goto label_21b000;
    }
    ctx->pc = 0x21AFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B000u);
        ctx->pc = 0x21AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFF8u;
        // 0x21affc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AFF8u, 0x21B000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B000u;
label_21b000:
    // 0x21b000: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21b000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21b004:
    // 0x21b004: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21b008:
    // 0x21b008: 0x8c624734  lw          $v0, 0x4734($v1)
    ctx->pc = 0x21b008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18228)));
label_21b00c:
    // 0x21b00c: 0x40f809  jalr        $v0
label_21b010:
    if (ctx->pc == 0x21B010u) {
        ctx->pc = 0x21B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B00Cu;
        // 0x21b010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B014u;
        goto label_21b014;
    }
    ctx->pc = 0x21B00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B014u);
        ctx->pc = 0x21B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B00Cu;
        // 0x21b010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B00Cu, 0x21B014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B014u;
label_21b014:
    // 0x21b014: 0x0  nop
    ctx->pc = 0x21b014u;
    // NOP
label_21b018:
    // 0x21b018: 0x8ec24748  lw          $v0, 0x4748($s6)
    ctx->pc = 0x21b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_21b01c:
    // 0x21b01c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x21b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_21b020:
    // 0x21b020: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21b024:
    // 0x21b024: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_21b028:
    if (ctx->pc == 0x21B028u) {
        ctx->pc = 0x21B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B024u;
        // 0x21b028: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B02Cu;
        goto label_21b02c;
    }
    ctx->pc = 0x21B024u;
    {
        const bool branch_taken_0x21b024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b024) {
            ctx->pc = 0x21B028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B024u;
            // 0x21b028: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B068u;
            goto label_21b068;
        }
    }
    ctx->pc = 0x21B02Cu;
label_21b02c:
    // 0x21b02c: 0x5213000e  beql        $s0, $s3, . + 4 + (0xE << 2)
label_21b030:
    if (ctx->pc == 0x21B030u) {
        ctx->pc = 0x21B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B02Cu;
        // 0x21b030: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B034u;
        goto label_21b034;
    }
    ctx->pc = 0x21B02Cu;
    {
        const bool branch_taken_0x21b02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x21b02c) {
            ctx->pc = 0x21B030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B02Cu;
            // 0x21b030: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B068u;
            goto label_21b068;
        }
    }
    ctx->pc = 0x21B034u;
label_21b034:
    // 0x21b034: 0x145e0006  bne         $v0, $fp, . + 4 + (0x6 << 2)
label_21b038:
    if (ctx->pc == 0x21B038u) {
        ctx->pc = 0x21B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B034u;
        // 0x21b038: 0x8ee24744  lw          $v0, 0x4744($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B03Cu;
        goto label_21b03c;
    }
    ctx->pc = 0x21B034u;
    {
        const bool branch_taken_0x21b034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x21B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B034u;
        // 0x21b038: 0x8ee24744  lw          $v0, 0x4744($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b034) {
            ctx->pc = 0x21B050u;
            goto label_21b050;
        }
    }
    ctx->pc = 0x21B03Cu;
label_21b03c:
    // 0x21b03c: 0x8e424740  lw          $v0, 0x4740($s2)
    ctx->pc = 0x21b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18240)));
label_21b040:
    // 0x21b040: 0x40f809  jalr        $v0
label_21b044:
    if (ctx->pc == 0x21B044u) {
        ctx->pc = 0x21B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B040u;
        // 0x21b044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B048u;
        goto label_21b048;
    }
    ctx->pc = 0x21B040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B048u);
        ctx->pc = 0x21B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B040u;
        // 0x21b044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B040u, 0x21B048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B048u;
label_21b048:
    // 0x21b048: 0x10000007  b           . + 4 + (0x7 << 2)
label_21b04c:
    if (ctx->pc == 0x21B04Cu) {
        ctx->pc = 0x21B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B048u;
        // 0x21b04c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B050u;
        goto label_21b050;
    }
    ctx->pc = 0x21B048u;
    {
        const bool branch_taken_0x21b048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B048u;
        // 0x21b04c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b048) {
            ctx->pc = 0x21B068u;
            goto label_21b068;
        }
    }
    ctx->pc = 0x21B050u;
label_21b050:
    // 0x21b050: 0x40f809  jalr        $v0
label_21b054:
    if (ctx->pc == 0x21B054u) {
        ctx->pc = 0x21B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B050u;
        // 0x21b054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B058u;
        goto label_21b058;
    }
    ctx->pc = 0x21B050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B058u);
        ctx->pc = 0x21B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B050u;
        // 0x21b054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B050u, 0x21B058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B058u;
label_21b058:
    // 0x21b058: 0x8e424740  lw          $v0, 0x4740($s2)
    ctx->pc = 0x21b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18240)));
label_21b05c:
    // 0x21b05c: 0x40f809  jalr        $v0
label_21b060:
    if (ctx->pc == 0x21B060u) {
        ctx->pc = 0x21B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B05Cu;
        // 0x21b060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B064u;
        goto label_21b064;
    }
    ctx->pc = 0x21B05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B064u);
        ctx->pc = 0x21B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B05Cu;
        // 0x21b060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B05Cu, 0x21B064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B064u;
label_21b064:
    // 0x21b064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21b064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21b068:
    // 0x21b068: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x21b068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_21b06c:
    // 0x21b06c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_21b070:
    if (ctx->pc == 0x21B070u) {
        ctx->pc = 0x21B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B06Cu;
        // 0x21b070: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B074u;
        goto label_21b074;
    }
    ctx->pc = 0x21B06Cu;
    {
        const bool branch_taken_0x21b06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B06Cu;
        // 0x21b070: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b06c) {
            ctx->pc = 0x21B018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b018;
        }
    }
    ctx->pc = 0x21B074u;
label_21b074:
    // 0x21b074: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21b074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21b078:
    // 0x21b078: 0x8c62473c  lw          $v0, 0x473C($v1)
    ctx->pc = 0x21b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18236)));
label_21b07c:
    // 0x21b07c: 0x40f809  jalr        $v0
label_21b080:
    if (ctx->pc == 0x21B080u) {
        ctx->pc = 0x21B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B07Cu;
        // 0x21b080: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B084u;
        goto label_21b084;
    }
    ctx->pc = 0x21B07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B084u);
        ctx->pc = 0x21B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B07Cu;
        // 0x21b080: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B07Cu, 0x21B084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B084u;
label_21b084:
    // 0x21b084: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21b084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21b088:
    // 0x21b088: 0x8c624738  lw          $v0, 0x4738($v1)
    ctx->pc = 0x21b088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18232)));
label_21b08c:
    // 0x21b08c: 0x40f809  jalr        $v0
label_21b090:
    if (ctx->pc == 0x21B090u) {
        ctx->pc = 0x21B094u;
        goto label_21b094;
    }
    ctx->pc = 0x21B08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B094u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B08Cu, 0x21B094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B094u;
label_21b094:
    // 0x21b094: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21b094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21b098:
    // 0x21b098: 0x8c62472c  lw          $v0, 0x472C($v1)
    ctx->pc = 0x21b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18220)));
label_21b09c:
    // 0x21b09c: 0xc01d0f2  jal         func_0743C8
label_21b0a0:
    if (ctx->pc == 0x21B0A0u) {
        ctx->pc = 0x21B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B09Cu;
        // 0x21b0a0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B0A4u;
        goto label_21b0a4;
    }
    ctx->pc = 0x21B09Cu;
    SET_GPR_U32(ctx, 31, 0x21B0A4u);
    ctx->pc = 0x21B0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B09Cu;
    // 0x21b0a0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x743C8u, 0x21B09Cu, 0x21B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B0A4u;
label_21b0a4:
    // 0x21b0a4: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_21b0a8:
    // 0x21b0a8: 0x1a80000d  blez        $s4, . + 4 + (0xD << 2)
label_21b0ac:
    if (ctx->pc == 0x21B0ACu) {
        ctx->pc = 0x21B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0A8u;
        // 0x21b0ac: 0x8c444778  lw          $a0, 0x4778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B0B0u;
        goto label_21b0b0;
    }
    ctx->pc = 0x21B0A8u;
    {
        const bool branch_taken_0x21b0a8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x21B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0A8u;
        // 0x21b0ac: 0x8c444778  lw          $a0, 0x4778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b0a8) {
            ctx->pc = 0x21B0E0u;
            goto label_21b0e0;
        }
    }
    ctx->pc = 0x21B0B0u;
label_21b0b0:
    // 0x21b0b0: 0x3c118007  lui         $s1, 0x8007
    ctx->pc = 0x21b0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32775 << 16));
label_21b0b4:
    // 0x21b0b4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x21b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21b0b8:
    // 0x21b0b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_21b0bc:
    // 0x21b0bc: 0x8e224770  lw          $v0, 0x4770($s1)
    ctx->pc = 0x21b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18288)));
label_21b0c0:
    // 0x21b0c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21b0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21b0c4:
    // 0x21b0c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21b0c8:
    // 0x21b0c8: 0x40f809  jalr        $v0
label_21b0cc:
    if (ctx->pc == 0x21B0CCu) {
        ctx->pc = 0x21B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0C8u;
        // 0x21b0cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B0D0u;
        goto label_21b0d0;
    }
    ctx->pc = 0x21B0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B0D0u);
        ctx->pc = 0x21B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0C8u;
        // 0x21b0cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B0C8u, 0x21B0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B0D0u;
label_21b0d0:
    // 0x21b0d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b0d4:
    // 0x21b0d4: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x21b0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_21b0d8:
    // 0x21b0d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_21b0dc:
    if (ctx->pc == 0x21B0DCu) {
        ctx->pc = 0x21B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0D8u;
        // 0x21b0dc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B0E0u;
        goto label_21b0e0;
    }
    ctx->pc = 0x21B0D8u;
    {
        const bool branch_taken_0x21b0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0D8u;
        // 0x21b0dc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b0d8) {
            ctx->pc = 0x21B0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b0b8;
        }
    }
    ctx->pc = 0x21B0E0u;
label_21b0e0:
    // 0x21b0e0: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x21b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_21b0e4:
    // 0x21b0e4: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21b0e8:
    // 0x21b0e8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x21b0e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_21b0ec:
    // 0x21b0ec: 0x8ec54748  lw          $a1, 0x4748($s6)
    ctx->pc = 0x21b0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_21b0f0:
    // 0x21b0f0: 0x8c644778  lw          $a0, 0x4778($v1)
    ctx->pc = 0x21b0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18296)));
label_21b0f4:
    // 0x21b0f4: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21b0f8:
    // 0x21b0f8: 0x8c66476c  lw          $a2, 0x476C($v1)
    ctx->pc = 0x21b0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18284)));
label_21b0fc:
    // 0x21b0fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21b100:
    // 0x21b100: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x21b100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
label_21b104:
    // 0x21b104: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x21b104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21b108:
    // 0x21b108: 0xac540034  sw          $s4, 0x34($v0)
    ctx->pc = 0x21b108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 20));
label_21b10c:
    // 0x21b10c: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x21b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
label_21b110:
    // 0x21b110: 0xac550030  sw          $s5, 0x30($v0)
    ctx->pc = 0x21b110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 21));
label_21b114:
    // 0x21b114: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x21b114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_21b118:
    // 0x21b118: 0xa440001a  sh          $zero, 0x1A($v0)
    ctx->pc = 0x21b118u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 0));
label_21b11c:
    // 0x21b11c: 0xa4400018  sh          $zero, 0x18($v0)
    ctx->pc = 0x21b11cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
label_21b120:
    // 0x21b120: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x21b120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_21b124:
    // 0x21b124: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x21b124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_21b128:
    // 0x21b128: 0xc0f809  jalr        $a2
label_21b12c:
    if (ctx->pc == 0x21B12Cu) {
        ctx->pc = 0x21B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B128u;
        // 0x21b12c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B130u;
        goto label_21b130;
    }
    ctx->pc = 0x21B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x21B130u);
        ctx->pc = 0x21B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B128u;
        // 0x21b12c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B128u, 0x21B130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B130u;
label_21b130:
    // 0x21b130: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21b130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_21b134:
    // 0x21b134: 0x8c434768  lw          $v1, 0x4768($v0)
    ctx->pc = 0x21b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18280)));
label_21b138:
    // 0x21b138: 0x60f809  jalr        $v1
label_21b13c:
    if (ctx->pc == 0x21B13Cu) {
        ctx->pc = 0x21B140u;
        goto label_21b140;
    }
    ctx->pc = 0x21B138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21B140u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B138u, 0x21B140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B140u;
label_21b140:
    // 0x21b140: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x21b140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21b144:
    // 0x21b144: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x21b144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_21b148:
    // 0x21b148: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x21b148u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21b14c:
    // 0x21b14c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x21b14cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_21b150:
    // 0x21b150: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x21b150u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_21b154:
    // 0x21b154: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x21b154u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_21b158:
    // 0x21b158: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x21b158u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21b15c:
    // 0x21b15c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x21b15cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21b160:
    // 0x21b160: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x21b160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21b164:
    // 0x21b164: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x21b164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21b168:
    // 0x21b168: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21b168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21b16c:
    // 0x21b16c: 0x3e00008  jr          $ra
label_21b170:
    if (ctx->pc == 0x21B170u) {
        ctx->pc = 0x21B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B16Cu;
        // 0x21b170: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B174u;
        goto label_fallthrough_0x21b16c;
    }
    ctx->pc = 0x21B16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B16Cu;
        // 0x21b170: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21b16c:
    ctx->pc = 0x21B174u;
}
