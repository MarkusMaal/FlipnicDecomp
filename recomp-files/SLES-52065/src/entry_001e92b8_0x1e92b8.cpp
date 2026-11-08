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

// Function: entry_001e92b8
// Address: 0x1e92b8 - 0x1e92bc
void entry_001e92b8_0x1e92b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e92b8_0x1e92b8");
#endif

    ctx->pc = 0x1e92b8u;

    // 0x1e92b8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e92b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1e92bcu;
}
