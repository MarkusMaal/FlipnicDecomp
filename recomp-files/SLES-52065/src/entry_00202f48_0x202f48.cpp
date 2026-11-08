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

// Function: entry_00202f48
// Address: 0x202f48 - 0x202f5c
void entry_00202f48_0x202f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202f48_0x202f48");
#endif

    ctx->pc = 0x202f48u;

    // 0x202f48: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x202f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x202f4c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x202f4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f54: 0x69023  negu        $s2, $a2
    ctx->pc = 0x202f54u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x202f58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x202f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202f5cu;
}
