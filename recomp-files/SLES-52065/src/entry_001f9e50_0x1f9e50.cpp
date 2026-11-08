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

// Function: entry_001f9e50
// Address: 0x1f9e50 - 0x1f9e68
void entry_001f9e50_0x1f9e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9e50_0x1f9e50");
#endif

    ctx->pc = 0x1f9e50u;

    // 0x1f9e50: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F9E50u;
    {
        const bool branch_taken_0x1f9e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E50u;
        // 0x1f9e54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e50) {
            ctx->pc = 0x1F9E90u;
            return;
        }
    }
    ctx->pc = 0x1F9E58u;
    // 0x1f9e58: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F9E58u;
    {
        const bool branch_taken_0x1f9e58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E58u;
        // 0x1f9e5c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e58) {
            ctx->pc = 0x1F9EA4u;
            return;
        }
    }
    ctx->pc = 0x1F9E60u;
    // 0x1f9e60: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1F9E60u;
    {
        const bool branch_taken_0x1f9e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e60) {
            ctx->pc = 0x1F9F30u;
            return;
        }
    }
    ctx->pc = 0x1F9E68u;
}
