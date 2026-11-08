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

// Function: entry_001dd5b4
// Address: 0x1dd5b4 - 0x1dd5c8
void entry_001dd5b4_0x1dd5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd5b4_0x1dd5b4");
#endif

    ctx->pc = 0x1dd5b4u;

    // 0x1dd5b4: 0x2812  mflo        $a1
    ctx->pc = 0x1dd5b4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1dd5b8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1dd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1dd5bc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1dd5bcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dd5c0: 0x2012  mflo        $a0
    ctx->pc = 0x1dd5c0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1dd5c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dd5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1dd5c8u;
}
