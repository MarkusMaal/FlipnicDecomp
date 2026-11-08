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

// Function: FUN_001f1d60
// Address: 0x1f1d60 - 0x1f1f98
void FUN_001f1d60_0x1f1d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f1d60_0x1f1d60");
#endif

    switch (ctx->pc) {
        case 0x1f1d98u: goto label_1f1d98;
        case 0x1f1da4u: goto label_1f1da4;
        case 0x1f1dbcu: goto label_1f1dbc;
        case 0x1f1de0u: goto label_1f1de0;
        case 0x1f1e20u: goto label_1f1e20;
        case 0x1f1e4cu: goto label_1f1e4c;
        case 0x1f1e88u: goto label_1f1e88;
        case 0x1f1ec4u: goto label_1f1ec4;
        case 0x1f1f00u: goto label_1f1f00;
        case 0x1f1f10u: goto label_1f1f10;
        case 0x1f1f18u: goto label_1f1f18;
        case 0x1f1f2cu: goto label_1f1f2c;
        case 0x1f1f3cu: goto label_1f1f3c;
        case 0x1f1f54u: goto label_1f1f54;
        case 0x1f1f64u: goto label_1f1f64;
        case 0x1f1f6cu: goto label_1f1f6c;
        default: break;
    }

    ctx->pc = 0x1f1d60u;

    // 0x1f1d60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f1d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f1d64: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f1d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f1d68: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f1d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f1d6c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f1d6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d70: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f1d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f1d74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f1d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d78: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f1d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f1d7c: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f1d7cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f1d80: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f1d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f1d84: 0x26b1e200  addiu       $s1, $s5, -0x1E00
    ctx->pc = 0x1f1d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959616));
    // 0x1f1d88: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1f1d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1f1d8c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f1d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f1d90: 0xc07bbe0  jal         func_1EEF80
    ctx->pc = 0x1F1D90u;
    SET_GPR_U32(ctx, 31, 0x1F1D98u);
    ctx->pc = 0x1F1D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D90u;
    // 0x1f1d94: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF80u, 0x1F1D90u, 0x1F1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D98u;
label_1f1d98:
    // 0x1f1d98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f1d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d9c: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F1D9Cu;
    SET_GPR_U32(ctx, 31, 0x1F1DA4u);
    ctx->pc = 0x1F1DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D9Cu;
    // 0x1f1da0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F1D9Cu, 0x1F1DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DA4u;
label_1f1da4:
    // 0x1f1da4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f1da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f1da8: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x1f1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f1dac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1DACu;
    {
        const bool branch_taken_0x1f1dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1dac) {
            ctx->pc = 0x1F1DC4u;
            goto label_1f1dc4;
        }
    }
    ctx->pc = 0x1F1DB4u;
    // 0x1f1db4: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1DB4u;
    SET_GPR_U32(ctx, 31, 0x1F1DBCu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1DB4u, 0x1F1DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DBCu;
label_1f1dbc:
    // 0x1f1dbc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1F1DBCu;
    {
        const bool branch_taken_0x1f1dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DBCu;
        // 0x1f1dc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1dbc) {
            ctx->pc = 0x1F1F70u;
            goto label_1f1f70;
        }
    }
    ctx->pc = 0x1F1DC4u;
label_1f1dc4:
    // 0x1f1dc4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1DC4u;
    {
        const bool branch_taken_0x1f1dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1dc4) {
            ctx->pc = 0x1F1DD8u;
            goto label_1f1dd8;
        }
    }
    ctx->pc = 0x1F1DCCu;
    // 0x1f1dcc: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1f1dccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1dd0: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1DD0u;
    {
        const bool branch_taken_0x1f1dd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DD0u;
        // 0x1f1dd4: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1dd0) {
            ctx->pc = 0x1F1DE8u;
            goto label_1f1de8;
        }
    }
    ctx->pc = 0x1F1DD8u;
label_1f1dd8:
    // 0x1f1dd8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1DD8u;
    SET_GPR_U32(ctx, 31, 0x1F1DE0u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1DD8u, 0x1F1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DE0u;
label_1f1de0:
    // 0x1f1de0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1F1DE0u;
    {
        const bool branch_taken_0x1f1de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DE0u;
        // 0x1f1de4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1de0) {
            ctx->pc = 0x1F1F70u;
            goto label_1f1f70;
        }
    }
    ctx->pc = 0x1F1DE8u;
label_1f1de8:
    // 0x1f1de8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f1dec: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x1f1decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1f1df0: 0xfe320010  sd          $s2, 0x10($s1)
    ctx->pc = 0x1f1df0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 18));
    // 0x1f1df4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1f1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f1df8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1f1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1f1dfc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1f1dfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1f1e00: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x1f1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
    // 0x1f1e04: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1f1e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1f1e08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f1e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1e0c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1e10: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1f1e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1f1e14: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1e18: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1E18u;
    SET_GPR_U32(ctx, 31, 0x1F1E20u);
    ctx->pc = 0x1F1E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E18u;
    // 0x1f1e1c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1E18u, 0x1F1E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E20u;
label_1f1e20:
    // 0x1f1e20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f1e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e24: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f1e28: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1f1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1e2c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1f1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1f1e30: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1f1e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1f1e34: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1f1e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x1f1e38: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F1E38u;
    {
        const bool branch_taken_0x1f1e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E38u;
        // 0x1f1e3c: 0xaeb2e200  sw          $s2, -0x1E00($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294959616), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e38) {
            ctx->pc = 0x1F1ECCu;
            goto label_1f1ecc;
        }
    }
    ctx->pc = 0x1F1E40u;
    // 0x1f1e40: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1f1e40u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x1f1e44: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1E44u;
    SET_GPR_U32(ctx, 31, 0x1F1E4Cu);
    ctx->pc = 0x1F1E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E44u;
    // 0x1f1e48: 0x8e84a46c  lw          $a0, -0x5B94($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1E44u, 0x1F1E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E4Cu;
label_1f1e4c:
    // 0x1f1e4c: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1f1e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1f1e50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e54: 0x8ce3a3d8  lw          $v1, -0x5C28($a3)
    ctx->pc = 0x1f1e54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A3D8u));
    // 0x1f1e58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1e5c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1E5Cu;
    {
        const bool branch_taken_0x1f1e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E5Cu;
        // 0x1f1e60: 0x3c160039  lui         $s6, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e5c) {
            ctx->pc = 0x1F1E80u;
            goto label_1f1e80;
        }
    }
    ctx->pc = 0x1F1E64u;
    // 0x1f1e64: 0x8ea3e200  lw          $v1, -0x1E00($s5)
    ctx->pc = 0x1f1e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294959616)));
    // 0x1f1e68: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f1e68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f1e6c: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1f1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1f1e70: 0xace3a3d8  sw          $v1, -0x5C28($a3)
    ctx->pc = 0x1f1e70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943704), GPR_U32(ctx, 3));
    // 0x1f1e74: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1E74u;
    {
        const bool branch_taken_0x1f1e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E74u;
        // 0x1f1e78: 0xaea2e200  sw          $v0, -0x1E00($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294959616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e74) {
            ctx->pc = 0x1F1EBCu;
            goto label_1f1ebc;
        }
    }
    ctx->pc = 0x1F1E7Cu;
    // 0x1f1e7c: 0x0  nop
    ctx->pc = 0x1f1e7cu;
    // NOP
label_1f1e80:
    // 0x1f1e80: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f1e80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f1e84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f1e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f1e88:
    // 0x1f1e88: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1f1e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f1e8c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F1E8Cu;
    {
        const bool branch_taken_0x1f1e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E8Cu;
        // 0x1f1e90: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e8c) {
            ctx->pc = 0x1F1EBCu;
            goto label_1f1ebc;
        }
    }
    ctx->pc = 0x1F1E94u;
    // 0x1f1e94: 0x24e3a3d8  addiu       $v1, $a3, -0x5C28
    ctx->pc = 0x1f1e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943704));
    // 0x1f1e98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f1e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f1e9c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f1e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1ea0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f1ea4: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F1EA4u;
    {
        const bool branch_taken_0x1f1ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EA4u;
        // 0x1f1ea8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ea4) {
            ctx->pc = 0x1F1E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1e88;
        }
    }
    ctx->pc = 0x1F1EACu;
    // 0x1f1eac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f1eb0: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1f1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1f1eb4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f1eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1f1eb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1f1eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1f1ebc:
    // 0x1f1ebc: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F1EBCu;
    SET_GPR_U32(ctx, 31, 0x1F1EC4u);
    ctx->pc = 0x1F1EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1EBCu;
    // 0x1f1ec0: 0x8e84a46c  lw          $a0, -0x5B94($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F1EBCu, 0x1F1EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EC4u;
label_1f1ec4:
    // 0x1f1ec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1EC4u;
    {
        const bool branch_taken_0x1f1ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EC4u;
        // 0x1f1ec8: 0x2610ee40  addiu       $s0, $s0, -0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ec4) {
            ctx->pc = 0x1F1ED8u;
            goto label_1f1ed8;
        }
    }
    ctx->pc = 0x1F1ECCu;
label_1f1ecc:
    // 0x1f1ecc: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f1eccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f1ed0: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f1ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f1ed4: 0x2610ee40  addiu       $s0, $s0, -0x11C0
    ctx->pc = 0x1f1ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962752));
label_1f1ed8:
    // 0x1f1ed8: 0x26c4f900  addiu       $a0, $s6, -0x700
    ctx->pc = 0x1f1ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965504));
    // 0x1f1edc: 0x26a7e200  addiu       $a3, $s5, -0x1E00
    ctx->pc = 0x1f1edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959616));
    // 0x1f1ee0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f1ee4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1f1ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1f1ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1eec: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1f1eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f1ef0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f1ef0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ef4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f1ef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1ef8: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F1EF8u;
    SET_GPR_U32(ctx, 31, 0x1F1F00u);
    ctx->pc = 0x1F1EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1EF8u;
    // 0x1f1efc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F1EF8u, 0x1F1F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F00u;
label_1f1f00:
    // 0x1f1f00: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1F00u;
    {
        const bool branch_taken_0x1f1f00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F00u;
        // 0x1f1f04: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f00) {
            ctx->pc = 0x1F1F20u;
            goto label_1f1f20;
        }
    }
    ctx->pc = 0x1F1F08u;
    // 0x1f1f08: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1F08u;
    SET_GPR_U32(ctx, 31, 0x1F1F10u);
    ctx->pc = 0x1F1F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F08u;
    // 0x1f1f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1F08u, 0x1F1F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F10u;
label_1f1f10:
    // 0x1f1f10: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1F10u;
    SET_GPR_U32(ctx, 31, 0x1F1F18u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1F10u, 0x1F1F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F18u;
label_1f1f18:
    // 0x1f1f18: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F1F18u;
    {
        const bool branch_taken_0x1f1f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F18u;
        // 0x1f1f1c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f18) {
            ctx->pc = 0x1F1F70u;
            goto label_1f1f70;
        }
    }
    ctx->pc = 0x1F1F20u;
label_1f1f20:
    // 0x1f1f20: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f1f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f1f24: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1F24u;
    SET_GPR_U32(ctx, 31, 0x1F1F2Cu);
    ctx->pc = 0x1F1F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F24u;
    // 0x1f1f28: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1F24u, 0x1F1F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F2Cu;
label_1f1f2c:
    // 0x1f1f2c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1F2Cu;
    {
        const bool branch_taken_0x1f1f2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F2Cu;
        // 0x1f1f30: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f2c) {
            ctx->pc = 0x1F1F44u;
            goto label_1f1f44;
        }
    }
    ctx->pc = 0x1F1F34u;
    // 0x1f1f34: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1F34u;
    SET_GPR_U32(ctx, 31, 0x1F1F3Cu);
    ctx->pc = 0x1F1F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F34u;
    // 0x1f1f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1F34u, 0x1F1F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F3Cu;
label_1f1f3c:
    // 0x1f1f3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F1F3Cu;
    {
        const bool branch_taken_0x1f1f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F3Cu;
        // 0x1f1f40: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f3c) {
            ctx->pc = 0x1F1F70u;
            goto label_1f1f70;
        }
    }
    ctx->pc = 0x1F1F44u;
label_1f1f44:
    // 0x1f1f44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1F44u;
    {
        const bool branch_taken_0x1f1f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f44) {
            ctx->pc = 0x1F1F5Cu;
            goto label_1f1f5c;
        }
    }
    ctx->pc = 0x1F1F4Cu;
    // 0x1f1f4c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1F4Cu;
    SET_GPR_U32(ctx, 31, 0x1F1F54u);
    ctx->pc = 0x1F1F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F4Cu;
    // 0x1f1f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1F4Cu, 0x1F1F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F54u;
label_1f1f54:
    // 0x1f1f54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1F54u;
    {
        const bool branch_taken_0x1f1f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F54u;
        // 0x1f1f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f54) {
            ctx->pc = 0x1F1F70u;
            goto label_1f1f70;
        }
    }
    ctx->pc = 0x1F1F5Cu;
label_1f1f5c:
    // 0x1f1f5c: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1F5Cu;
    SET_GPR_U32(ctx, 31, 0x1F1F64u);
    ctx->pc = 0x1F1F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F5Cu;
    // 0x1f1f60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1F5Cu, 0x1F1F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F64u;
label_1f1f64:
    // 0x1f1f64: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1F64u;
    SET_GPR_U32(ctx, 31, 0x1F1F6Cu);
    ctx->pc = 0x1F1F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F64u;
    // 0x1f1f68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1F64u, 0x1F1F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F6Cu;
label_1f1f6c:
    // 0x1f1f6c: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x1f1f6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1f70:
    // 0x1f1f70: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1f1f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f1f74: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f1f74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1f78: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f1f78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f1f7c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f1f7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f1f80: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f1f80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f1f84: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f1f84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f1f88: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f1f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f1f8c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f1f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1f90: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F90u;
        // 0x1f1f94: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1F98u;
}
