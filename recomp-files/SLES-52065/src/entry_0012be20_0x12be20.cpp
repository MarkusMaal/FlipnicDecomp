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

// Function: entry_0012be20
// Address: 0x12be20 - 0x12be4c
void entry_0012be20_0x12be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012be20_0x12be20");
#endif

    ctx->pc = 0x12be20u;

    // 0x12be20: 0x692823  subu        $a1, $v1, $t1
    ctx->pc = 0x12be20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x12be24: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12be28: 0xaa001a  div         $zero, $a1, $t2
    ctx->pc = 0x12be28u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12be2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x12be2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x12be30: 0x0  nop
    ctx->pc = 0x12be30u;
    // NOP
    // 0x12be34: 0x2810  mfhi        $a1
    ctx->pc = 0x12be34u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x12be38: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x12be38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12be3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12be40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12be44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12be44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12be48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12be48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x12be4cu;
}
