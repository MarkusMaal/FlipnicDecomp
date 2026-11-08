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

// Function: entry_0017644c
// Address: 0x17644c - 0x176454
void entry_0017644c_0x17644c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017644c_0x17644c");
#endif

    ctx->pc = 0x17644cu;

    // 0x17644c: 0x0  nop
    ctx->pc = 0x17644cu;
    // NOP
    // 0x176450: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x176450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x176454u;
}
