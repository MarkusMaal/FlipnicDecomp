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

// Function: entry_001bb49c
// Address: 0x1bb49c - 0x1bb4ac
void entry_001bb49c_0x1bb49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb49c_0x1bb49c");
#endif

    ctx->pc = 0x1bb49cu;

    // 0x1bb49c: 0x0  nop
    ctx->pc = 0x1bb49cu;
    // NOP
    // 0x1bb4a0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bb4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb4a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb4acu;
}
