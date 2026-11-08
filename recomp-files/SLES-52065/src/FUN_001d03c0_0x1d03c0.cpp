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

// Function: FUN_001d03c0
// Address: 0x1d03c0 - 0x1d0574
void FUN_001d03c0_0x1d03c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d03c0_0x1d03c0");
#endif

    switch (ctx->pc) {
        case 0x1d03dcu: goto label_1d03dc;
        case 0x1d040cu: goto label_1d040c;
        case 0x1d0428u: goto label_1d0428;
        case 0x1d0438u: goto label_1d0438;
        case 0x1d04b4u: goto label_1d04b4;
        case 0x1d04d8u: goto label_1d04d8;
        case 0x1d04ecu: goto label_1d04ec;
        default: break;
    }

    ctx->pc = 0x1d03c0u;

    // 0x1d03c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d03c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d03c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d03c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d03c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d03c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d03cc: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x1d03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x1d03d0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1d03d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d03d4: 0xc045c98  jal         func_117260
    ctx->pc = 0x1D03D4u;
    SET_GPR_U32(ctx, 31, 0x1D03DCu);
    ctx->pc = 0x1D03D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03D4u;
    // 0x1d03d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1D03D4u, 0x1D03DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03DCu;
label_1d03dc:
    // 0x1d03dc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1d03dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1d03e0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1d03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1d03e4: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1d03e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1d03e8: 0x244287d0  addiu       $v0, $v0, -0x7830
    ctx->pc = 0x1d03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936528));
    // 0x1d03ec: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1d03f0: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1d03f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1d03f4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d03f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d03f8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1d03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1d03fc: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0400: 0x2463bf80  addiu       $v1, $v1, -0x4080
    ctx->pc = 0x1d0400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950784));
    // 0x1d0404: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1D0404u;
    SET_GPR_U32(ctx, 31, 0x1D040Cu);
    ctx->pc = 0x1D0408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0404u;
    // 0x1d0408: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1D0404u, 0x1D040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D040Cu;
label_1d040c:
    // 0x1d040c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D040Cu;
    {
        const bool branch_taken_0x1d040c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D040Cu;
        // 0x1d0410: 0x3c050023  lui         $a1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d040c) {
            ctx->pc = 0x1D0428u;
            goto label_1d0428;
        }
    }
    ctx->pc = 0x1D0414u;
    // 0x1d0414: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1d0414u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1d0418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d041c: 0x24a5c6a4  addiu       $a1, $a1, -0x395C
    ctx->pc = 0x1d041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952612));
    // 0x1d0420: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1D0420u;
    SET_GPR_U32(ctx, 31, 0x1D0428u);
    ctx->pc = 0x1D0424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0420u;
    // 0x1d0424: 0x24c6c6c0  addiu       $a2, $a2, -0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1D0420u, 0x1D0428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0428u;
label_1d0428:
    // 0x1d0428: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d042c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d042cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0434: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1d0434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_1d0438:
    // 0x1d0438: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d043c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d0440: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x1d0440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d0444: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d0444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0448: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1d0448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1d044c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0450: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d0450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0454: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1d0454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1d0458: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d045c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0460: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1d0460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1d0464: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0468: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d0468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d046c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1d046cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1d0470: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0474: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d0474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0478: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d0478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1d047c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0480: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d0480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0484: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1d0484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1d0488: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d048c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0490: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1d0490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1d0494: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0498: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d0498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d049c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1d049cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x1d04a0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D04A0u;
    {
        const bool branch_taken_0x1d04a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04A0u;
        // 0x1d04a4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04a0) {
            ctx->pc = 0x1D0438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0438;
        }
    }
    ctx->pc = 0x1D04A8u;
    // 0x1d04a8: 0x2881000b  slti        $at, $a0, 0xB
    ctx->pc = 0x1d04a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d04ac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D04ACu;
    {
        const bool branch_taken_0x1d04ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04ACu;
        // 0x1d04b0: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04ac) {
            ctx->pc = 0x1D04D0u;
            goto label_1d04d0;
        }
    }
    ctx->pc = 0x1D04B4u;
label_1d04b4:
    // 0x1d04b4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d04b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d04b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d04bc: 0x2882000b  slti        $v0, $a0, 0xB
    ctx->pc = 0x1d04bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d04c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d04c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d04c4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1d04c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1d04c8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D04C8u;
    {
        const bool branch_taken_0x1d04c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04C8u;
        // 0x1d04cc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04c8) {
            ctx->pc = 0x1D04B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d04b4;
        }
    }
    ctx->pc = 0x1D04D0u;
label_1d04d0:
    // 0x1d04d0: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x1D04D0u;
    SET_GPR_U32(ctx, 31, 0x1D04D8u);
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1D04D0u, 0x1D04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04D8u;
label_1d04d8:
    // 0x1d04d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d04d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d04dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d04dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d04e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d04e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d04e4: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x1D04E4u;
    SET_GPR_U32(ctx, 31, 0x1D04ECu);
    ctx->pc = 0x1D04E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04E4u;
    // 0x1d04e8: 0x24070041  addiu       $a3, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1D04E4u, 0x1D04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04ECu;
label_1d04ec:
    // 0x1d04ec: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1d04ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d04f0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1d04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d04f4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1d04f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d04f8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1d04f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d04fc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1d04fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0500: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1d0500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0504: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1d0504u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d0508: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1d0508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1d050c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1d050cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1d0510: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d0510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1d0514: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1d0514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d0518: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1d0518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d051c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1d051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0520: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1d0520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0524: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1d0524u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1d0528: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1d0528u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1d052c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1d052cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1d0530: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1d0530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1d0534: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0538: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d0538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d053c: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1d053cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1d0540: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d0540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0544: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1d0544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1d0548: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d0548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d054c: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1d054cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x1d0550: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d0550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0554: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x1d0554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x1d0558: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d0558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d055c: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1d055cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1d0560: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d0560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d056c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D056Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D056Cu;
        // 0x1d0570: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D056Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0574u;
}
