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

// Function: caseD_6
// Address: 0x1a9fc0 - 0x1a9fcc
void caseD_6_0x1a9fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1a9fc0");
#endif

    ctx->pc = 0x1a9fc0u;

    // 0x1a9fc0: 0xa2a006cc  sb          $zero, 0x6CC($s5)
    ctx->pc = 0x1a9fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1740), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a9fc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9fc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a9fccu;
}
