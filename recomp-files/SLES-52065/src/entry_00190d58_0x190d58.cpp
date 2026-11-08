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

// Function: entry_00190d58
// Address: 0x190d58 - 0x190d84
void entry_00190d58_0x190d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190d58_0x190d58");
#endif

    ctx->pc = 0x190d58u;

    // 0x190d58: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x190d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x190d5c: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x190d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
    // 0x190d60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x190d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x190d64: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x190d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
    // 0x190d68: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190d68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190d6c: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x190d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
    // 0x190d70: 0x29030010  slti        $v1, $t0, 0x10
    ctx->pc = 0x190d70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x190d74: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x190D74u;
    {
        const bool branch_taken_0x190d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D74u;
        // 0x190d78: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d74) {
            ctx->pc = 0x190D1Cu;
            return;
        }
    }
    ctx->pc = 0x190D7Cu;
    // 0x190d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x190D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190D84u;
}
