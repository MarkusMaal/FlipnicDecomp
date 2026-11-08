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

// Function: entry_001f9ed8
// Address: 0x1f9ed8 - 0x1f9ef0
void entry_001f9ed8_0x1f9ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9ed8_0x1f9ed8");
#endif

    ctx->pc = 0x1f9ed8u;

    // 0x1f9ed8: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9ED8u;
    {
        const bool branch_taken_0x1f9ed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9ED8u;
        // 0x1f9edc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ed8) {
            ctx->pc = 0x1F9F08u;
            return;
        }
    }
    ctx->pc = 0x1F9EE0u;
    // 0x1f9ee0: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F9EE0u;
    {
        const bool branch_taken_0x1f9ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EE0u;
        // 0x1f9ee4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ee0) {
            ctx->pc = 0x1F9F1Cu;
            return;
        }
    }
    ctx->pc = 0x1F9EE8u;
    // 0x1f9ee8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F9EE8u;
    {
        const bool branch_taken_0x1f9ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ee8) {
            ctx->pc = 0x1F9F30u;
            return;
        }
    }
    ctx->pc = 0x1F9EF0u;
}
