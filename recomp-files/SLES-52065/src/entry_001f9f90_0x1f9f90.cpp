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

// Function: entry_001f9f90
// Address: 0x1f9f90 - 0x1f9fb0
void entry_001f9f90_0x1f9f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9f90_0x1f9f90");
#endif

    ctx->pc = 0x1f9f90u;

    // 0x1f9f90: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9F90u;
    {
        const bool branch_taken_0x1f9f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F90u;
        // 0x1f9f94: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f90) {
            ctx->pc = 0x1F9FC0u;
            return;
        }
    }
    ctx->pc = 0x1F9F98u;
    // 0x1f9f98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9F98u;
    {
        const bool branch_taken_0x1f9f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9f98) {
            ctx->pc = 0x1F9F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9F98u;
            // 0x1f9f9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9FB0u;
            return;
        }
    }
    ctx->pc = 0x1F9FA0u;
    // 0x1f9fa0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9FA0u;
    {
        const bool branch_taken_0x1f9fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fa0) {
            ctx->pc = 0x1F9FC8u;
            return;
        }
    }
    ctx->pc = 0x1F9FA8u;
    // 0x1f9fa8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F9FA8u;
    {
        const bool branch_taken_0x1f9fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fa8) {
            ctx->pc = 0x1F9FFCu;
            return;
        }
    }
    ctx->pc = 0x1F9FB0u;
}
