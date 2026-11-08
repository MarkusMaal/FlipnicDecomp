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

// Function: entry_001fe568
// Address: 0x1fe568 - 0x1fe578
void entry_001fe568_0x1fe568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe568_0x1fe568");
#endif

    ctx->pc = 0x1fe568u;

    // 0x1fe568: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1FE568u;
    {
        const bool branch_taken_0x1fe568 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe568) {
            ctx->pc = 0x1FE594u;
            return;
        }
    }
    ctx->pc = 0x1FE570u;
    // 0x1fe570: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1fe570u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe574: 0x0  nop
    ctx->pc = 0x1fe574u;
    // NOP
    ctx->pc = 0x1fe578u;
}
