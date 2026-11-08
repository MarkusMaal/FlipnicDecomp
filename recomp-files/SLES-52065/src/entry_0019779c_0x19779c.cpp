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

// Function: entry_0019779c
// Address: 0x19779c - 0x1977b0
void entry_0019779c_0x19779c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019779c_0x19779c");
#endif

    ctx->pc = 0x19779cu;

    // 0x19779c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19779cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1977a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1977a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1977a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1977a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1977a8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1977a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1977ac: 0x0  nop
    ctx->pc = 0x1977acu;
    // NOP
    ctx->pc = 0x1977b0u;
}
