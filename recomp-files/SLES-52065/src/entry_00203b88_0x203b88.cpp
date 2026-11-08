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

// Function: entry_00203b88
// Address: 0x203b88 - 0x203b90
void entry_00203b88_0x203b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203b88_0x203b88");
#endif

    ctx->pc = 0x203b88u;

    // 0x203b88: 0x8fb301ec  lw          $s3, 0x1EC($sp)
    ctx->pc = 0x203b88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203b8c: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x203b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->pc = 0x203b90u;
}
