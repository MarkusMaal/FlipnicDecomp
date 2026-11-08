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

// Function: entry_001bdfd8
// Address: 0x1bdfd8 - 0x1bdfdc
void entry_001bdfd8_0x1bdfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdfd8_0x1bdfd8");
#endif

    ctx->pc = 0x1bdfd8u;

    // 0x1bdfd8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1bdfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x1bdfdcu;
}
