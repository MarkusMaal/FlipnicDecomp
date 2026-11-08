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

// Function: entry_001fe414
// Address: 0x1fe414 - 0x1fe428
void entry_001fe414_0x1fe414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe414_0x1fe414");
#endif

    ctx->pc = 0x1fe414u;

    // 0x1fe414: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1fe414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fe418: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1FE418u;
    {
        const bool branch_taken_0x1fe418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE418u;
        // 0x1fe41c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe418) {
            ctx->pc = 0x1FE568u;
            return;
        }
    }
    ctx->pc = 0x1FE420u;
    // 0x1fe420: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE420u;
    {
        const bool branch_taken_0x1fe420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe420) {
            ctx->pc = 0x1FE42Cu;
            return;
        }
    }
    ctx->pc = 0x1FE428u;
}
