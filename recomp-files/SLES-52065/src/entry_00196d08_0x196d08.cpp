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

// Function: entry_00196d08
// Address: 0x196d08 - 0x196d10
void entry_00196d08_0x196d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196d08_0x196d08");
#endif

    ctx->pc = 0x196d08u;

    // 0x196d08: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x196d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x196d0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x196d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x196d10u;
}
