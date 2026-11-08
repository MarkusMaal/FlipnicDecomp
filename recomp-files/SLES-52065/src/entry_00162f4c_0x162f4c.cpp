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

// Function: entry_00162f4c
// Address: 0x162f4c - 0x162f64
void entry_00162f4c_0x162f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162f4c_0x162f4c");
#endif

    ctx->pc = 0x162f4cu;

    // 0x162f4c: 0x0  nop
    ctx->pc = 0x162f4cu;
    // NOP
    // 0x162f50: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x162f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x162f54: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x162F54u;
    {
        const bool branch_taken_0x162f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x162f54) {
            ctx->pc = 0x162ECCu;
            return;
        }
    }
    ctx->pc = 0x162F5Cu;
    // 0x162f5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x162F5Cu;
    {
        const bool branch_taken_0x162f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F5Cu;
        // 0x162f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f5c) {
            ctx->pc = 0x162F84u;
            return;
        }
    }
    ctx->pc = 0x162F64u;
}
