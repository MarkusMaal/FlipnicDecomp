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

// Function: FUN_001c53d0
// Address: 0x1c53d0 - 0x1c552c
void FUN_001c53d0_0x1c53d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c53d0_0x1c53d0");
#endif

    switch (ctx->pc) {
        case 0x1c5484u: goto label_1c5484;
        case 0x1c5490u: goto label_1c5490;
        case 0x1c54b4u: goto label_1c54b4;
        case 0x1c54d0u: goto label_1c54d0;
        case 0x1c54e4u: goto label_1c54e4;
        case 0x1c54ecu: goto label_1c54ec;
        case 0x1c5500u: goto label_1c5500;
        default: break;
    }

    ctx->pc = 0x1c53d0u;

    // 0x1c53d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c53d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c53d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c53d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c53d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c53d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c53dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c53dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c53e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c53e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c53e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c53e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c53e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c53e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c53ec: 0x8c87006c  lw          $a3, 0x6C($a0)
    ctx->pc = 0x1c53ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1c53f0: 0x10e60029  beq         $a3, $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C53F0u;
    {
        const bool branch_taken_0x1c53f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C53F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53F0u;
        // 0x1c53f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53f0) {
            ctx->pc = 0x1C5498u;
            goto label_1c5498;
        }
    }
    ctx->pc = 0x1C53F8u;
    // 0x1c53f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c53f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c53fc: 0x10e50017  beq         $a3, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C53FCu;
    {
        const bool branch_taken_0x1c53fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c53fc) {
            ctx->pc = 0x1C545Cu;
            goto label_1c545c;
        }
    }
    ctx->pc = 0x1C5404u;
    // 0x1c5404: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c5404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5408: 0x10e4000b  beq         $a3, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5408u;
    {
        const bool branch_taken_0x1c5408 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5408u;
        // 0x1c540c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5408) {
            ctx->pc = 0x1C5438u;
            goto label_1c5438;
        }
    }
    ctx->pc = 0x1C5410u;
    // 0x1c5410: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5410u;
    {
        const bool branch_taken_0x1c5410 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5410) {
            ctx->pc = 0x1C5428u;
            goto label_1c5428;
        }
    }
    ctx->pc = 0x1C5418u;
    // 0x1c5418: 0x10e0003d  beqz        $a3, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C5418u;
    {
        const bool branch_taken_0x1c5418 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5418) {
            ctx->pc = 0x1C5510u;
            goto label_1c5510;
        }
    }
    ctx->pc = 0x1C5420u;
    // 0x1c5420: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C5420u;
    {
        const bool branch_taken_0x1c5420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5420) {
            ctx->pc = 0x1C5510u;
            goto label_1c5510;
        }
    }
    ctx->pc = 0x1C5428u;
label_1c5428:
    // 0x1c5428: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1c5428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c542c: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1c542cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1c5430: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1C5430u;
    {
        const bool branch_taken_0x1c5430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5430u;
        // 0x1c5434: 0xae04006c  sw          $a0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5430) {
            ctx->pc = 0x1C5510u;
            goto label_1c5510;
        }
    }
    ctx->pc = 0x1C5438u;
label_1c5438:
    // 0x1c5438: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c5438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c543c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c543cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c5440: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1c5440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1c5444: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c5444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c5448: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C5448u;
    {
        const bool branch_taken_0x1c5448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5448) {
            ctx->pc = 0x1C5510u;
            goto label_1c5510;
        }
    }
    ctx->pc = 0x1C5450u;
    // 0x1c5450: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x1c5450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
    // 0x1c5454: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1C5454u;
    {
        const bool branch_taken_0x1c5454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5454u;
        // 0x1c5458: 0xae05006c  sw          $a1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5454) {
            ctx->pc = 0x1C5510u;
            goto label_1c5510;
        }
    }
    ctx->pc = 0x1C545Cu;
label_1c545c:
    // 0x1c545c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c5460: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c5460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c5464: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1c5464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1c5468: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c5468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c546c: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C546Cu;
    {
        const bool branch_taken_0x1c546c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c546c) {
            ctx->pc = 0x1C5510u;
            goto label_1c5510;
        }
    }
    ctx->pc = 0x1C5474u;
    // 0x1c5474: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x1c5474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
    // 0x1c5478: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c5478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c547c: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C547Cu;
    SET_GPR_U32(ctx, 31, 0x1C5484u);
    ctx->pc = 0x1C5480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C547Cu;
    // 0x1c5480: 0xae06006c  sw          $a2, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C547Cu, 0x1C5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5484u;
label_1c5484:
    // 0x1c5484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5488: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C5488u;
    SET_GPR_U32(ctx, 31, 0x1C5490u);
    ctx->pc = 0x1C548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5488u;
    // 0x1c548c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C5488u, 0x1C5490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5490u;
label_1c5490:
    // 0x1c5490: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C5490u;
    {
        const bool branch_taken_0x1c5490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5490) {
            ctx->pc = 0x1C5510u;
            goto label_1c5510;
        }
    }
    ctx->pc = 0x1C5498u;
label_1c5498:
    // 0x1c5498: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c5498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c549c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c54a0: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1c54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1c54a4: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c54a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c54a8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C54A8u;
    {
        const bool branch_taken_0x1c54a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54A8u;
        // 0x1c54ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54a8) {
            ctx->pc = 0x1C5510u;
            goto label_1c5510;
        }
    }
    ctx->pc = 0x1C54B0u;
    // 0x1c54b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c54b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c54b4:
    // 0x1c54b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1c54b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c54b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c54bc: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x1c54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
    // 0x1c54c0: 0x24a51ef0  addiu       $a1, $a1, 0x1EF0
    ctx->pc = 0x1c54c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7920));
    // 0x1c54c4: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x1c54c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c54c8: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1C54C8u;
    SET_GPR_U32(ctx, 31, 0x1C54D0u);
    ctx->pc = 0x1C54CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54C8u;
    // 0x1c54cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1C54C8u, 0x1C54D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54D0u;
label_1c54d0:
    // 0x1c54d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C54D0u;
    {
        const bool branch_taken_0x1c54d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54D0u;
        // 0x1c54d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54d0) {
            ctx->pc = 0x1C54ECu;
            goto label_1c54ec;
        }
    }
    ctx->pc = 0x1C54D8u;
    // 0x1c54d8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c54d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c54dc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C54DCu;
    SET_GPR_U32(ctx, 31, 0x1C54E4u);
    ctx->pc = 0x1C54E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54DCu;
    // 0x1c54e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C54DCu, 0x1C54E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54E4u;
label_1c54e4:
    // 0x1c54e4: 0xc06eb5c  jal         func_1BAD70
    ctx->pc = 0x1C54E4u;
    SET_GPR_U32(ctx, 31, 0x1C54ECu);
    ctx->pc = 0x1C54E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54E4u;
    // 0x1c54e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD70u, 0x1C54E4u, 0x1C54ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54ECu;
label_1c54ec:
    // 0x1c54ec: 0x0  nop
    ctx->pc = 0x1c54ecu;
    // NOP
    // 0x1c54f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c54f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c54f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c54f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54f8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1C54F8u;
    SET_GPR_U32(ctx, 31, 0x1C5500u);
    ctx->pc = 0x1C54FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54F8u;
    // 0x1c54fc: 0x24a51ef0  addiu       $a1, $a1, 0x1EF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1C54F8u, 0x1C5500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5500u;
label_1c5500:
    // 0x1c5500: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c5500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c5504: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x1c5504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c5508: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1C5508u;
    {
        const bool branch_taken_0x1c5508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5508u;
        // 0x1c550c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5508) {
            ctx->pc = 0x1C54B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c54b4;
        }
    }
    ctx->pc = 0x1C5510u;
label_1c5510:
    // 0x1c5510: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c5510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c5514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c5518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c551c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c551cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5524: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5524u;
        // 0x1c5528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C552Cu;
}
