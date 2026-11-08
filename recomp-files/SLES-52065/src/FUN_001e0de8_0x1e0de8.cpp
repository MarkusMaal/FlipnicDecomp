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

// Function: FUN_001e0de8
// Address: 0x1e0de8 - 0x1e0e24
void FUN_001e0de8_0x1e0de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0de8_0x1e0de8");
#endif

    ctx->pc = 0x1e0de8u;

    // 0x1e0de8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dec: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0DECu;
    {
        const bool branch_taken_0x1e0dec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1E0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DECu;
        // 0x1e0df0: 0x28830008  slti        $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0dec) {
            ctx->pc = 0x1E0E1Cu;
            goto label_1e0e1c;
        }
    }
    ctx->pc = 0x1E0DF4u;
    // 0x1e0df4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0DF4u;
    {
        const bool branch_taken_0x1e0df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DF4u;
        // 0x1e0df8: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0df4) {
            ctx->pc = 0x1E0E1Cu;
            goto label_1e0e1c;
        }
    }
    ctx->pc = 0x1E0DFCu;
    // 0x1e0dfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e0e00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e0e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e0e04: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e0e08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e0e0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e0e10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0e14: 0x8c42b340  lw          $v0, -0x4CC0($v0)
    ctx->pc = 0x1e0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947648)));
    // 0x1e0e18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e0e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e0e1c:
    // 0x1e0e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0E24u;
}
