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

// Function: entry_0012b84c
// Address: 0x12b84c - 0x12b854
void entry_0012b84c_0x12b84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b84c_0x12b84c");
#endif

    ctx->pc = 0x12b84cu;

    // 0x12b84c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x12b84cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x12b850: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12b850u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    ctx->pc = 0x12b854u;
}
