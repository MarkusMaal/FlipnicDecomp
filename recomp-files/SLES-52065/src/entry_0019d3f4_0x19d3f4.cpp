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

// Function: entry_0019d3f4
// Address: 0x19d3f4 - 0x19d400
void entry_0019d3f4_0x19d3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d3f4_0x19d3f4");
#endif

    ctx->pc = 0x19d3f4u;

    // 0x19d3f4: 0x0  nop
    ctx->pc = 0x19d3f4u;
    // NOP
    // 0x19d3f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19d3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19d3fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19d3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x19d400u;
}
