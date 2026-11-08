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

// Function: entry_00117130
// Address: 0x117130 - 0x117134
void entry_00117130_0x117130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117130_0x117130");
#endif

    ctx->pc = 0x117130u;

    // 0x117130: 0x2484ffe1  addiu       $a0, $a0, -0x1F
    ctx->pc = 0x117130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967265));
    ctx->pc = 0x117134u;
}
