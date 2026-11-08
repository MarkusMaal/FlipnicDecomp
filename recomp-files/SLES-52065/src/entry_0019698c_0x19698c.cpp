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

// Function: entry_0019698c
// Address: 0x19698c - 0x1969a0
void entry_0019698c_0x19698c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019698c_0x19698c");
#endif

    ctx->pc = 0x19698cu;

    // 0x19698c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19698cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196990: 0x8e430490  lw          $v1, 0x490($s2)
    ctx->pc = 0x196990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
    // 0x196994: 0x26510490  addiu       $s1, $s2, 0x490
    ctx->pc = 0x196994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x196998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19699c: 0x2465002c  addiu       $a1, $v1, 0x2C
    ctx->pc = 0x19699cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    ctx->pc = 0x1969a0u;
}
