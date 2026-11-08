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

// Function: entry_00173b00
// Address: 0x173b00 - 0x173b04
void entry_00173b00_0x173b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173b00_0x173b00");
#endif

    ctx->pc = 0x173b00u;

    // 0x173b00: 0xa3828614  sb          $v0, -0x79EC($gp)
    ctx->pc = 0x173b00u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936084), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x173b04u;
}
