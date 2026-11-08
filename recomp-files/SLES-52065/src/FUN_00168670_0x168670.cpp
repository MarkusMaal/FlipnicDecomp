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

// Function: FUN_00168670
// Address: 0x168670 - 0x1686ac
void FUN_00168670_0x168670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168670_0x168670");
#endif

    switch (ctx->pc) {
        case 0x168684u: goto label_168684;
        case 0x168694u: goto label_168694;
        default: break;
    }

    ctx->pc = 0x168670u;

    // 0x168670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16867c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x16867Cu;
    SET_GPR_U32(ctx, 31, 0x168684u);
    ctx->pc = 0x168680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16867Cu;
    // 0x168680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16867Cu, 0x168684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168684u;
label_168684:
    // 0x168684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168688: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16868c: 0xc042570  jal         func_1095C0
    ctx->pc = 0x16868Cu;
    SET_GPR_U32(ctx, 31, 0x168694u);
    ctx->pc = 0x168690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16868Cu;
    // 0x168690: 0xa20001d0  sb          $zero, 0x1D0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x16868Cu, 0x168694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168694u;
label_168694:
    // 0x168694: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x168694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x168698: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x168698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x16869c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16869cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1686a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1686a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1686a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1686A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1686A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686A4u;
        // 0x1686a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1686A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1686ACu;
}
