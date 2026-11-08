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

// Function: entry_001de85c
// Address: 0x1de85c - 0x1de88c
void entry_001de85c_0x1de85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de85c_0x1de85c");
#endif

    ctx->pc = 0x1de85cu;

    // 0x1de85c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de85cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de860: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1de860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de864: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1de864u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de868: 0x77001a  div         $zero, $v1, $s7
    ctx->pc = 0x1de868u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1de86c: 0x1010  mfhi        $v0
    ctx->pc = 0x1de86cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1de870: 0x1812  mflo        $v1
    ctx->pc = 0x1de870u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1de874: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1de874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de878: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x1de878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de87c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1de87cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1de880: 0x1012  mflo        $v0
    ctx->pc = 0x1de880u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1de884: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1de884u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de888: 0x31020200  andi        $v0, $t0, 0x200
    ctx->pc = 0x1de888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)512);
    ctx->pc = 0x1de88cu;
}
