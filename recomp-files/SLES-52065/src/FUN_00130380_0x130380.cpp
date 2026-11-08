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

// Function: FUN_00130380
// Address: 0x130380 - 0x1305dc
void FUN_00130380_0x130380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130380_0x130380");
#endif

    switch (ctx->pc) {
        case 0x13039cu: goto label_13039c;
        case 0x1303a4u: goto label_1303a4;
        case 0x1303b8u: goto label_1303b8;
        case 0x1303d8u: goto label_1303d8;
        case 0x1303f4u: goto label_1303f4;
        case 0x130410u: goto label_130410;
        case 0x130424u: goto label_130424;
        case 0x130430u: goto label_130430;
        case 0x130448u: goto label_130448;
        case 0x130468u: goto label_130468;
        case 0x130484u: goto label_130484;
        case 0x1304a0u: goto label_1304a0;
        case 0x1304b4u: goto label_1304b4;
        case 0x1304c0u: goto label_1304c0;
        case 0x1304d8u: goto label_1304d8;
        case 0x1304f8u: goto label_1304f8;
        case 0x130514u: goto label_130514;
        case 0x130530u: goto label_130530;
        case 0x130544u: goto label_130544;
        case 0x130550u: goto label_130550;
        case 0x130570u: goto label_130570;
        case 0x13058cu: goto label_13058c;
        case 0x1305a8u: goto label_1305a8;
        case 0x1305bcu: goto label_1305bc;
        case 0x1305c8u: goto label_1305c8;
        default: break;
    }

    ctx->pc = 0x130380u;

    // 0x130380: 0x27bdfbe0  addiu       $sp, $sp, -0x420
    ctx->pc = 0x130380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966240));
    // 0x130384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13038c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13038cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130390: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x130390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x130394: 0xc080702  jal         func_201C08
    ctx->pc = 0x130394u;
    SET_GPR_U32(ctx, 31, 0x13039Cu);
    ctx->pc = 0x130398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130394u;
    // 0x130398: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x130394u, 0x13039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13039Cu;
label_13039c:
    // 0x13039c: 0xc080d98  jal         func_203660
    ctx->pc = 0x13039Cu;
    SET_GPR_U32(ctx, 31, 0x1303A4u);
    ctx->pc = 0x1303A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13039Cu;
    // 0x1303a0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x13039Cu, 0x1303A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303A4u;
label_1303a4:
    // 0x1303a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1303a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1303a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1303a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1303ac: 0x24a5ed60  addiu       $a1, $a1, -0x12A0
    ctx->pc = 0x1303acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962528));
    // 0x1303b0: 0xc080796  jal         func_201E58
    ctx->pc = 0x1303B0u;
    SET_GPR_U32(ctx, 31, 0x1303B8u);
    ctx->pc = 0x1303B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303B0u;
    // 0x1303b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x1303B0u, 0x1303B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303B8u;
label_1303b8:
    // 0x1303b8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1303B8u;
    {
        const bool branch_taken_0x1303b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1303BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303B8u;
        // 0x1303bc: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303b8) {
            ctx->pc = 0x130438u;
            goto label_130438;
        }
    }
    ctx->pc = 0x1303C0u;
    // 0x1303c0: 0x83828510  lb          $v0, -0x7AF0($gp)
    ctx->pc = 0x1303c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935824)));
    // 0x1303c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1303C4u;
    {
        const bool branch_taken_0x1303c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1303c4) {
            ctx->pc = 0x1303FCu;
            goto label_1303fc;
        }
    }
    ctx->pc = 0x1303CCu;
    // 0x1303cc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1303ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1303d0: 0xc04c4b8  jal         func_1312E0
    ctx->pc = 0x1303D0u;
    SET_GPR_U32(ctx, 31, 0x1303D8u);
    ctx->pc = 0x1303D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303D0u;
    // 0x1303d4: 0x24846280  addiu       $a0, $a0, 0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312E0u, 0x1303D0u, 0x1303D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303D8u;
label_1303d8:
    // 0x1303d8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1303d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1303dc: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x1303dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x1303e0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1303e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1303e4: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x1303e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x1303e8: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x1303e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
    // 0x1303ec: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1303ECu;
    SET_GPR_U32(ctx, 31, 0x1303F4u);
    ctx->pc = 0x1303F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303ECu;
    // 0x1303f0: 0x24c66270  addiu       $a2, $a2, 0x6270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1303ECu, 0x1303F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303F4u;
label_1303f4:
    // 0x1303f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1303f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1303f8: 0xa3828510  sb          $v0, -0x7AF0($gp)
    ctx->pc = 0x1303f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935824), (uint8_t)GPR_U32(ctx, 2));
label_1303fc:
    // 0x1303fc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1303fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130404: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x130404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130408: 0xc04c1f0  jal         func_1307C0
    ctx->pc = 0x130408u;
    SET_GPR_U32(ctx, 31, 0x130410u);
    ctx->pc = 0x13040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130408u;
    // 0x13040c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307C0u, 0x130408u, 0x130410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130410u;
label_130410:
    // 0x130410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130414: 0x1200006c  beqz        $s0, . + 4 + (0x6C << 2)
    ctx->pc = 0x130414u;
    {
        const bool branch_taken_0x130414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130414) {
            ctx->pc = 0x1305C8u;
            goto label_1305c8;
        }
    }
    ctx->pc = 0x13041Cu;
    // 0x13041c: 0xc04d988  jal         func_136620
    ctx->pc = 0x13041Cu;
    SET_GPR_U32(ctx, 31, 0x130424u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x13041Cu, 0x130424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130424u;
label_130424:
    // 0x130424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130428: 0xc04db3c  jal         func_136CF0
    ctx->pc = 0x130428u;
    SET_GPR_U32(ctx, 31, 0x130430u);
    ctx->pc = 0x13042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130428u;
    // 0x13042c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136CF0u, 0x130428u, 0x130430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130430u;
label_130430:
    // 0x130430: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x130430u;
    {
        const bool branch_taken_0x130430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130430u;
        // 0x130434: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130430) {
            ctx->pc = 0x1305CCu;
            goto label_1305cc;
        }
    }
    ctx->pc = 0x130438u;
label_130438:
    // 0x130438: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x130438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13043c: 0x24a5ed68  addiu       $a1, $a1, -0x1298
    ctx->pc = 0x13043cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962536));
    // 0x130440: 0xc080796  jal         func_201E58
    ctx->pc = 0x130440u;
    SET_GPR_U32(ctx, 31, 0x130448u);
    ctx->pc = 0x130444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130440u;
    // 0x130444: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x130440u, 0x130448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130448u;
label_130448:
    // 0x130448: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x130448u;
    {
        const bool branch_taken_0x130448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130448u;
        // 0x13044c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130448) {
            ctx->pc = 0x1304C8u;
            goto label_1304c8;
        }
    }
    ctx->pc = 0x130450u;
    // 0x130450: 0x83828510  lb          $v0, -0x7AF0($gp)
    ctx->pc = 0x130450u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935824)));
    // 0x130454: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x130454u;
    {
        const bool branch_taken_0x130454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130454) {
            ctx->pc = 0x13048Cu;
            goto label_13048c;
        }
    }
    ctx->pc = 0x13045Cu;
    // 0x13045c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x13045cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130460: 0xc04c4b8  jal         func_1312E0
    ctx->pc = 0x130460u;
    SET_GPR_U32(ctx, 31, 0x130468u);
    ctx->pc = 0x130464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130460u;
    // 0x130464: 0x24846280  addiu       $a0, $a0, 0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312E0u, 0x130460u, 0x130468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130468u;
label_130468:
    // 0x130468: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x130468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x13046c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x13046cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x130470: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x130470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x130474: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x130474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130478: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x130478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
    // 0x13047c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x13047Cu;
    SET_GPR_U32(ctx, 31, 0x130484u);
    ctx->pc = 0x130480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13047Cu;
    // 0x130480: 0x24c66270  addiu       $a2, $a2, 0x6270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x13047Cu, 0x130484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130484u;
label_130484:
    // 0x130484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130488: 0xa3828510  sb          $v0, -0x7AF0($gp)
    ctx->pc = 0x130488u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935824), (uint8_t)GPR_U32(ctx, 2));
label_13048c:
    // 0x13048c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x13048cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130494: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x130494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130498: 0xc04c1f0  jal         func_1307C0
    ctx->pc = 0x130498u;
    SET_GPR_U32(ctx, 31, 0x1304A0u);
    ctx->pc = 0x13049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130498u;
    // 0x13049c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307C0u, 0x130498u, 0x1304A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304A0u;
label_1304a0:
    // 0x1304a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1304a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304a4: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1304A4u;
    {
        const bool branch_taken_0x1304a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1304a4) {
            ctx->pc = 0x1305C8u;
            goto label_1305c8;
        }
    }
    ctx->pc = 0x1304ACu;
    // 0x1304ac: 0xc04d988  jal         func_136620
    ctx->pc = 0x1304ACu;
    SET_GPR_U32(ctx, 31, 0x1304B4u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1304ACu, 0x1304B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304B4u;
label_1304b4:
    // 0x1304b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1304b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304b8: 0xc04db40  jal         func_136D00
    ctx->pc = 0x1304B8u;
    SET_GPR_U32(ctx, 31, 0x1304C0u);
    ctx->pc = 0x1304BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304B8u;
    // 0x1304bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D00u, 0x1304B8u, 0x1304C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304C0u;
label_1304c0:
    // 0x1304c0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1304C0u;
    {
        const bool branch_taken_0x1304c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1304c0) {
            ctx->pc = 0x1305C8u;
            goto label_1305c8;
        }
    }
    ctx->pc = 0x1304C8u;
label_1304c8:
    // 0x1304c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1304c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1304cc: 0x24a5ed70  addiu       $a1, $a1, -0x1290
    ctx->pc = 0x1304ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962544));
    // 0x1304d0: 0xc080796  jal         func_201E58
    ctx->pc = 0x1304D0u;
    SET_GPR_U32(ctx, 31, 0x1304D8u);
    ctx->pc = 0x1304D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304D0u;
    // 0x1304d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x1304D0u, 0x1304D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304D8u;
label_1304d8:
    // 0x1304d8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1304D8u;
    {
        const bool branch_taken_0x1304d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1304d8) {
            ctx->pc = 0x130558u;
            goto label_130558;
        }
    }
    ctx->pc = 0x1304E0u;
    // 0x1304e0: 0x83828510  lb          $v0, -0x7AF0($gp)
    ctx->pc = 0x1304e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935824)));
    // 0x1304e4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1304E4u;
    {
        const bool branch_taken_0x1304e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1304e4) {
            ctx->pc = 0x13051Cu;
            goto label_13051c;
        }
    }
    ctx->pc = 0x1304ECu;
    // 0x1304ec: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1304ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1304f0: 0xc04c4b8  jal         func_1312E0
    ctx->pc = 0x1304F0u;
    SET_GPR_U32(ctx, 31, 0x1304F8u);
    ctx->pc = 0x1304F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304F0u;
    // 0x1304f4: 0x24846280  addiu       $a0, $a0, 0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312E0u, 0x1304F0u, 0x1304F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304F8u;
label_1304f8:
    // 0x1304f8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1304f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1304fc: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x1304fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x130500: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x130500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x130504: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x130504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130508: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x130508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
    // 0x13050c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x13050Cu;
    SET_GPR_U32(ctx, 31, 0x130514u);
    ctx->pc = 0x130510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13050Cu;
    // 0x130510: 0x24c66270  addiu       $a2, $a2, 0x6270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x13050Cu, 0x130514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130514u;
label_130514:
    // 0x130514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130518: 0xa3828510  sb          $v0, -0x7AF0($gp)
    ctx->pc = 0x130518u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935824), (uint8_t)GPR_U32(ctx, 2));
label_13051c:
    // 0x13051c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x13051cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130524: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x130524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130528: 0xc04c1f0  jal         func_1307C0
    ctx->pc = 0x130528u;
    SET_GPR_U32(ctx, 31, 0x130530u);
    ctx->pc = 0x13052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130528u;
    // 0x13052c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307C0u, 0x130528u, 0x130530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130530u;
label_130530:
    // 0x130530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130534: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x130534u;
    {
        const bool branch_taken_0x130534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130534) {
            ctx->pc = 0x1305C8u;
            goto label_1305c8;
        }
    }
    ctx->pc = 0x13053Cu;
    // 0x13053c: 0xc04d988  jal         func_136620
    ctx->pc = 0x13053Cu;
    SET_GPR_U32(ctx, 31, 0x130544u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x13053Cu, 0x130544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130544u;
label_130544:
    // 0x130544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130548: 0xc04db44  jal         func_136D10
    ctx->pc = 0x130548u;
    SET_GPR_U32(ctx, 31, 0x130550u);
    ctx->pc = 0x13054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130548u;
    // 0x13054c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D10u, 0x130548u, 0x130550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130550u;
label_130550:
    // 0x130550: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x130550u;
    {
        const bool branch_taken_0x130550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130550) {
            ctx->pc = 0x1305C8u;
            goto label_1305c8;
        }
    }
    ctx->pc = 0x130558u;
label_130558:
    // 0x130558: 0x83828510  lb          $v0, -0x7AF0($gp)
    ctx->pc = 0x130558u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935824)));
    // 0x13055c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13055Cu;
    {
        const bool branch_taken_0x13055c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13055c) {
            ctx->pc = 0x130594u;
            goto label_130594;
        }
    }
    ctx->pc = 0x130564u;
    // 0x130564: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x130564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130568: 0xc04c4b8  jal         func_1312E0
    ctx->pc = 0x130568u;
    SET_GPR_U32(ctx, 31, 0x130570u);
    ctx->pc = 0x13056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130568u;
    // 0x13056c: 0x24846280  addiu       $a0, $a0, 0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312E0u, 0x130568u, 0x130570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130570u;
label_130570:
    // 0x130570: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x130570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130574: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x130574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x130578: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x130578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x13057c: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x13057cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130580: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x130580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
    // 0x130584: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x130584u;
    SET_GPR_U32(ctx, 31, 0x13058Cu);
    ctx->pc = 0x130588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130584u;
    // 0x130588: 0x24c66270  addiu       $a2, $a2, 0x6270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x130584u, 0x13058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13058Cu;
label_13058c:
    // 0x13058c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130590: 0xa3828510  sb          $v0, -0x7AF0($gp)
    ctx->pc = 0x130590u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935824), (uint8_t)GPR_U32(ctx, 2));
label_130594:
    // 0x130594: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x130594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13059c: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x13059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x1305a0: 0xc04c1f0  jal         func_1307C0
    ctx->pc = 0x1305A0u;
    SET_GPR_U32(ctx, 31, 0x1305A8u);
    ctx->pc = 0x1305A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305A0u;
    // 0x1305a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307C0u, 0x1305A0u, 0x1305A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305A8u;
label_1305a8:
    // 0x1305a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1305a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305ac: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1305ACu;
    {
        const bool branch_taken_0x1305ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1305ac) {
            ctx->pc = 0x1305C8u;
            goto label_1305c8;
        }
    }
    ctx->pc = 0x1305B4u;
    // 0x1305b4: 0xc04d988  jal         func_136620
    ctx->pc = 0x1305B4u;
    SET_GPR_U32(ctx, 31, 0x1305BCu);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1305B4u, 0x1305BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305BCu;
label_1305bc:
    // 0x1305bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1305bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305c0: 0xc04c558  jal         func_131560
    ctx->pc = 0x1305C0u;
    SET_GPR_U32(ctx, 31, 0x1305C8u);
    ctx->pc = 0x1305C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305C0u;
    // 0x1305c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x1305C0u, 0x1305C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305C8u;
label_1305c8:
    // 0x1305c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1305c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1305cc:
    // 0x1305cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1305ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1305d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1305d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1305d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1305D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1305D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305D4u;
        // 0x1305d8: 0x27bd0420  addiu       $sp, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1305D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1305DCu;
}
