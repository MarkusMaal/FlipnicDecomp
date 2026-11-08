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

// Function: entry_0013a0dc
// Address: 0x13a0dc - 0x13a0f4
void entry_0013a0dc_0x13a0dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a0dc_0x13a0dc");
#endif

    ctx->pc = 0x13a0dcu;

    // 0x13a0dc: 0x0  nop
    ctx->pc = 0x13a0dcu;
    // NOP
    // 0x13a0e0: 0x12b382b  sltu        $a3, $t1, $t3
    ctx->pc = 0x13a0e0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x13a0e4: 0x14e0ffe7  bnez        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x13A0E4u;
    {
        const bool branch_taken_0x13a0e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a0e4) {
            ctx->pc = 0x13A084u;
            return;
        }
    }
    ctx->pc = 0x13A0ECu;
    // 0x13a0ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13a0f0: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x13a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    ctx->pc = 0x13a0f4u;
}
