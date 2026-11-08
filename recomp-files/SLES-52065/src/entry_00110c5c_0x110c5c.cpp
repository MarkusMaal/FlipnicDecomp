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

// Function: entry_00110c5c
// Address: 0x110c5c - 0x110c64
void entry_00110c5c_0x110c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110c5c_0x110c5c");
#endif

    ctx->pc = 0x110c5cu;

    // 0x110c5c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x110c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x110c60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x110c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x110c64u;
}
