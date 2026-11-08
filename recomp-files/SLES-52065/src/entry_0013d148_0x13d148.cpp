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

// Function: entry_0013d148
// Address: 0x13d148 - 0x13d150
void entry_0013d148_0x13d148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d148_0x13d148");
#endif

    ctx->pc = 0x13d148u;

    // 0x13d148: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x13d148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x13d14c: 0x0  nop
    ctx->pc = 0x13d14cu;
    // NOP
    ctx->pc = 0x13d150u;
}
