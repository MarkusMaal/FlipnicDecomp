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

// Function: entry_0014b4f8
// Address: 0x14b4f8 - 0x14b568
void entry_0014b4f8_0x14b4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b4f8_0x14b4f8");
#endif

    switch (ctx->pc) {
        case 0x14b518u: goto label_14b518;
        case 0x14b52cu: goto label_14b52c;
        case 0x14b560u: goto label_14b560;
        default: break;
    }

    ctx->pc = 0x14b4f8u;

    // 0x14b4f8: 0x16000050  bnez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x14B4F8u;
    {
        const bool branch_taken_0x14b4f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4F8u;
        // 0x14b4fc: 0xafb20128  sw          $s2, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b4f8) {
            ctx->pc = 0x14B63Cu;
            return;
        }
    }
    ctx->pc = 0x14B500u;
    // 0x14b500: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14b500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14b504: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14b508: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x14B508u;
    {
        const bool branch_taken_0x14b508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B508u;
        // 0x14b50c: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b508) {
            ctx->pc = 0x14B63Cu;
            return;
        }
    }
    ctx->pc = 0x14B510u;
    // 0x14b510: 0xc05023c  jal         func_1408F0
    ctx->pc = 0x14B510u;
    SET_GPR_U32(ctx, 31, 0x14B518u);
    ctx->pc = 0x14B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B510u;
    // 0x14b514: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408F0u, 0x14B510u, 0x14B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B518u;
label_14b518:
    // 0x14b518: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x14b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b51c: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x14b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x14b520: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x14b520u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x14b524: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x14B524u;
    SET_GPR_U32(ctx, 31, 0x14B52Cu);
    ctx->pc = 0x14B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B524u;
    // 0x14b528: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x14B524u, 0x14B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B52Cu;
label_14b52c:
    // 0x14b52c: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x14b52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14b530: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x14b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14b534: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x14b534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b538: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14b53c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x14b53cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14b540: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B540u;
    {
        const bool branch_taken_0x14b540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b540) {
            ctx->pc = 0x14B568u;
            return;
        }
    }
    ctx->pc = 0x14B548u;
    // 0x14b548: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14b548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14b54c: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x14b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x14b550: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x14b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14b554: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14b554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b558: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x14B558u;
    SET_GPR_U32(ctx, 31, 0x14B560u);
    ctx->pc = 0x14B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B558u;
    // 0x14b55c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x14B558u, 0x14B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B560u;
label_14b560:
    // 0x14b560: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B560u;
    {
        const bool branch_taken_0x14b560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b560) {
            ctx->pc = 0x14B584u;
            return;
        }
    }
    ctx->pc = 0x14B568u;
}
