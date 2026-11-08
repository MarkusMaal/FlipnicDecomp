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

// Function: entry_0018f430
// Address: 0x18f430 - 0x18f440
void entry_0018f430_0x18f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f430_0x18f430");
#endif

    ctx->pc = 0x18f430u;

    // 0x18f430: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18f430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18f434: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x18f434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18f438: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18F438u;
    {
        const bool branch_taken_0x18f438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F438u;
        // 0x18f43c: 0x25080420  addiu       $t0, $t0, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f438) {
            ctx->pc = 0x18F418u;
            return;
        }
    }
    ctx->pc = 0x18F440u;
}
