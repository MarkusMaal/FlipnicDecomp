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

// Function: entry_00158b84
// Address: 0x158b84 - 0x158b98
void entry_00158b84_0x158b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158b84_0x158b84");
#endif

    ctx->pc = 0x158b84u;

    // 0x158b84: 0x0  nop
    ctx->pc = 0x158b84u;
    // NOP
    // 0x158b88: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x158b88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x158b8c: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x158B8Cu;
    {
        const bool branch_taken_0x158b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158b8c) {
            ctx->pc = 0x158B20u;
            return;
        }
    }
    ctx->pc = 0x158B94u;
    // 0x158b94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x158b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x158b98u;
}
