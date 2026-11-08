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

// Function: entry_00168e24
// Address: 0x168e24 - 0x168e34
void entry_00168e24_0x168e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168e24_0x168e24");
#endif

    ctx->pc = 0x168e24u;

    // 0x168e24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168E24u;
    {
        const bool branch_taken_0x168e24 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x168e24) {
            ctx->pc = 0x168E34u;
            return;
        }
    }
    ctx->pc = 0x168E2Cu;
    // 0x168e2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x168E2Cu;
    {
        const bool branch_taken_0x168e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E2Cu;
        // 0x168e30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e2c) {
            ctx->pc = 0x168E58u;
            return;
        }
    }
    ctx->pc = 0x168E34u;
}
