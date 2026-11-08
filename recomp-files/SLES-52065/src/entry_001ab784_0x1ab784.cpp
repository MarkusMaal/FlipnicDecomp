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

// Function: entry_001ab784
// Address: 0x1ab784 - 0x1ab78c
void entry_001ab784_0x1ab784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab784_0x1ab784");
#endif

    ctx->pc = 0x1ab784u;

    // 0x1ab784: 0x8e830800  lw          $v1, 0x800($s4)
    ctx->pc = 0x1ab784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2048)));
    // 0x1ab788: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ab788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ab78cu;
}
