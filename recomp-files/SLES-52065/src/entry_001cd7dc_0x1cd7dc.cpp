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

// Function: entry_001cd7dc
// Address: 0x1cd7dc - 0x1cd8c0
void entry_001cd7dc_0x1cd7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd7dc_0x1cd7dc");
#endif

    switch (ctx->pc) {
        case 0x1cd7e8u: goto label_1cd7e8;
        case 0x1cd7f8u: goto label_1cd7f8;
        default: break;
    }

    ctx->pc = 0x1cd7dcu;

label_1cd7dc:
    // 0x1cd7dc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cd7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd7e0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD7E0u;
    SET_GPR_U32(ctx, 31, 0x1CD7E8u);
    ctx->pc = 0x1CD7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7E0u;
    // 0x1cd7e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD7E0u, 0x1CD7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7E8u;
label_1cd7e8:
    // 0x1cd7e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cd7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cd7ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7f0: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CD7F0u;
    SET_GPR_U32(ctx, 31, 0x1CD7F8u);
    ctx->pc = 0x1CD7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7F0u;
    // 0x1cd7f4: 0x24a58ac0  addiu       $a1, $a1, -0x7540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CD7F0u, 0x1CD7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7F8u;
label_1cd7f8:
    // 0x1cd7f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cd7fc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1cd7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd800: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CD800u;
    {
        const bool branch_taken_0x1cd800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD800u;
        // 0x1cd804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd800) {
            ctx->pc = 0x1CD7DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd7dc;
        }
    }
    ctx->pc = 0x1CD808u;
    // 0x1cd808: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cd808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cd80c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1cd80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1cd810: 0x8c242ca0  lw          $a0, 0x2CA0($at)
    ctx->pc = 0x1cd810u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x222CA0u));
    // 0x1cd814: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1cd814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x1cd818: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cd818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cd81c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd820: 0x24422c30  addiu       $v0, $v0, 0x2C30
    ctx->pc = 0x1cd820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11312));
    // 0x1cd824: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cd824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cd828: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cd828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cd82c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1cd82cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd830: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cd830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cd834: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1cd834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cd838: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cd838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd83c: 0xae240070  sw          $a0, 0x70($s1)
    ctx->pc = 0x1cd83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 4));
    // 0x1cd840: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x1cd840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1cd844: 0xae240080  sw          $a0, 0x80($s1)
    ctx->pc = 0x1cd844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 4));
    // 0x1cd848: 0x8c242ca4  lw          $a0, 0x2CA4($at)
    ctx->pc = 0x1cd848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11428)));
    // 0x1cd84c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cd84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cd850: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cd850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cd854: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1cd854u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd858: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cd858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cd85c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1cd85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cd860: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cd860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd864: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x1cd864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
    // 0x1cd868: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x1cd868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x1cd86c: 0xae240084  sw          $a0, 0x84($s1)
    ctx->pc = 0x1cd86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
    // 0x1cd870: 0x8c242ca8  lw          $a0, 0x2CA8($at)
    ctx->pc = 0x1cd870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11432)));
    // 0x1cd874: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cd874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cd878: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cd878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cd87c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1cd87cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd880: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cd880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cd884: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1cd884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cd888: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cd888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd88c: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x1cd88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
    // 0x1cd890: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1cd890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1cd894: 0xae240088  sw          $a0, 0x88($s1)
    ctx->pc = 0x1cd894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 4));
    // 0x1cd898: 0x8c242cac  lw          $a0, 0x2CAC($at)
    ctx->pc = 0x1cd898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11436)));
    // 0x1cd89c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cd8a0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cd8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd8a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cd8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cd8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cd8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd8ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd8b0: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x1cd8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x1cd8b4: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x1cd8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1cd8b8: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x1cd8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    // 0x1cd8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cd8c0u;
}
