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

// Function: entry_0016ebc4
// Address: 0x16ebc4 - 0x16ebd0
void entry_0016ebc4_0x16ebc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ebc4_0x16ebc4");
#endif

    ctx->pc = 0x16ebc4u;

    // 0x16ebc4: 0x0  nop
    ctx->pc = 0x16ebc4u;
    // NOP
    // 0x16ebc8: 0x26940090  addiu       $s4, $s4, 0x90
    ctx->pc = 0x16ebc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x16ebcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16ebccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x16ebd0u;
}
