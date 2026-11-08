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

// Function: entry_0019107c
// Address: 0x19107c - 0x19108c
void entry_0019107c_0x19107c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019107c_0x19107c");
#endif

    ctx->pc = 0x19107cu;

    // 0x19107c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19107cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191084: 0x8f8885f4  lw          $t0, -0x7A0C($gp)
    ctx->pc = 0x191084u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191088: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x191088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x19108cu;
}
