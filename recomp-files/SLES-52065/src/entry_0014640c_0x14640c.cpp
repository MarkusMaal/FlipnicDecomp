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

// Function: entry_0014640c
// Address: 0x14640c - 0x146444
void entry_0014640c_0x14640c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014640c_0x14640c");
#endif

    ctx->pc = 0x14640cu;

    // 0x14640c: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x14640cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x146410: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x146410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146414: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x146414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x146418: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x146418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14641c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14641cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x146420: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x146420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x146424: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x146424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x146428: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x146428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14642c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x14642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x146430: 0x1810  mfhi        $v1
    ctx->pc = 0x146430u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x146434: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146438: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x146438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14643c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x14643cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x146440: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x146440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x146444u;
}
