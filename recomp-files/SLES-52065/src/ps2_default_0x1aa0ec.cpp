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

// Function: default
// Address: 0x1aa0ec - 0x1aa0f0
void ps2_default_0x1aa0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1aa0ec");
#endif

    ctx->pc = 0x1aa0ecu;

    // 0x1aa0ec: 0x92a306cc  lbu         $v1, 0x6CC($s5)
    ctx->pc = 0x1aa0ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1740)));
    ctx->pc = 0x1aa0f0u;
}
