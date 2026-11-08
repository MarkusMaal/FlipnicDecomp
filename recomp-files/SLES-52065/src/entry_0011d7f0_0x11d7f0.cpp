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

// Function: entry_0011d7f0
// Address: 0x11d7f0 - 0x11d864
void entry_0011d7f0_0x11d7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d7f0_0x11d7f0");
#endif

    switch (ctx->pc) {
        case 0x11d804u: goto label_11d804;
        case 0x11d820u: goto label_11d820;
        default: break;
    }

    ctx->pc = 0x11d7f0u;

    // 0x11d7f0: 0x8e620524  lw          $v0, 0x524($s3)
    ctx->pc = 0x11d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1316)));
    // 0x11d7f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7f8: 0x27a60370  addiu       $a2, $sp, 0x370
    ctx->pc = 0x11d7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x11d7fc: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11D7FCu;
    SET_GPR_U32(ctx, 31, 0x11D804u);
    ctx->pc = 0x11D800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7FCu;
    // 0x11d800: 0x552821  addu        $a1, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11D7FCu, 0x11D804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D804u;
label_11d804:
    // 0x11d804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d808: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x11D808u;
    {
        const bool branch_taken_0x11d808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D808u;
        // 0x11d80c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d808) {
            ctx->pc = 0x11D864u;
            return;
        }
    }
    ctx->pc = 0x11D810u;
    // 0x11d810: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d818: 0xc047798  jal         func_11DE60
    ctx->pc = 0x11D818u;
    SET_GPR_U32(ctx, 31, 0x11D820u);
    ctx->pc = 0x11D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D818u;
    // 0x11d81c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE60u, 0x11D818u, 0x11D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D820u;
label_11d820:
    // 0x11d820: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x11d820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x11d824: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x11d824u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x11d828: 0x8e630524  lw          $v1, 0x524($s3)
    ctx->pc = 0x11d828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1316)));
    // 0x11d82c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11d82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d830: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11d830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d834: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x11d834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x11d838: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x11d838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x11d83c: 0x8e630524  lw          $v1, 0x524($s3)
    ctx->pc = 0x11d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1316)));
    // 0x11d840: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11d840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d844: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x11d844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x11d848: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x11d848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x11d84c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d850: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x11d850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x11d854: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x11d854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x11d858: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x11d858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x11d85c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11D85Cu;
    {
        const bool branch_taken_0x11d85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D85Cu;
        // 0x11d860: 0xac43008c  sw          $v1, 0x8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d85c) {
            ctx->pc = 0x11D870u;
            return;
        }
    }
    ctx->pc = 0x11D864u;
}
