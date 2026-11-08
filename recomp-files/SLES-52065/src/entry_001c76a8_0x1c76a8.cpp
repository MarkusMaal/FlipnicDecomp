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

// Function: entry_001c76a8
// Address: 0x1c76a8 - 0x1c76ac
void entry_001c76a8_0x1c76a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c76a8_0x1c76a8");
#endif

    ctx->pc = 0x1c76a8u;

    // 0x1c76a8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x1c76acu;
}
