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

// Function: entry_001e7ebc
// Address: 0x1e7ebc - 0x1e7ec4
void entry_001e7ebc_0x1e7ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7ebc_0x1e7ebc");
#endif

    ctx->pc = 0x1e7ebcu;

    // 0x1e7ebc: 0x0  nop
    ctx->pc = 0x1e7ebcu;
    // NOP
    // 0x1e7ec0: 0x3454aaaa  ori         $s4, $v0, 0xAAAA
    ctx->pc = 0x1e7ec0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43690);
    ctx->pc = 0x1e7ec4u;
}
