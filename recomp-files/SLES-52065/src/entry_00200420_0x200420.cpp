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

// Function: entry_00200420
// Address: 0x200420 - 0x200448
void entry_00200420_0x200420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200420_0x200420");
#endif

    ctx->pc = 0x200420u;

label_200420:
    // 0x200420: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x200420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x200424: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x200424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x200428: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x200428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20042c: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x20042Cu;
    {
        const bool branch_taken_0x20042c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x20042c) {
            ctx->pc = 0x200430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20042Cu;
            // 0x200430: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2003FCu;
            return;
        }
    }
    ctx->pc = 0x200434u;
    // 0x200434: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x200434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x200438: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x200438u;
    {
        const bool branch_taken_0x200438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200438u;
        // 0x20043c: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200438) {
            ctx->pc = 0x200420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200420;
        }
    }
    ctx->pc = 0x200440u;
    // 0x200440: 0x3e00008  jr          $ra
    ctx->pc = 0x200440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200440u;
        // 0x200444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200448u;
}
