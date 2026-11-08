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

// Function: FUN_001efe00
// Address: 0x1efe00 - 0x1f0060
void FUN_001efe00_0x1efe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001efe00_0x1efe00");
#endif

    switch (ctx->pc) {
        case 0x1efe40u: goto label_1efe40;
        case 0x1efe4cu: goto label_1efe4c;
        case 0x1efe64u: goto label_1efe64;
        case 0x1efe88u: goto label_1efe88;
        case 0x1efec8u: goto label_1efec8;
        case 0x1efef4u: goto label_1efef4;
        case 0x1eff24u: goto label_1eff24;
        case 0x1eff60u: goto label_1eff60;
        case 0x1eff88u: goto label_1eff88;
        case 0x1eff94u: goto label_1eff94;
        case 0x1effc4u: goto label_1effc4;
        case 0x1effd4u: goto label_1effd4;
        case 0x1effdcu: goto label_1effdc;
        case 0x1effecu: goto label_1effec;
        case 0x1efffcu: goto label_1efffc;
        case 0x1f0014u: goto label_1f0014;
        case 0x1f0024u: goto label_1f0024;
        case 0x1f002cu: goto label_1f002c;
        default: break;
    }

    ctx->pc = 0x1efe00u;

    // 0x1efe00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1efe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1efe04: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1efe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1efe08: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1efe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1efe0c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1efe0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe10: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1efe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1efe14: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1efe14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe18: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1efe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1efe1c: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1efe1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1efe20: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1efe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1efe24: 0x2691e200  addiu       $s1, $s4, -0x1E00
    ctx->pc = 0x1efe24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959616));
    // 0x1efe28: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1efe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1efe2c: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1efe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1efe30: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1efe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1efe34: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1efe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1efe38: 0xc07bbe0  jal         func_1EEF80
    ctx->pc = 0x1EFE38u;
    SET_GPR_U32(ctx, 31, 0x1EFE40u);
    ctx->pc = 0x1EFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFE38u;
    // 0x1efe3c: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF80u, 0x1EFE38u, 0x1EFE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE40u;
label_1efe40:
    // 0x1efe40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1efe40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe44: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1EFE44u;
    SET_GPR_U32(ctx, 31, 0x1EFE4Cu);
    ctx->pc = 0x1EFE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFE44u;
    // 0x1efe48: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1EFE44u, 0x1EFE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE4Cu;
label_1efe4c:
    // 0x1efe4c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1efe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1efe50: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x1efe50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1efe54: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFE54u;
    {
        const bool branch_taken_0x1efe54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efe54) {
            ctx->pc = 0x1EFE6Cu;
            goto label_1efe6c;
        }
    }
    ctx->pc = 0x1EFE5Cu;
    // 0x1efe5c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFE5Cu;
    SET_GPR_U32(ctx, 31, 0x1EFE64u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFE5Cu, 0x1EFE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE64u;
label_1efe64:
    // 0x1efe64: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1EFE64u;
    {
        const bool branch_taken_0x1efe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE64u;
        // 0x1efe68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe64) {
            ctx->pc = 0x1F0030u;
            goto label_1f0030;
        }
    }
    ctx->pc = 0x1EFE6Cu;
label_1efe6c:
    // 0x1efe6c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFE6Cu;
    {
        const bool branch_taken_0x1efe6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efe6c) {
            ctx->pc = 0x1EFE80u;
            goto label_1efe80;
        }
    }
    ctx->pc = 0x1EFE74u;
    // 0x1efe74: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1efe74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1efe78: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFE78u;
    {
        const bool branch_taken_0x1efe78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efe78) {
            ctx->pc = 0x1EFE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFE78u;
            // 0x1efe7c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFE90u;
            goto label_1efe90;
        }
    }
    ctx->pc = 0x1EFE80u;
label_1efe80:
    // 0x1efe80: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFE80u;
    SET_GPR_U32(ctx, 31, 0x1EFE88u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFE80u, 0x1EFE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE88u;
label_1efe88:
    // 0x1efe88: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1EFE88u;
    {
        const bool branch_taken_0x1efe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE88u;
        // 0x1efe8c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe88) {
            ctx->pc = 0x1F0030u;
            goto label_1f0030;
        }
    }
    ctx->pc = 0x1EFE90u;
label_1efe90:
    // 0x1efe90: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1efe90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1efe94: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x1efe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1efe98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1efe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efe9c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1efe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1efea0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1efea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1efea4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1efea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1efea8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1efea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1efeac: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1efeacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1efeb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1efeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1efeb4: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x1efeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    // 0x1efeb8: 0xae370014  sw          $s7, 0x14($s1)
    ctx->pc = 0x1efeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 23));
    // 0x1efebc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1efebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1efec0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EFEC0u;
    SET_GPR_U32(ctx, 31, 0x1EFEC8u);
    ctx->pc = 0x1EFEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFEC0u;
    // 0x1efec4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EFEC0u, 0x1EFEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFEC8u;
label_1efec8:
    // 0x1efec8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1efec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efecc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1efeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efed0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1efed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1efed4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1efed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1efed8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1efed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1efedc: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1efedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x1efee0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EFEE0u;
    {
        const bool branch_taken_0x1efee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEE0u;
        // 0x1efee4: 0xae92e200  sw          $s2, -0x1E00($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294959616), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efee0) {
            ctx->pc = 0x1EFF68u;
            goto label_1eff68;
        }
    }
    ctx->pc = 0x1EFEE8u;
    // 0x1efee8: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1efee8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1efeec: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EFEECu;
    SET_GPR_U32(ctx, 31, 0x1EFEF4u);
    ctx->pc = 0x1EFEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFEECu;
    // 0x1efef0: 0x8e04a46c  lw          $a0, -0x5B94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EFEECu, 0x1EFEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFEF4u;
label_1efef4:
    // 0x1efef4: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1efef4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1efef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efefc: 0x8ce3a3d8  lw          $v1, -0x5C28($a3)
    ctx->pc = 0x1efefcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A3D8u));
    // 0x1eff00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1eff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eff04: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFF04u;
    {
        const bool branch_taken_0x1eff04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF04u;
        // 0x1eff08: 0x3c1e0039  lui         $fp, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff04) {
            ctx->pc = 0x1EFF20u;
            goto label_1eff20;
        }
    }
    ctx->pc = 0x1EFF0Cu;
    // 0x1eff0c: 0x8e83e200  lw          $v1, -0x1E00($s4)
    ctx->pc = 0x1eff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959616)));
    // 0x1eff10: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1eff10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1eff14: 0xace3a3d8  sw          $v1, -0x5C28($a3)
    ctx->pc = 0x1eff14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943704), GPR_U32(ctx, 3));
    // 0x1eff18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EFF18u;
    {
        const bool branch_taken_0x1eff18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF18u;
        // 0x1eff1c: 0xae82e200  sw          $v0, -0x1E00($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294959616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff18) {
            ctx->pc = 0x1EFF58u;
            goto label_1eff58;
        }
    }
    ctx->pc = 0x1EFF20u;
label_1eff20:
    // 0x1eff20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1eff20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1eff24:
    // 0x1eff24: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1eff24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1eff28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EFF28u;
    {
        const bool branch_taken_0x1eff28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF28u;
        // 0x1eff2c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff28) {
            ctx->pc = 0x1EFF58u;
            goto label_1eff58;
        }
    }
    ctx->pc = 0x1EFF30u;
    // 0x1eff30: 0x24e3a3d8  addiu       $v1, $a3, -0x5C28
    ctx->pc = 0x1eff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943704));
    // 0x1eff34: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1eff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eff38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1eff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eff3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1eff40: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EFF40u;
    {
        const bool branch_taken_0x1eff40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF40u;
        // 0x1eff44: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff40) {
            ctx->pc = 0x1EFF24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eff24;
        }
    }
    ctx->pc = 0x1EFF48u;
    // 0x1eff48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1eff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1eff4c: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1eff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1eff50: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1eff50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1eff54: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1eff54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1eff58:
    // 0x1eff58: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EFF58u;
    SET_GPR_U32(ctx, 31, 0x1EFF60u);
    ctx->pc = 0x1EFF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF58u;
    // 0x1eff5c: 0x8e04a46c  lw          $a0, -0x5B94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EFF58u, 0x1EFF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF60u;
label_1eff60:
    // 0x1eff60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFF60u;
    {
        const bool branch_taken_0x1eff60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF60u;
        // 0x1eff64: 0x3c152000  lui         $s5, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff60) {
            ctx->pc = 0x1EFF70u;
            goto label_1eff70;
        }
    }
    ctx->pc = 0x1EFF68u;
label_1eff68:
    // 0x1eff68: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1eff68u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    // 0x1eff6c: 0x3c152000  lui         $s5, 0x2000
    ctx->pc = 0x1eff6cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
label_1eff70:
    // 0x1eff70: 0x2751024  and         $v0, $s3, $s5
    ctx->pc = 0x1eff70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x1eff74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFF74u;
    {
        const bool branch_taken_0x1eff74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF74u;
        // 0x1eff78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff74) {
            ctx->pc = 0x1EFF8Cu;
            goto label_1eff8c;
        }
    }
    ctx->pc = 0x1EFF7Cu;
    // 0x1eff7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1eff7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff80: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EFF80u;
    SET_GPR_U32(ctx, 31, 0x1EFF88u);
    ctx->pc = 0x1EFF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF80u;
    // 0x1eff84: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EFF80u, 0x1EFF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF88u;
label_1eff88:
    // 0x1eff88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eff8c:
    // 0x1eff8c: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EFF8Cu;
    SET_GPR_U32(ctx, 31, 0x1EFF94u);
    ctx->pc = 0x1EFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF8Cu;
    // 0x1eff90: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EFF8Cu, 0x1EFF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF94u;
label_1eff94:
    // 0x1eff94: 0x27d0ee40  addiu       $s0, $fp, -0x11C0
    ctx->pc = 0x1eff94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962752));
    // 0x1eff98: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1eff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1eff9c: 0x2687e200  addiu       $a3, $s4, -0x1E00
    ctx->pc = 0x1eff9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959616));
    // 0x1effa0: 0x2444f900  addiu       $a0, $v0, -0x700
    ctx->pc = 0x1effa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965504));
    // 0x1effa4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1effa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1effa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1effa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1effac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1effacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effb0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1effb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1effb4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1effb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effb8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1effb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1effbc: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1EFFBCu;
    SET_GPR_U32(ctx, 31, 0x1EFFC4u);
    ctx->pc = 0x1EFFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFBCu;
    // 0x1effc0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1EFFBCu, 0x1EFFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFC4u;
label_1effc4:
    // 0x1effc4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EFFC4u;
    {
        const bool branch_taken_0x1effc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFC4u;
        // 0x1effc8: 0x2b01025  or          $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effc4) {
            ctx->pc = 0x1EFFE4u;
            goto label_1effe4;
        }
    }
    ctx->pc = 0x1EFFCCu;
    // 0x1effcc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFFCCu;
    SET_GPR_U32(ctx, 31, 0x1EFFD4u);
    ctx->pc = 0x1EFFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFCCu;
    // 0x1effd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFFCCu, 0x1EFFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFD4u;
label_1effd4:
    // 0x1effd4: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFFD4u;
    SET_GPR_U32(ctx, 31, 0x1EFFDCu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFFD4u, 0x1EFFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFDCu;
label_1effdc:
    // 0x1effdc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1EFFDCu;
    {
        const bool branch_taken_0x1effdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFDCu;
        // 0x1effe0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effdc) {
            ctx->pc = 0x1F0030u;
            goto label_1f0030;
        }
    }
    ctx->pc = 0x1EFFE4u;
label_1effe4:
    // 0x1effe4: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFFE4u;
    SET_GPR_U32(ctx, 31, 0x1EFFECu);
    ctx->pc = 0x1EFFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFE4u;
    // 0x1effe8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFFE4u, 0x1EFFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFECu;
label_1effec:
    // 0x1effec: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFFECu;
    {
        const bool branch_taken_0x1effec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFECu;
        // 0x1efff0: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effec) {
            ctx->pc = 0x1F0004u;
            goto label_1f0004;
        }
    }
    ctx->pc = 0x1EFFF4u;
    // 0x1efff4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFFF4u;
    SET_GPR_U32(ctx, 31, 0x1EFFFCu);
    ctx->pc = 0x1EFFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFF4u;
    // 0x1efff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFFF4u, 0x1EFFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFFCu;
label_1efffc:
    // 0x1efffc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EFFFCu;
    {
        const bool branch_taken_0x1efffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFFCu;
        // 0x1f0000: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efffc) {
            ctx->pc = 0x1F0030u;
            goto label_1f0030;
        }
    }
    ctx->pc = 0x1F0004u;
label_1f0004:
    // 0x1f0004: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0004u;
    {
        const bool branch_taken_0x1f0004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0004) {
            ctx->pc = 0x1F001Cu;
            goto label_1f001c;
        }
    }
    ctx->pc = 0x1F000Cu;
    // 0x1f000c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F000Cu;
    SET_GPR_U32(ctx, 31, 0x1F0014u);
    ctx->pc = 0x1F0010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F000Cu;
    // 0x1f0010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F000Cu, 0x1F0014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0014u;
label_1f0014:
    // 0x1f0014: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0014u;
    {
        const bool branch_taken_0x1f0014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0014u;
        // 0x1f0018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0014) {
            ctx->pc = 0x1F0030u;
            goto label_1f0030;
        }
    }
    ctx->pc = 0x1F001Cu;
label_1f001c:
    // 0x1f001c: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F001Cu;
    SET_GPR_U32(ctx, 31, 0x1F0024u);
    ctx->pc = 0x1F0020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F001Cu;
    // 0x1f0020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F001Cu, 0x1F0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0024u;
label_1f0024:
    // 0x1f0024: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0024u;
    SET_GPR_U32(ctx, 31, 0x1F002Cu);
    ctx->pc = 0x1F0028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0024u;
    // 0x1f0028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0024u, 0x1F002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F002Cu;
label_1f002c:
    // 0x1f002c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0030:
    // 0x1f0030: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1f0030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f0034: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1f0034u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f0038: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1f0038u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f003c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f003cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0040: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f0040u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f0044: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f0044u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0048: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f0048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f004c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f004cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0050: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f0050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0054: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f0054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0058: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0058u;
        // 0x1f005c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0060u;
}
