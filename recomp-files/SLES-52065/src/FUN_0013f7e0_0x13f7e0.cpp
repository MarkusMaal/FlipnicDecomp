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

// Function: FUN_0013f7e0
// Address: 0x13f7e0 - 0x13f87c
void FUN_0013f7e0_0x13f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f7e0_0x13f7e0");
#endif

    ctx->pc = 0x13f7e0u;

    // 0x13f7e0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x13f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x13f7e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13f7e8: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x13f7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x13f7ec: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x13f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13f7f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x13f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13f7f4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x13f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x13f7f8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x13f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13f7fc: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x13F7FCu;
    {
        const bool branch_taken_0x13f7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7FCu;
        // 0x13f800: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f7fc) {
            ctx->pc = 0x13F874u;
            goto label_13f874;
        }
    }
    ctx->pc = 0x13F804u;
    // 0x13f804: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13f804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13f808: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f80c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f810: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F810u;
    {
        const bool branch_taken_0x13f810 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F810u;
        // 0x13f814: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f810) {
            ctx->pc = 0x13F820u;
            goto label_13f820;
        }
    }
    ctx->pc = 0x13F818u;
    // 0x13f818: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x13f818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x13f81c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x13f81cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_13f820:
    // 0x13f820: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13f824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13f828: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x13f828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x13f82c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13f830: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x13f830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13f834: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x13f834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x13f838: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13f838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f83c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f840: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x13f840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13f844: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13f844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13f848: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f84c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F84Cu;
    {
        const bool branch_taken_0x13f84c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f84c) {
            ctx->pc = 0x13F858u;
            goto label_13f858;
        }
    }
    ctx->pc = 0x13F854u;
    // 0x13f854: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x13f854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_13f858:
    // 0x13f858: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13f858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13f85c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x13f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13f860: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13f860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f864: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13f864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f868: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x13f868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x13f86c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x13f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x13f870: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13f870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f874:
    // 0x13f874: 0x3e00008  jr          $ra
    ctx->pc = 0x13F874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F87Cu;
}
