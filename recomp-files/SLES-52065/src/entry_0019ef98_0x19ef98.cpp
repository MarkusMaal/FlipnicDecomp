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

// Function: entry_0019ef98
// Address: 0x19ef98 - 0x19f034
void entry_0019ef98_0x19ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef98_0x19ef98");
#endif

    ctx->pc = 0x19ef98u;

    // 0x19ef98: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ef9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19efa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19efa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19efa4: 0x8e83069c  lw          $v1, 0x69C($s4)
    ctx->pc = 0x19efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
    // 0x19efa8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x19efac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19efacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19efb0: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19efb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19efb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19efb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19efb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19efb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19efbc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x19efbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x19efc0: 0x0  nop
    ctx->pc = 0x19efc0u;
    // NOP
    // 0x19efc4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x19efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x19efc8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x19efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19efcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19efccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19efd0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19efd0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19efd4: 0x0  nop
    ctx->pc = 0x19efd4u;
    // NOP
    // 0x19efd8: 0x0  nop
    ctx->pc = 0x19efd8u;
    // NOP
    // 0x19efdc: 0x3012  mflo        $a2
    ctx->pc = 0x19efdcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x19efe0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19efe0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19efe4: 0xac8602e0  sw          $a2, 0x2E0($a0)
    ctx->pc = 0x19efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 6));
    // 0x19efe8: 0x0  nop
    ctx->pc = 0x19efe8u;
    // NOP
    // 0x19efec: 0x1010  mfhi        $v0
    ctx->pc = 0x19efecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19eff0: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x19eff0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19eff4: 0x7045001a  div1        $zero, $v0, $a1
    ctx->pc = 0x19eff4u;
    { int32_t divisor = GPR_S32(ctx, 5); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x19eff8: 0x0  nop
    ctx->pc = 0x19eff8u;
    // NOP
    // 0x19effc: 0x0  nop
    ctx->pc = 0x19effcu;
    // NOP
    // 0x19f000: 0x1810  mfhi        $v1
    ctx->pc = 0x19f000u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19f004: 0x70001012  mflo1       $v0
    ctx->pc = 0x19f004u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x19f008: 0xac8202e4  sw          $v0, 0x2E4($a0)
    ctx->pc = 0x19f008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 2));
    // 0x19f00c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f010: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f014: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f018: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19f018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f01c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f020: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x19f020u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19f024: 0x0  nop
    ctx->pc = 0x19f024u;
    // NOP
    // 0x19f028: 0x0  nop
    ctx->pc = 0x19f028u;
    // NOP
    // 0x19f02c: 0x1012  mflo        $v0
    ctx->pc = 0x19f02cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x19f030: 0xac8202e8  sw          $v0, 0x2E8($a0)
    ctx->pc = 0x19f030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 744), GPR_U32(ctx, 2));
    ctx->pc = 0x19f034u;
}
