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

// Function: entry_0011ac18
// Address: 0x11ac18 - 0x11ac20
void entry_0011ac18_0x11ac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ac18_0x11ac18");
#endif

    ctx->pc = 0x11ac18u;

    // 0x11ac18: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x11ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11ac1c: 0xae220534  sw          $v0, 0x534($s1)
    ctx->pc = 0x11ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1332), GPR_U32(ctx, 2));
    ctx->pc = 0x11ac20u;
}
