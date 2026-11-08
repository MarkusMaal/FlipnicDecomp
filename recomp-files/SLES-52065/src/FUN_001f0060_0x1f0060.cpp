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

// Function: FUN_001f0060
// Address: 0x1f0060 - 0x1f0320
void FUN_001f0060_0x1f0060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0060_0x1f0060");
#endif

    switch (ctx->pc) {
        case 0x1f00a0u: goto label_1f00a0;
        case 0x1f00acu: goto label_1f00ac;
        case 0x1f00c4u: goto label_1f00c4;
        case 0x1f00e8u: goto label_1f00e8;
        case 0x1f0128u: goto label_1f0128;
        case 0x1f0154u: goto label_1f0154;
        case 0x1f0190u: goto label_1f0190;
        case 0x1f01ccu: goto label_1f01cc;
        case 0x1f0218u: goto label_1f0218;
        case 0x1f0230u: goto label_1f0230;
        case 0x1f0280u: goto label_1f0280;
        case 0x1f0290u: goto label_1f0290;
        case 0x1f0298u: goto label_1f0298;
        case 0x1f02acu: goto label_1f02ac;
        case 0x1f02bcu: goto label_1f02bc;
        case 0x1f02d4u: goto label_1f02d4;
        case 0x1f02e4u: goto label_1f02e4;
        case 0x1f02ecu: goto label_1f02ec;
        default: break;
    }

    ctx->pc = 0x1f0060u;

    // 0x1f0060: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f0060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1f0064: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f0064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f0068: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f0068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f006c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f006cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0070: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1f0070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1f0074: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f0074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0078: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f0078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f007c: 0x3c170039  lui         $s7, 0x39
    ctx->pc = 0x1f007cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
    // 0x1f0080: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f0080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f0084: 0x26f2e200  addiu       $s2, $s7, -0x1E00
    ctx->pc = 0x1f0084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f0088: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1f0088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1f008c: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1f008cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1f0090: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f0090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f0094: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f0094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f0098: 0xc07bbe0  jal         func_1EEF80
    ctx->pc = 0x1F0098u;
    SET_GPR_U32(ctx, 31, 0x1F00A0u);
    ctx->pc = 0x1F009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0098u;
    // 0x1f009c: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF80u, 0x1F0098u, 0x1F00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00A0u;
label_1f00a0:
    // 0x1f00a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f00a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f00a4: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F00A4u;
    SET_GPR_U32(ctx, 31, 0x1F00ACu);
    ctx->pc = 0x1F00A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F00A4u;
    // 0x1f00a8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F00A4u, 0x1F00ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00ACu;
label_1f00ac:
    // 0x1f00ac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f00acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f00b0: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x1f00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f00b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F00B4u;
    {
        const bool branch_taken_0x1f00b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f00b4) {
            ctx->pc = 0x1F00CCu;
            goto label_1f00cc;
        }
    }
    ctx->pc = 0x1F00BCu;
    // 0x1f00bc: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F00BCu;
    SET_GPR_U32(ctx, 31, 0x1F00C4u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F00BCu, 0x1F00C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00C4u;
label_1f00c4:
    // 0x1f00c4: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1F00C4u;
    {
        const bool branch_taken_0x1f00c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00C4u;
        // 0x1f00c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00c4) {
            ctx->pc = 0x1F02F0u;
            goto label_1f02f0;
        }
    }
    ctx->pc = 0x1F00CCu;
label_1f00cc:
    // 0x1f00cc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F00CCu;
    {
        const bool branch_taken_0x1f00cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f00cc) {
            ctx->pc = 0x1F00E0u;
            goto label_1f00e0;
        }
    }
    ctx->pc = 0x1F00D4u;
    // 0x1f00d4: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x1f00d4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f00d8: 0x56c00005  bnel        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F00D8u;
    {
        const bool branch_taken_0x1f00d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f00d8) {
            ctx->pc = 0x1F00DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F00D8u;
            // 0x1f00dc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F00F0u;
            goto label_1f00f0;
        }
    }
    ctx->pc = 0x1F00E0u;
label_1f00e0:
    // 0x1f00e0: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F00E0u;
    SET_GPR_U32(ctx, 31, 0x1F00E8u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F00E0u, 0x1F00E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00E8u;
label_1f00e8:
    // 0x1f00e8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1F00E8u;
    {
        const bool branch_taken_0x1f00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00E8u;
        // 0x1f00ec: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00e8) {
            ctx->pc = 0x1F02F0u;
            goto label_1f02f0;
        }
    }
    ctx->pc = 0x1F00F0u;
label_1f00f0:
    // 0x1f00f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f00f4: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x1f00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1f00f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f00fc: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1f00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1f0100: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1f0100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f0104: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1f0104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1f0108: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1f0108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1f010c: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1f010cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x1f0110: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f0110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0114: 0xae550014  sw          $s5, 0x14($s2)
    ctx->pc = 0x1f0114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 21));
    // 0x1f0118: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1f0118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x1f011c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f011cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f0120: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F0120u;
    SET_GPR_U32(ctx, 31, 0x1F0128u);
    ctx->pc = 0x1F0124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0120u;
    // 0x1f0124: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F0120u, 0x1F0128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0128u;
label_1f0128:
    // 0x1f0128: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f0128u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f012c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f012cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0130: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1f0130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0134: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1f0134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1f0138: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1f0138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1f013c: 0x32c28000  andi        $v0, $s6, 0x8000
    ctx->pc = 0x1f013cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32768);
    // 0x1f0140: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F0140u;
    {
        const bool branch_taken_0x1f0140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0140u;
        // 0x1f0144: 0xaef4e200  sw          $s4, -0x1E00($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294959616), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0140) {
            ctx->pc = 0x1F01D4u;
            goto label_1f01d4;
        }
    }
    ctx->pc = 0x1F0148u;
    // 0x1f0148: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1f0148u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x1f014c: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F014Cu;
    SET_GPR_U32(ctx, 31, 0x1F0154u);
    ctx->pc = 0x1F0150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F014Cu;
    // 0x1f0150: 0x8e64a46c  lw          $a0, -0x5B94($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F014Cu, 0x1F0154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0154u;
label_1f0154:
    // 0x1f0154: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1f0154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1f0158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f015c: 0x8ce3a3d8  lw          $v1, -0x5C28($a3)
    ctx->pc = 0x1f015cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A3D8u));
    // 0x1f0160: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f0160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0164: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0164u;
    {
        const bool branch_taken_0x1f0164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0164u;
        // 0x1f0168: 0x3230000f  andi        $s0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0164) {
            ctx->pc = 0x1F0188u;
            goto label_1f0188;
        }
    }
    ctx->pc = 0x1F016Cu;
    // 0x1f016c: 0x8ee3e200  lw          $v1, -0x1E00($s7)
    ctx->pc = 0x1f016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294959616)));
    // 0x1f0170: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1f0170u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    // 0x1f0174: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1f0174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1f0178: 0xace3a3d8  sw          $v1, -0x5C28($a3)
    ctx->pc = 0x1f0178u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943704), GPR_U32(ctx, 3));
    // 0x1f017c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F017Cu;
    {
        const bool branch_taken_0x1f017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F017Cu;
        // 0x1f0180: 0xaee2e200  sw          $v0, -0x1E00($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294959616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f017c) {
            ctx->pc = 0x1F01C4u;
            goto label_1f01c4;
        }
    }
    ctx->pc = 0x1F0184u;
    // 0x1f0184: 0x0  nop
    ctx->pc = 0x1f0184u;
    // NOP
label_1f0188:
    // 0x1f0188: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1f0188u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    // 0x1f018c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f018cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f0190:
    // 0x1f0190: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1f0190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f0194: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F0194u;
    {
        const bool branch_taken_0x1f0194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0194u;
        // 0x1f0198: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0194) {
            ctx->pc = 0x1F01C4u;
            goto label_1f01c4;
        }
    }
    ctx->pc = 0x1F019Cu;
    // 0x1f019c: 0x24e3a3d8  addiu       $v1, $a3, -0x5C28
    ctx->pc = 0x1f019cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943704));
    // 0x1f01a0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f01a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f01a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f01a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f01a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f01ac: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F01ACu;
    {
        const bool branch_taken_0x1f01ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01ACu;
        // 0x1f01b0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01ac) {
            ctx->pc = 0x1F0190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0190;
        }
    }
    ctx->pc = 0x1F01B4u;
    // 0x1f01b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f01b8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1f01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1f01bc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1f01c0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1f01c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1f01c4:
    // 0x1f01c4: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F01C4u;
    SET_GPR_U32(ctx, 31, 0x1F01CCu);
    ctx->pc = 0x1F01C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F01C4u;
    // 0x1f01c8: 0x8e64a46c  lw          $a0, -0x5B94($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F01C4u, 0x1F01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F01CCu;
label_1f01cc:
    // 0x1f01cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F01CCu;
    {
        const bool branch_taken_0x1f01cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f01cc) {
            ctx->pc = 0x1F01DCu;
            goto label_1f01dc;
        }
    }
    ctx->pc = 0x1F01D4u;
label_1f01d4:
    // 0x1f01d4: 0x3230000f  andi        $s0, $s1, 0xF
    ctx->pc = 0x1f01d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x1f01d8: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1f01d8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
label_1f01dc:
    // 0x1f01dc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F01DCu;
    {
        const bool branch_taken_0x1f01dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01DCu;
        // 0x1f01e0: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01dc) {
            ctx->pc = 0x1F01ECu;
            goto label_1f01ec;
        }
    }
    ctx->pc = 0x1F01E4u;
    // 0x1f01e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F01E4u;
    {
        const bool branch_taken_0x1f01e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01E4u;
        // 0x1f01e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01e4) {
            ctx->pc = 0x1F01F8u;
            goto label_1f01f8;
        }
    }
    ctx->pc = 0x1F01ECu;
label_1f01ec:
    // 0x1f01ec: 0x2623fff0  addiu       $v1, $s1, -0x10
    ctx->pc = 0x1f01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x1f01f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f01f4: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x1f01f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f01f8:
    // 0x1f01f8: 0x2b0182a  slt         $v1, $s5, $s0
    ctx->pc = 0x1f01f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f01fc: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x1f01fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x1f0200: 0x2d31024  and         $v0, $s6, $s3
    ctx->pc = 0x1f0200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 19));
    // 0x1f0204: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0204u;
    {
        const bool branch_taken_0x1f0204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0204u;
        // 0x1f0208: 0x2a3800b  movn        $s0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0204) {
            ctx->pc = 0x1F0218u;
            goto label_1f0218;
        }
    }
    ctx->pc = 0x1F020Cu;
    // 0x1f020c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f020cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0210: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F0210u;
    SET_GPR_U32(ctx, 31, 0x1F0218u);
    ctx->pc = 0x1F0214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0210u;
    // 0x1f0214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F0210u, 0x1F0218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0218u;
label_1f0218:
    // 0x1f0218: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x1f0218u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x1f021c: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x1f021cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    // 0x1f0220: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F0220u;
    {
        const bool branch_taken_0x1f0220 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1F0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0220u;
        // 0x1f0224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0220) {
            ctx->pc = 0x1F0250u;
            goto label_1f0250;
        }
    }
    ctx->pc = 0x1F0228u;
    // 0x1f0228: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x1f0228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1f022c: 0x0  nop
    ctx->pc = 0x1f022cu;
    // NOP
label_1f0230:
    // 0x1f0230: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1f0230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1f0234: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f0234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f0238: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f0238u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f023c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f023cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f0240: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1f0240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f0244: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f0244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0248: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F0248u;
    {
        const bool branch_taken_0x1f0248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0248) {
            ctx->pc = 0x1F0230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0230;
        }
    }
    ctx->pc = 0x1F0250u;
label_1f0250:
    // 0x1f0250: 0x27d0ee40  addiu       $s0, $fp, -0x11C0
    ctx->pc = 0x1f0250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962752));
    // 0x1f0254: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f0254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f0258: 0x2444f900  addiu       $a0, $v0, -0x700
    ctx->pc = 0x1f0258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965504));
    // 0x1f025c: 0x26e7e200  addiu       $a3, $s7, -0x1E00
    ctx->pc = 0x1f025cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f0260: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f0260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f0264: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f0264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f0268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f026c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f026cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f0270: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f0270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0274: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f0274u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0278: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F0278u;
    SET_GPR_U32(ctx, 31, 0x1F0280u);
    ctx->pc = 0x1F027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0278u;
    // 0x1f027c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F0278u, 0x1F0280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0280u;
label_1f0280:
    // 0x1f0280: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0280u;
    {
        const bool branch_taken_0x1f0280 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0280u;
        // 0x1f0284: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0280) {
            ctx->pc = 0x1F02A0u;
            goto label_1f02a0;
        }
    }
    ctx->pc = 0x1F0288u;
    // 0x1f0288: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0288u;
    SET_GPR_U32(ctx, 31, 0x1F0290u);
    ctx->pc = 0x1F028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0288u;
    // 0x1f028c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0288u, 0x1F0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0290u;
label_1f0290:
    // 0x1f0290: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0290u;
    SET_GPR_U32(ctx, 31, 0x1F0298u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0290u, 0x1F0298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0298u;
label_1f0298:
    // 0x1f0298: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F0298u;
    {
        const bool branch_taken_0x1f0298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0298u;
        // 0x1f029c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0298) {
            ctx->pc = 0x1F02F0u;
            goto label_1f02f0;
        }
    }
    ctx->pc = 0x1F02A0u;
label_1f02a0:
    // 0x1f02a0: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f02a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f02a4: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F02A4u;
    SET_GPR_U32(ctx, 31, 0x1F02ACu);
    ctx->pc = 0x1F02A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02A4u;
    // 0x1f02a8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F02A4u, 0x1F02ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02ACu;
label_1f02ac:
    // 0x1f02ac: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F02ACu;
    {
        const bool branch_taken_0x1f02ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02ACu;
        // 0x1f02b0: 0x32c28000  andi        $v0, $s6, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02ac) {
            ctx->pc = 0x1F02C4u;
            goto label_1f02c4;
        }
    }
    ctx->pc = 0x1F02B4u;
    // 0x1f02b4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F02B4u;
    SET_GPR_U32(ctx, 31, 0x1F02BCu);
    ctx->pc = 0x1F02B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02B4u;
    // 0x1f02b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F02B4u, 0x1F02BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02BCu;
label_1f02bc:
    // 0x1f02bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F02BCu;
    {
        const bool branch_taken_0x1f02bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02BCu;
        // 0x1f02c0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02bc) {
            ctx->pc = 0x1F02F0u;
            goto label_1f02f0;
        }
    }
    ctx->pc = 0x1F02C4u;
label_1f02c4:
    // 0x1f02c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F02C4u;
    {
        const bool branch_taken_0x1f02c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02c4) {
            ctx->pc = 0x1F02DCu;
            goto label_1f02dc;
        }
    }
    ctx->pc = 0x1F02CCu;
    // 0x1f02cc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F02CCu;
    SET_GPR_U32(ctx, 31, 0x1F02D4u);
    ctx->pc = 0x1F02D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02CCu;
    // 0x1f02d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F02CCu, 0x1F02D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02D4u;
label_1f02d4:
    // 0x1f02d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F02D4u;
    {
        const bool branch_taken_0x1f02d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02D4u;
        // 0x1f02d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02d4) {
            ctx->pc = 0x1F02F0u;
            goto label_1f02f0;
        }
    }
    ctx->pc = 0x1F02DCu;
label_1f02dc:
    // 0x1f02dc: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F02DCu;
    SET_GPR_U32(ctx, 31, 0x1F02E4u);
    ctx->pc = 0x1F02E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02DCu;
    // 0x1f02e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F02DCu, 0x1F02E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02E4u;
label_1f02e4:
    // 0x1f02e4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F02E4u;
    SET_GPR_U32(ctx, 31, 0x1F02ECu);
    ctx->pc = 0x1F02E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02E4u;
    // 0x1f02e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F02E4u, 0x1F02ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02ECu;
label_1f02ec:
    // 0x1f02ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f02f0:
    // 0x1f02f0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1f02f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f02f4: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1f02f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f02f8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1f02f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f02fc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f02fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0300: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f0300u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f0304: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f0304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0308: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f0308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f030c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f030cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0310: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f0310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0314: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f0314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0318: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0318u;
        // 0x1f031c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0320u;
}
