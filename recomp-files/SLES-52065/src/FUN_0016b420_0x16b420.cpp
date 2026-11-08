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

// Function: FUN_0016b420
// Address: 0x16b420 - 0x16b46c
void FUN_0016b420_0x16b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016b420_0x16b420");
#endif

    switch (ctx->pc) {
        case 0x16b434u: goto label_16b434;
        default: break;
    }

    ctx->pc = 0x16b420u;

    // 0x16b420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b42c: 0xc0563fc  jal         func_158FF0
    ctx->pc = 0x16B42Cu;
    SET_GPR_U32(ctx, 31, 0x16B434u);
    ctx->pc = 0x16B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B42Cu;
    // 0x16b430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158FF0u, 0x16B42Cu, 0x16B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B434u;
label_16b434:
    // 0x16b434: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B434u;
    {
        const bool branch_taken_0x16b434 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16b434) {
            ctx->pc = 0x16B44Cu;
            goto label_16b44c;
        }
    }
    ctx->pc = 0x16B43Cu;
    // 0x16b43c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x16b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x16b440: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B440u;
    {
        const bool branch_taken_0x16b440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b440) {
            ctx->pc = 0x16B44Cu;
            goto label_16b44c;
        }
    }
    ctx->pc = 0x16B448u;
    // 0x16b448: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x16b448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
label_16b44c:
    // 0x16b44c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x16b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x16b450: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B450u;
    {
        const bool branch_taken_0x16b450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b450) {
            ctx->pc = 0x16B45Cu;
            goto label_16b45c;
        }
    }
    ctx->pc = 0x16B458u;
    // 0x16b458: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16b45c:
    // 0x16b45c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b464: 0x3e00008  jr          $ra
    ctx->pc = 0x16B464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B464u;
        // 0x16b468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B46Cu;
}
