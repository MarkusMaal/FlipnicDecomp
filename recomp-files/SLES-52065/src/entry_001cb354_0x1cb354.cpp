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

// Function: entry_001cb354
// Address: 0x1cb354 - 0x1cb498
void entry_001cb354_0x1cb354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb354_0x1cb354");
#endif

    switch (ctx->pc) {
        case 0x1cb364u: goto label_1cb364;
        case 0x1cb378u: goto label_1cb378;
        case 0x1cb398u: goto label_1cb398;
        case 0x1cb3a0u: goto label_1cb3a0;
        case 0x1cb3bcu: goto label_1cb3bc;
        case 0x1cb3d4u: goto label_1cb3d4;
        case 0x1cb3f4u: goto label_1cb3f4;
        case 0x1cb40cu: goto label_1cb40c;
        case 0x1cb42cu: goto label_1cb42c;
        case 0x1cb440u: goto label_1cb440;
        case 0x1cb454u: goto label_1cb454;
        case 0x1cb464u: goto label_1cb464;
        case 0x1cb474u: goto label_1cb474;
        case 0x1cb484u: goto label_1cb484;
        default: break;
    }

    ctx->pc = 0x1cb354u;

label_1cb354:
    // 0x1cb354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb358: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb35c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB35Cu;
    SET_GPR_U32(ctx, 31, 0x1CB364u);
    ctx->pc = 0x1CB360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB35Cu;
    // 0x1cb360: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB35Cu, 0x1CB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB364u;
label_1cb364:
    // 0x1cb364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb368: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1cb368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1cb36c: 0x24427f10  addiu       $v0, $v0, 0x7F10
    ctx->pc = 0x1cb36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32528));
    // 0x1cb370: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB370u;
    SET_GPR_U32(ctx, 31, 0x1CB378u);
    ctx->pc = 0x1CB374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB370u;
    // 0x1cb374: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB370u, 0x1CB378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB378u;
label_1cb378:
    // 0x1cb378: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cb378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cb37c: 0x2a42000f  slti        $v0, $s2, 0xF
    ctx->pc = 0x1cb37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1cb380: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CB380u;
    {
        const bool branch_taken_0x1cb380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB380u;
        // 0x1cb384: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb380) {
            ctx->pc = 0x1CB354u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb354;
        }
    }
    ctx->pc = 0x1CB388u;
    // 0x1cb388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb38c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb390: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB390u;
    SET_GPR_U32(ctx, 31, 0x1CB398u);
    ctx->pc = 0x1CB394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB390u;
    // 0x1cb394: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB390u, 0x1CB398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB398u;
label_1cb398:
    // 0x1cb398: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CB398u;
    SET_GPR_U32(ctx, 31, 0x1CB3A0u);
    ctx->pc = 0x1CB39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB398u;
    // 0x1cb39c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CB398u, 0x1CB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3A0u;
label_1cb3a0:
    // 0x1cb3a0: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1cb3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x1cb3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3a8: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x1cb3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x1cb3ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3b4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB3B4u;
    SET_GPR_U32(ctx, 31, 0x1CB3BCu);
    ctx->pc = 0x1CB3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3B4u;
    // 0x1cb3b8: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB3B4u, 0x1CB3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3BCu;
label_1cb3bc:
    // 0x1cb3bc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1cb3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cb3c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb3c8: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x1cb3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cb3cc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB3CCu;
    SET_GPR_U32(ctx, 31, 0x1CB3D4u);
    ctx->pc = 0x1CB3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3CCu;
    // 0x1cb3d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB3CCu, 0x1CB3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3D4u;
label_1cb3d4:
    // 0x1cb3d4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1cb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cb3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb3e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cb3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb3e4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1cb3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cb3e8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1cb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cb3ec: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB3ECu;
    SET_GPR_U32(ctx, 31, 0x1CB3F4u);
    ctx->pc = 0x1CB3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3ECu;
    // 0x1cb3f0: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB3ECu, 0x1CB3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3F4u;
label_1cb3f4:
    // 0x1cb3f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1cb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cb3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb400: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x1cb400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cb404: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB404u;
    SET_GPR_U32(ctx, 31, 0x1CB40Cu);
    ctx->pc = 0x1CB408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB404u;
    // 0x1cb408: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB404u, 0x1CB40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB40Cu;
label_1cb40c:
    // 0x1cb40c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1cb40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cb410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb414: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb418: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cb418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb41c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1cb41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cb420: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1cb420u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cb424: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB424u;
    SET_GPR_U32(ctx, 31, 0x1CB42Cu);
    ctx->pc = 0x1CB428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB424u;
    // 0x1cb428: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB424u, 0x1CB42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB42Cu;
label_1cb42c:
    // 0x1cb42c: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cb42cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb434: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb438: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB438u;
    SET_GPR_U32(ctx, 31, 0x1CB440u);
    ctx->pc = 0x1CB43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB438u;
    // 0x1cb43c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB438u, 0x1CB440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB440u;
label_1cb440:
    // 0x1cb440: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cb440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb448: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb44c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB44Cu;
    SET_GPR_U32(ctx, 31, 0x1CB454u);
    ctx->pc = 0x1CB450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB44Cu;
    // 0x1cb450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB44Cu, 0x1CB454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB454u;
label_1cb454:
    // 0x1cb454: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cb454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cb458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb45c: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB45Cu;
    SET_GPR_U32(ctx, 31, 0x1CB464u);
    ctx->pc = 0x1CB460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB45Cu;
    // 0x1cb460: 0x24a58000  addiu       $a1, $a1, -0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB45Cu, 0x1CB464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB464u;
label_1cb464:
    // 0x1cb464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb468: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb46c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB46Cu;
    SET_GPR_U32(ctx, 31, 0x1CB474u);
    ctx->pc = 0x1CB470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB46Cu;
    // 0x1cb470: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB46Cu, 0x1CB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB474u;
label_1cb474:
    // 0x1cb474: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cb474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cb478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb47c: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB47Cu;
    SET_GPR_U32(ctx, 31, 0x1CB484u);
    ctx->pc = 0x1CB480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB47Cu;
    // 0x1cb480: 0x24a58010  addiu       $a1, $a1, -0x7FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB47Cu, 0x1CB484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB484u;
label_1cb484:
    // 0x1cb484: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1cb484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1cb488: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB488u;
    {
        const bool branch_taken_0x1cb488 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB488u;
        // 0x1cb48c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb488) {
            ctx->pc = 0x1CB498u;
            return;
        }
    }
    ctx->pc = 0x1CB490u;
    // 0x1cb490: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1cb490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb494: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1cb494u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1cb498u;
}
