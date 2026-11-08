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

// Function: entry_001dd37c
// Address: 0x1dd37c - 0x1dd3a4
void entry_001dd37c_0x1dd37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd37c_0x1dd37c");
#endif

    ctx->pc = 0x1dd37cu;

    // 0x1dd37c: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x1dd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1dd380: 0x24e47330  addiu       $a0, $a3, 0x7330
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 29488));
    // 0x1dd384: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd388: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1dd388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dd38c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd390: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd394: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dd394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd398: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1dd398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1dd39c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD39Cu;
        // 0x1dd3a0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3A4u;
}
