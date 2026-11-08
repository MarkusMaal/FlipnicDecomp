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

// Function: entry_0015ef3c
// Address: 0x15ef3c - 0x15ef48
void entry_0015ef3c_0x15ef3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ef3c_0x15ef3c");
#endif

    ctx->pc = 0x15ef3cu;

    // 0x15ef3c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15ef40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15ef40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15ef44: 0xac602ca8  sw          $zero, 0x2CA8($v1)
    ctx->pc = 0x15ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11432), GPR_U32(ctx, 0));
    ctx->pc = 0x15ef48u;
}
