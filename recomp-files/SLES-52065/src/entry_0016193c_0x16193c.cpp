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

// Function: entry_0016193c
// Address: 0x16193c - 0x161944
void entry_0016193c_0x16193c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016193c_0x16193c");
#endif

    ctx->pc = 0x16193cu;

    // 0x16193c: 0x0  nop
    ctx->pc = 0x16193cu;
    // NOP
    // 0x161940: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x161944u;
}
