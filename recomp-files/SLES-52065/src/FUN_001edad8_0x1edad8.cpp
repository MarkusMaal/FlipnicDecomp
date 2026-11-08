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

// Function: FUN_001edad8
// Address: 0x1edad8 - 0x1edc0c
void FUN_001edad8_0x1edad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001edad8_0x1edad8");
#endif

    switch (ctx->pc) {
        case 0x1edb60u: goto label_1edb60;
        case 0x1edbc8u: goto label_1edbc8;
        case 0x1edbdcu: goto label_1edbdc;
        case 0x1edbecu: goto label_1edbec;
        default: break;
    }

    ctx->pc = 0x1edad8u;

    // 0x1edad8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1edad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1edadc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1edadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1edae0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1edae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1edae4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1edae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edae8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1edae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1edaec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1edaecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edaf0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1edaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1edaf4: 0x2622fff0  addiu       $v0, $s1, -0x10
    ctx->pc = 0x1edaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x1edaf8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1edaf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edafc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1edafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1edb00: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1edb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1edb04: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1edb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edb08: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1edb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edb0c: 0x2c420061  sltiu       $v0, $v0, 0x61
    ctx->pc = 0x1edb0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x1edb10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDB10u;
    {
        const bool branch_taken_0x1edb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB10u;
        // 0x1edb14: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb10) {
            ctx->pc = 0x1EDB20u;
            goto label_1edb20;
        }
    }
    ctx->pc = 0x1EDB18u;
    // 0x1edb18: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1EDB18u;
    {
        const bool branch_taken_0x1edb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB18u;
        // 0x1edb1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb18) {
            ctx->pc = 0x1EDBECu;
            goto label_1edbec;
        }
    }
    ctx->pc = 0x1EDB20u;
label_1edb20:
    // 0x1edb20: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EDB20u;
    {
        const bool branch_taken_0x1edb20 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1EDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB20u;
        // 0x1edb24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb20) {
            ctx->pc = 0x1EDB68u;
            goto label_1edb68;
        }
    }
    ctx->pc = 0x1EDB28u;
    // 0x1edb28: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1edb28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1edb2c: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1edb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1edb30: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x1edb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
    // 0x1edb34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1edb34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edb38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1edb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1edb3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1edb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1edb40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1edb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1edb44: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x1edb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x1edb48: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x1edb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1edb4c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1edb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1edb50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDB50u;
    {
        const bool branch_taken_0x1edb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB50u;
        // 0x1edb54: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb50) {
            ctx->pc = 0x1EDB74u;
            goto label_1edb74;
        }
    }
    ctx->pc = 0x1EDB58u;
    // 0x1edb58: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EDB58u;
    SET_GPR_U32(ctx, 31, 0x1EDB60u);
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EDB58u, 0x1EDB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB60u;
label_1edb60:
    // 0x1edb60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDB60u;
    {
        const bool branch_taken_0x1edb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB60u;
        // 0x1edb64: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb60) {
            ctx->pc = 0x1EDB78u;
            goto label_1edb78;
        }
    }
    ctx->pc = 0x1EDB68u;
label_1edb68:
    // 0x1edb68: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1edb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1edb6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1edb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1edb70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1edb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1edb74:
    // 0x1edb74: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x1edb74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_1edb78:
    // 0x1edb78: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1edb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1edb7c: 0x8c44c7e0  lw          $a0, -0x3820($v0)
    ctx->pc = 0x1edb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38C7E0u));
    // 0x1edb80: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1edb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x1edb84: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1edb84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1edb88: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1edb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1edb8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1edb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1edb90: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1edb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1edb94: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1edb94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1edb98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1edb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1edb9c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1edb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1edba0: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1edba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1edba4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1edba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1edba8: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1edba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x1edbac: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x1edbacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1edbb0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1edbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1edbb4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1edbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1edbb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1edbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edbbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1edbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edbc0: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EDBC0u;
    SET_GPR_U32(ctx, 31, 0x1EDBC8u);
    ctx->pc = 0x1EDBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBC0u;
    // 0x1edbc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EDBC0u, 0x1EDBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBC8u;
label_1edbc8:
    // 0x1edbc8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1edbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1edbcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDBCCu;
    {
        const bool branch_taken_0x1edbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBCCu;
        // 0x1edbd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbcc) {
            ctx->pc = 0x1EDBE4u;
            goto label_1edbe4;
        }
    }
    ctx->pc = 0x1EDBD4u;
    // 0x1edbd4: 0xc07ae7c  jal         func_1EB9F0
    ctx->pc = 0x1EDBD4u;
    SET_GPR_U32(ctx, 31, 0x1EDBDCu);
    ctx->pc = 0x1EDBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBD4u;
    // 0x1edbd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9F0u, 0x1EDBD4u, 0x1EDBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBDCu;
label_1edbdc:
    // 0x1edbdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDBDCu;
    {
        const bool branch_taken_0x1edbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBDCu;
        // 0x1edbe0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbdc) {
            ctx->pc = 0x1EDBF0u;
            goto label_1edbf0;
        }
    }
    ctx->pc = 0x1EDBE4u;
label_1edbe4:
    // 0x1edbe4: 0xc07ae78  jal         func_1EB9E0
    ctx->pc = 0x1EDBE4u;
    SET_GPR_U32(ctx, 31, 0x1EDBECu);
    ctx->pc = 0x1EDBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBE4u;
    // 0x1edbe8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x1EDBE4u, 0x1EDBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBECu;
label_1edbec:
    // 0x1edbec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1edbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1edbf0:
    // 0x1edbf0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1edbf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1edbf4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1edbf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1edbf8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1edbf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1edbfc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1edbfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1edc00: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1edc00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edc04: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC04u;
        // 0x1edc08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDC0Cu;
}
