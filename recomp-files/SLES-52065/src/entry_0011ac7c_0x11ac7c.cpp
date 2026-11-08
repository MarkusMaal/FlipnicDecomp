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

// Function: entry_0011ac7c
// Address: 0x11ac7c - 0x11ac84
void entry_0011ac7c_0x11ac7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ac7c_0x11ac7c");
#endif

    ctx->pc = 0x11ac7cu;

    // 0x11ac7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ac80: 0xae220538  sw          $v0, 0x538($s1)
    ctx->pc = 0x11ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1336), GPR_U32(ctx, 2));
    ctx->pc = 0x11ac84u;
}
