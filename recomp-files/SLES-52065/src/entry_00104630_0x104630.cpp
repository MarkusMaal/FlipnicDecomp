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

// Function: entry_00104630
// Address: 0x104630 - 0x10466c
void entry_00104630_0x104630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104630_0x104630");
#endif

    switch (ctx->pc) {
        case 0x104638u: goto label_104638;
        case 0x104648u: goto label_104648;
        default: break;
    }

    ctx->pc = 0x104630u;

    // 0x104630: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104630u;
    SET_GPR_U32(ctx, 31, 0x104638u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104630u, 0x104638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104638u;
label_104638:
    // 0x104638: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104638u;
    {
        const bool branch_taken_0x104638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104638u;
        // 0x10463c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104638) {
            ctx->pc = 0x10466Cu;
            return;
        }
    }
    ctx->pc = 0x104640u;
    // 0x104640: 0xc04161c  jal         func_105870
    ctx->pc = 0x104640u;
    SET_GPR_U32(ctx, 31, 0x104648u);
    ctx->pc = 0x104644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104640u;
    // 0x104644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105870u, 0x104640u, 0x104648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104648u;
label_104648:
    // 0x104648: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10464c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10464cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104650: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x104650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x104654: 0x2463a3d0  addiu       $v1, $v1, -0x5C30
    ctx->pc = 0x104654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943696));
    // 0x104658: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10465c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104660: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104664: 0x2442a370  addiu       $v0, $v0, -0x5C90
    ctx->pc = 0x104664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943600));
    // 0x104668: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10466cu;
}
