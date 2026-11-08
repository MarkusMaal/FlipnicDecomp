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

// Function: entry_001e6190
// Address: 0x1e6190 - 0x1e61a4
void entry_001e6190_0x1e6190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6190_0x1e6190");
#endif

    ctx->pc = 0x1e6190u;

    // 0x1e6190: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e6190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6194: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6194u;
    {
        const bool branch_taken_0x1e6194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e6194) {
            ctx->pc = 0x1E61A4u;
            return;
        }
    }
    ctx->pc = 0x1E619Cu;
    // 0x1e619c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E619Cu;
    {
        const bool branch_taken_0x1e619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E619Cu;
        // 0x1e61a0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e619c) {
            ctx->pc = 0x1E61C0u;
            return;
        }
    }
    ctx->pc = 0x1E61A4u;
}
