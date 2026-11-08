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

// Function: entry_001f9eb8
// Address: 0x1f9eb8 - 0x1f9ed8
void entry_001f9eb8_0x1f9eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9eb8_0x1f9eb8");
#endif

    ctx->pc = 0x1f9eb8u;

    // 0x1f9eb8: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9EB8u;
    {
        const bool branch_taken_0x1f9eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EB8u;
        // 0x1f9ebc: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9eb8) {
            ctx->pc = 0x1F9EFCu;
            return;
        }
    }
    ctx->pc = 0x1F9EC0u;
    // 0x1f9ec0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9EC0u;
    {
        const bool branch_taken_0x1f9ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EC0u;
        // 0x1f9ec4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ec0) {
            ctx->pc = 0x1F9ED8u;
            return;
        }
    }
    ctx->pc = 0x1F9EC8u;
    // 0x1f9ec8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9EC8u;
    {
        const bool branch_taken_0x1f9ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EC8u;
        // 0x1f9ecc: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ec8) {
            ctx->pc = 0x1F9EF0u;
            return;
        }
    }
    ctx->pc = 0x1F9ED0u;
    // 0x1f9ed0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F9ED0u;
    {
        const bool branch_taken_0x1f9ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ed0) {
            ctx->pc = 0x1F9F30u;
            return;
        }
    }
    ctx->pc = 0x1F9ED8u;
}
