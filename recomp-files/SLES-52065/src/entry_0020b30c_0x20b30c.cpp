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

// Function: entry_0020b30c
// Address: 0x20b30c - 0x20b318
void entry_0020b30c_0x20b30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b30c_0x20b30c");
#endif

    ctx->pc = 0x20b30cu;

    // 0x20b30c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20b310: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x20b310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x20b314: 0x0  nop
    ctx->pc = 0x20b314u;
    // NOP
    ctx->pc = 0x20b318u;
}
