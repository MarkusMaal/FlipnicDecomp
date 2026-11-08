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

// Function: entry_00128f68
// Address: 0x128f68 - 0x128f78
void entry_00128f68_0x128f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128f68_0x128f68");
#endif

    ctx->pc = 0x128f68u;

    // 0x128f68: 0xac860110  sw          $a2, 0x110($a0)
    ctx->pc = 0x128f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 6));
    // 0x128f6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x128f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x128f70: 0xac860114  sw          $a2, 0x114($a0)
    ctx->pc = 0x128f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 6));
    // 0x128f74: 0xac8300a0  sw          $v1, 0xA0($a0)
    ctx->pc = 0x128f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
    ctx->pc = 0x128f78u;
}
