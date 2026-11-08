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

// Function: entry_00161b10
// Address: 0x161b10 - 0x161b14
void entry_00161b10_0x161b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161b10_0x161b10");
#endif

    ctx->pc = 0x161b10u;

    // 0x161b10: 0xa203021c  sb          $v1, 0x21C($s0)
    ctx->pc = 0x161b10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x161b14u;
}
