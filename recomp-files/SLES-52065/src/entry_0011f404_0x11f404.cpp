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

// Function: entry_0011f404
// Address: 0x11f404 - 0x11f410
void entry_0011f404_0x11f404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f404_0x11f404");
#endif

    ctx->pc = 0x11f404u;

    // 0x11f404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f40c: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x11f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    ctx->pc = 0x11f410u;
}
