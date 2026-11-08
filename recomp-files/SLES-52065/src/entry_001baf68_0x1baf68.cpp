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

// Function: entry_001baf68
// Address: 0x1baf68 - 0x1baf70
void entry_001baf68_0x1baf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baf68_0x1baf68");
#endif

    ctx->pc = 0x1baf68u;

    // 0x1baf68: 0x8ed60004  lw          $s6, 0x4($s6)
    ctx->pc = 0x1baf68u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1baf6c: 0x0  nop
    ctx->pc = 0x1baf6cu;
    // NOP
    ctx->pc = 0x1baf70u;
}
