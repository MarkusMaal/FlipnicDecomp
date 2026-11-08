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

// Function: entry_001977f4
// Address: 0x1977f4 - 0x1978f8
void entry_001977f4_0x1977f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001977f4_0x1977f4");
#endif

    switch (ctx->pc) {
        case 0x197878u: goto label_197878;
        case 0x197888u: goto label_197888;
        case 0x1978b8u: goto label_1978b8;
        case 0x1978d4u: goto label_1978d4;
        case 0x1978f0u: goto label_1978f0;
        default: break;
    }

    ctx->pc = 0x1977f4u;

    // 0x1977f4: 0x8ea30674  lw          $v1, 0x674($s5)
    ctx->pc = 0x1977f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1652)));
    // 0x1977f8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1977f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1977fc: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1977fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x197800: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197804: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x197804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x197808: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x197808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x19780c: 0x8c6301d4  lw          $v1, 0x1D4($v1)
    ctx->pc = 0x19780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
    // 0x197810: 0x14830039  bne         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x197810u;
    {
        const bool branch_taken_0x197810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x197810) {
            ctx->pc = 0x1978F8u;
            return;
        }
    }
    ctx->pc = 0x197818u;
    // 0x197818: 0x8ea30678  lw          $v1, 0x678($s5)
    ctx->pc = 0x197818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
    // 0x19781c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19781cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197820: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x197820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x197824: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x197824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x197828: 0x8c6301d4  lw          $v1, 0x1D4($v1)
    ctx->pc = 0x197828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
    // 0x19782c: 0x14830032  bne         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x19782Cu;
    {
        const bool branch_taken_0x19782c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19782c) {
            ctx->pc = 0x1978F8u;
            return;
        }
    }
    ctx->pc = 0x197834u;
    // 0x197834: 0x8ea3067c  lw          $v1, 0x67C($s5)
    ctx->pc = 0x197834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1660)));
    // 0x197838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19783c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19783cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x197840: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x197840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x197844: 0x8c6301d4  lw          $v1, 0x1D4($v1)
    ctx->pc = 0x197844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
    // 0x197848: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x197848u;
    {
        const bool branch_taken_0x197848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x197848) {
            ctx->pc = 0x1978F8u;
            return;
        }
    }
    ctx->pc = 0x197850u;
    // 0x197850: 0x8ea3068c  lw          $v1, 0x68C($s5)
    ctx->pc = 0x197850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1676)));
    // 0x197854: 0x1064002a  beq         $v1, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x197854u;
    {
        const bool branch_taken_0x197854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x197854) {
            ctx->pc = 0x197900u;
            return;
        }
    }
    ctx->pc = 0x19785Cu;
    // 0x19785c: 0x8ea306d0  lw          $v1, 0x6D0($s5)
    ctx->pc = 0x19785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
    // 0x197860: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x197860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x197864: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x197864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x197868: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x197868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19786c: 0x8c670034  lw          $a3, 0x34($v1)
    ctx->pc = 0x19786cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x197870: 0xc064b08  jal         func_192C20
    ctx->pc = 0x197870u;
    SET_GPR_U32(ctx, 31, 0x197878u);
    ctx->pc = 0x197874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197870u;
    // 0x197874: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x197870u, 0x197878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197878u;
label_197878:
    // 0x197878: 0x8ea206d0  lw          $v0, 0x6D0($s5)
    ctx->pc = 0x197878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
    // 0x19787c: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x19787cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x197880: 0xc064ee0  jal         func_193B80
    ctx->pc = 0x197880u;
    SET_GPR_U32(ctx, 31, 0x197888u);
    ctx->pc = 0x197884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197880u;
    // 0x197884: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x197880u, 0x197888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197888u;
label_197888:
    // 0x197888: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x197888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19788c: 0xaea2068c  sw          $v0, 0x68C($s5)
    ctx->pc = 0x19788cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1676), GPR_U32(ctx, 2));
    // 0x197890: 0x8ea20680  lw          $v0, 0x680($s5)
    ctx->pc = 0x197890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1664)));
    // 0x197894: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x197894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197898: 0xaea20680  sw          $v0, 0x680($s5)
    ctx->pc = 0x197898u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1664), GPR_U32(ctx, 2));
    // 0x19789c: 0x8ea30674  lw          $v1, 0x674($s5)
    ctx->pc = 0x19789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1652)));
    // 0x1978a0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1978a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1978a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1978a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1978a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1978a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1978ac: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1978acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1978b0: 0xc05ee80  jal         func_17BA00
    ctx->pc = 0x1978B0u;
    SET_GPR_U32(ctx, 31, 0x1978B8u);
    ctx->pc = 0x1978B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978B0u;
    // 0x1978b4: 0x8ea5068c  lw          $a1, 0x68C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x1978B0u, 0x1978B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978B8u;
label_1978b8:
    // 0x1978b8: 0x8ea30678  lw          $v1, 0x678($s5)
    ctx->pc = 0x1978b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
    // 0x1978bc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1978bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1978c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1978c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1978c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1978c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1978c8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1978c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1978cc: 0xc05ee80  jal         func_17BA00
    ctx->pc = 0x1978CCu;
    SET_GPR_U32(ctx, 31, 0x1978D4u);
    ctx->pc = 0x1978D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978CCu;
    // 0x1978d0: 0x8ea5068c  lw          $a1, 0x68C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x1978CCu, 0x1978D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978D4u;
label_1978d4:
    // 0x1978d4: 0x8ea3067c  lw          $v1, 0x67C($s5)
    ctx->pc = 0x1978d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1660)));
    // 0x1978d8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1978d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1978dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1978dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1978e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1978e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1978e4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1978e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1978e8: 0xc05ee80  jal         func_17BA00
    ctx->pc = 0x1978E8u;
    SET_GPR_U32(ctx, 31, 0x1978F0u);
    ctx->pc = 0x1978ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978E8u;
    // 0x1978ec: 0x8ea5068c  lw          $a1, 0x68C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x1978E8u, 0x1978F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978F0u;
label_1978f0:
    // 0x1978f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1978F0u;
    {
        const bool branch_taken_0x1978f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1978f0) {
            ctx->pc = 0x197900u;
            return;
        }
    }
    ctx->pc = 0x1978F8u;
}
