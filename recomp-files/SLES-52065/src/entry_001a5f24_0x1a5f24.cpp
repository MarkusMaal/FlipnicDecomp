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

// Function: entry_001a5f24
// Address: 0x1a5f24 - 0x1a5f34
void entry_001a5f24_0x1a5f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5f24_0x1a5f24");
#endif

    ctx->pc = 0x1a5f24u;

    // 0x1a5f24: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5F24u;
    {
        const bool branch_taken_0x1a5f24 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1A5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F24u;
        // 0x1a5f28: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f24) {
            ctx->pc = 0x1A5F34u;
            return;
        }
    }
    ctx->pc = 0x1A5F2Cu;
    // 0x1a5f2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5F2Cu;
    {
        const bool branch_taken_0x1a5f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F2Cu;
        // 0x1a5f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f2c) {
            ctx->pc = 0x1A5F54u;
            return;
        }
    }
    ctx->pc = 0x1A5F34u;
}
