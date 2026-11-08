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

// Function: entry_0012bfe8
// Address: 0x12bfe8 - 0x12c01c
void entry_0012bfe8_0x12bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bfe8_0x12bfe8");
#endif

    ctx->pc = 0x12bfe8u;

    // 0x12bfe8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x12bfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12bfec: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x12bfecu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bff0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12bff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12bff4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x12bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12bff8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x12bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12bffc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x12bffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12c000: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x12c000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x12c004: 0x1010  mfhi        $v0
    ctx->pc = 0x12c004u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12c008: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12c008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12c00c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12c010: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12c010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c014: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12c014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12c018: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12c018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x12c01cu;
}
