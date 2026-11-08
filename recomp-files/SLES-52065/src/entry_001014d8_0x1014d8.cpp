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

// Function: entry_001014d8
// Address: 0x1014d8 - 0x1015d0
void entry_001014d8_0x1014d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001014d8_0x1014d8");
#endif

    switch (ctx->pc) {
        case 0x1014e0u: goto label_1014e0;
        case 0x1014fcu: goto label_1014fc;
        case 0x101508u: goto label_101508;
        case 0x10151cu: goto label_10151c;
        case 0x101550u: goto label_101550;
        case 0x101558u: goto label_101558;
        case 0x101560u: goto label_101560;
        case 0x101568u: goto label_101568;
        case 0x101574u: goto label_101574;
        case 0x10157cu: goto label_10157c;
        case 0x101588u: goto label_101588;
        case 0x101590u: goto label_101590;
        case 0x10159cu: goto label_10159c;
        case 0x1015c8u: goto label_1015c8;
        default: break;
    }

    ctx->pc = 0x1014d8u;

label_1014d8:
    // 0x1014d8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1014D8u;
    SET_GPR_U32(ctx, 31, 0x1014E0u);
    ctx->pc = 0x1014DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014D8u;
    // 0x1014dc: 0x3c040100  lui         $a0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1014D8u, 0x1014E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014E0u;
label_1014e0:
    // 0x1014e0: 0x0  nop
    ctx->pc = 0x1014e0u;
    // NOP
    // 0x1014e4: 0x0  nop
    ctx->pc = 0x1014e4u;
    // NOP
    // 0x1014e8: 0x0  nop
    ctx->pc = 0x1014e8u;
    // NOP
    // 0x1014ec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1014ECu;
    {
        const bool branch_taken_0x1014ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1014ec) {
            ctx->pc = 0x1014D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1014d8;
        }
    }
    ctx->pc = 0x1014F4u;
    // 0x1014f4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1014F4u;
    SET_GPR_U32(ctx, 31, 0x1014FCu);
    ctx->pc = 0x1014F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014F4u;
    // 0x1014f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1014F4u, 0x1014FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014FCu;
label_1014fc:
    // 0x1014fc: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1014fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x101500: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x101500u;
    SET_GPR_U32(ctx, 31, 0x101508u);
    ctx->pc = 0x101504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101500u;
    // 0x101504: 0x84502828  lh          $s0, 0x2828($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x101500u, 0x101508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101508u;
label_101508:
    // 0x101508: 0x8f848380  lw          $a0, -0x7C80($gp)
    ctx->pc = 0x101508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
    // 0x10150c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10150cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x101510: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x101510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101514: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x101514u;
    SET_GPR_U32(ctx, 31, 0x10151Cu);
    ctx->pc = 0x101518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101514u;
    // 0x101518: 0x24a5dfc0  addiu       $a1, $a1, -0x2040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x101514u, 0x10151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10151Cu;
label_10151c:
    // 0x10151c: 0x8f838380  lw          $v1, -0x7C80($gp)
    ctx->pc = 0x10151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
    // 0x101520: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x101524: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x101528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10152c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x10152cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101530: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x101530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x101534: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x101534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x101538: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x101538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x10153c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x101540: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x101540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101544: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x101544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101548: 0xc046b40  jal         func_11AD00
    ctx->pc = 0x101548u;
    SET_GPR_U32(ctx, 31, 0x101550u);
    ctx->pc = 0x10154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101548u;
    // 0x10154c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD00u, 0x101548u, 0x101550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101550u;
label_101550:
    // 0x101550: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x101550u;
    SET_GPR_U32(ctx, 31, 0x101558u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x101550u, 0x101558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101558u;
label_101558:
    // 0x101558: 0xc0740f0  jal         func_1D03C0
    ctx->pc = 0x101558u;
    SET_GPR_U32(ctx, 31, 0x101560u);
    ctx->pc = 0x10155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101558u;
    // 0x10155c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D03C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D03C0u, 0x101558u, 0x101560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101560u;
label_101560:
    // 0x101560: 0xc07418c  jal         func_1D0630
    ctx->pc = 0x101560u;
    SET_GPR_U32(ctx, 31, 0x101568u);
    ctx->pc = 0x101564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101560u;
    // 0x101564: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0630u, 0x101560u, 0x101568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101568u;
label_101568:
    // 0x101568: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x101568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x10156c: 0xc054660  jal         func_151980
    ctx->pc = 0x10156Cu;
    SET_GPR_U32(ctx, 31, 0x101574u);
    ctx->pc = 0x101570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10156Cu;
    // 0x101570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x10156Cu, 0x101574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101574u;
label_101574:
    // 0x101574: 0xc074190  jal         func_1D0640
    ctx->pc = 0x101574u;
    SET_GPR_U32(ctx, 31, 0x10157Cu);
    ctx->pc = 0x101578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101574u;
    // 0x101578: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0640u, 0x101574u, 0x10157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10157Cu;
label_10157c:
    // 0x10157c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x10157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x101580: 0xc074160  jal         func_1D0580
    ctx->pc = 0x101580u;
    SET_GPR_U32(ctx, 31, 0x101588u);
    ctx->pc = 0x101584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101580u;
    // 0x101584: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0580u, 0x101580u, 0x101588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101588u;
label_101588:
    // 0x101588: 0xc061804  jal         func_186010
    ctx->pc = 0x101588u;
    SET_GPR_U32(ctx, 31, 0x101590u);
    ctx->pc = 0x186010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186010u, 0x101588u, 0x101590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101590u;
label_101590:
    // 0x101590: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x101590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x101594: 0xc080702  jal         func_201C08
    ctx->pc = 0x101594u;
    SET_GPR_U32(ctx, 31, 0x10159Cu);
    ctx->pc = 0x101598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101594u;
    // 0x101598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x101594u, 0x10159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10159Cu;
label_10159c:
    // 0x10159c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x10159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1015a0: 0x8c512830  lw          $s1, 0x2830($v0)
    ctx->pc = 0x1015a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10288)));
    // 0x1015a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1015A4u;
    {
        const bool branch_taken_0x1015a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1015A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015A4u;
        // 0x1015a8: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015a4) {
            ctx->pc = 0x1015E8u;
            return;
        }
    }
    ctx->pc = 0x1015ACu;
    // 0x1015ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1015acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1015b0: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1015B0u;
    {
        const bool branch_taken_0x1015b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1015B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015B0u;
        // 0x1015b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015b0) {
            ctx->pc = 0x1015D0u;
            return;
        }
    }
    ctx->pc = 0x1015B8u;
    // 0x1015b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1015b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1015bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1015bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1015c0: 0xc080664  jal         func_201990
    ctx->pc = 0x1015C0u;
    SET_GPR_U32(ctx, 31, 0x1015C8u);
    ctx->pc = 0x1015C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015C0u;
    // 0x1015c4: 0x24a5dfc8  addiu       $a1, $a1, -0x2038 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1015C0u, 0x1015C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015C8u;
label_1015c8:
    // 0x1015c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1015C8u;
    {
        const bool branch_taken_0x1015c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1015c8) {
            ctx->pc = 0x1015E4u;
            return;
        }
    }
    ctx->pc = 0x1015D0u;
}
