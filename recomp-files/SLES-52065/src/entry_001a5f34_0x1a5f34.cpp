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

// Function: entry_001a5f34
// Address: 0x1a5f34 - 0x1a5f50
void entry_001a5f34_0x1a5f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5f34_0x1a5f34");
#endif

    ctx->pc = 0x1a5f34u;

    // 0x1a5f34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5f38: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1a5f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a5f3c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a5f3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a5f40: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5F40u;
    {
        const bool branch_taken_0x1a5f40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f40) {
            ctx->pc = 0x1A5F50u;
            return;
        }
    }
    ctx->pc = 0x1A5F48u;
    // 0x1a5f48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5F48u;
    {
        const bool branch_taken_0x1a5f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F48u;
        // 0x1a5f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f48) {
            ctx->pc = 0x1A5F54u;
            return;
        }
    }
    ctx->pc = 0x1A5F50u;
}
