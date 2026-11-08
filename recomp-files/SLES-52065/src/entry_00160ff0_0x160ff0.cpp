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

// Function: entry_00160ff0
// Address: 0x160ff0 - 0x161004
void entry_00160ff0_0x160ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160ff0_0x160ff0");
#endif

    ctx->pc = 0x160ff0u;

    // 0x160ff0: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x160ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x160ff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160ff8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x160ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x160ffc: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x160ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x161000: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x161000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x161004u;
}
