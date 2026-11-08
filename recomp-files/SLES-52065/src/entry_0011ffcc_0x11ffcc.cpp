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

// Function: entry_0011ffcc
// Address: 0x11ffcc - 0x11ffd0
void entry_0011ffcc_0x11ffcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ffcc_0x11ffcc");
#endif

    ctx->pc = 0x11ffccu;

    // 0x11ffcc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x11ffd0u;
}
