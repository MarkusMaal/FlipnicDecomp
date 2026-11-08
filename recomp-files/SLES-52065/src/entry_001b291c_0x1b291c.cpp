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

// Function: entry_001b291c
// Address: 0x1b291c - 0x1b2938
void entry_001b291c_0x1b291c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b291c_0x1b291c");
#endif

    ctx->pc = 0x1b291cu;

    // 0x1b291c: 0xf1001a  div         $zero, $a3, $s1
    ctx->pc = 0x1b291cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b2920: 0x0  nop
    ctx->pc = 0x1b2920u;
    // NOP
    // 0x1b2924: 0x0  nop
    ctx->pc = 0x1b2924u;
    // NOP
    // 0x1b2928: 0x1012  mflo        $v0
    ctx->pc = 0x1b2928u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b292c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1b292cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b2930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2930u;
    {
        const bool branch_taken_0x1b2930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2930u;
        // 0x1b2934: 0xc24823  subu        $t1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2930) {
            ctx->pc = 0x1B293Cu;
            return;
        }
    }
    ctx->pc = 0x1B2938u;
}
