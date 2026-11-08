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

// Function: entry_00161b70
// Address: 0x161b70 - 0x161b78
void entry_00161b70_0x161b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161b70_0x161b70");
#endif

    ctx->pc = 0x161b70u;

    // 0x161b70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161b74: 0xa203021c  sb          $v1, 0x21C($s0)
    ctx->pc = 0x161b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x161b78u;
}
