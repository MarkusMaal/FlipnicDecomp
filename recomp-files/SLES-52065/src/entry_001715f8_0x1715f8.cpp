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

// Function: entry_001715f8
// Address: 0x1715f8 - 0x171638
void entry_001715f8_0x1715f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001715f8_0x1715f8");
#endif

    ctx->pc = 0x1715f8u;

    // 0x1715f8: 0x692023  subu        $a0, $v1, $t1
    ctx->pc = 0x1715f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1715fc: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x1715fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x171600: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x171600u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x171604: 0x0  nop
    ctx->pc = 0x171604u;
    // NOP
    // 0x171608: 0x0  nop
    ctx->pc = 0x171608u;
    // NOP
    // 0x17160c: 0x2010  mfhi        $a0
    ctx->pc = 0x17160cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x171610: 0x14860009  bne         $a0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x171610u;
    {
        const bool branch_taken_0x171610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x171614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171610u;
        // 0x171614: 0x692821  addu        $a1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171610) {
            ctx->pc = 0x171638u;
            return;
        }
    }
    ctx->pc = 0x171618u;
    // 0x171618: 0x10a2021  addu        $a0, $t0, $t2
    ctx->pc = 0x171618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x17161c: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x17161cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x171620: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x171620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x171624: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x171624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x171628: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x171628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17162c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17162cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x171630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171630u;
    {
        const bool branch_taken_0x171630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171630u;
        // 0x171634: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171630) {
            ctx->pc = 0x171654u;
            return;
        }
    }
    ctx->pc = 0x171638u;
}
