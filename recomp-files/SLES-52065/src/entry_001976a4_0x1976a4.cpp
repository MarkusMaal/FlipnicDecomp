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

// Function: entry_001976a4
// Address: 0x1976a4 - 0x1976b8
void entry_001976a4_0x1976a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001976a4_0x1976a4");
#endif

    ctx->pc = 0x1976a4u;

    // 0x1976a4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1976a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1976a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1976a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1976ac: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1976ACu;
    {
        const bool branch_taken_0x1976ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976ACu;
        // 0x1976b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976ac) {
            ctx->pc = 0x197760u;
            return;
        }
    }
    ctx->pc = 0x1976B4u;
    // 0x1976b4: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x1976b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->pc = 0x1976b8u;
}
