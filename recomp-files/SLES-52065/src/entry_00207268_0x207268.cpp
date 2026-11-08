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

// Function: entry_00207268
// Address: 0x207268 - 0x207280
void entry_00207268_0x207268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207268_0x207268");
#endif

    ctx->pc = 0x207268u;

    // 0x207268: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x207268u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20726c: 0x1012  mflo        $v0
    ctx->pc = 0x20726cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207270: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x207270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207274: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x207274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x207278: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x207278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x20727c: 0x0  nop
    ctx->pc = 0x20727cu;
    // NOP
    ctx->pc = 0x207280u;
}
