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

// Function: FUN_001b4400
// Address: 0x1b4400 - 0x1b445c
void FUN_001b4400_0x1b4400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4400_0x1b4400");
#endif

    ctx->pc = 0x1b4400u;

    // 0x1b4400: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1b4400u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b4404: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1b4404u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b4408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b440c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x1b440cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x1b4410: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x1b4410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1b4414: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x1b4414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x1b4418: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1b4418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1b441c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1b441cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1b4420: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x1b4420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x1b4424: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1b4424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b4428: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1b4428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b442c: 0x9ce60000  lwu         $a2, 0x0($a3)
    ctx->pc = 0x1b442cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b4430: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x1b4430u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x1b4434: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x1b4434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x1b4438: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1b4438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1b443c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1b443cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1b4440: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1b4440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b4444: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x1b4444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1b4448: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1b4448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1b444c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b444cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4450: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1b4450u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1b4454: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4454u;
        // 0x1b4458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B445Cu;
}
