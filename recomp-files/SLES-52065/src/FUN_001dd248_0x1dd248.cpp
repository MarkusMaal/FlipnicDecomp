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

// Function: FUN_001dd248
// Address: 0x1dd248 - 0x1dd280
void FUN_001dd248_0x1dd248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd248_0x1dd248");
#endif

    ctx->pc = 0x1dd248u;

    // 0x1dd248: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1dd248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dd24c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dd250: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1dd250u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd254: 0x24427330  addiu       $v0, $v0, 0x7330
    ctx->pc = 0x1dd254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1dd258: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd25c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd260: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd264: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1dd264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd268: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x1dd268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x1dd26c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dd26cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd270: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd274: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1dd274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1dd278: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD278u;
        // 0x1dd27c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD280u;
}
