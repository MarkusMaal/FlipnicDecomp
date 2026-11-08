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

// Function: entry_00206398
// Address: 0x206398 - 0x2063b0
void entry_00206398_0x206398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206398_0x206398");
#endif

    ctx->pc = 0x206398u;

    // 0x206398: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x206398u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20639c: 0x1012  mflo        $v0
    ctx->pc = 0x20639cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2063a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2063a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2063a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2063a8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2063a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2063ac: 0x0  nop
    ctx->pc = 0x2063acu;
    // NOP
    ctx->pc = 0x2063b0u;
}
