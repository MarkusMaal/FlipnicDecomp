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

// Function: entry_0019edb8
// Address: 0x19edb8 - 0x19ee6c
void entry_0019edb8_0x19edb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019edb8_0x19edb8");
#endif

    ctx->pc = 0x19edb8u;

    // 0x19edb8: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x19edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x19edbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19edc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19edc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19edc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19edc8: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x19edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x19edcc: 0xa04402f2  sb          $a0, 0x2F2($v0)
    ctx->pc = 0x19edccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 754), (uint8_t)GPR_U32(ctx, 4));
    // 0x19edd0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19edd4: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x19edd8: 0x8e85069c  lw          $a1, 0x69C($s4)
    ctx->pc = 0x19edd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
    // 0x19eddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19eddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19ede0: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19ede4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ede4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ede8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19ede8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19edec: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19edecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19edf0: 0x0  nop
    ctx->pc = 0x19edf0u;
    // NOP
    // 0x19edf4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x19edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x19edf8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x19edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19edfc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19ee00: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x19ee00u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19ee04: 0x0  nop
    ctx->pc = 0x19ee04u;
    // NOP
    // 0x19ee08: 0x0  nop
    ctx->pc = 0x19ee08u;
    // NOP
    // 0x19ee0c: 0x1012  mflo        $v0
    ctx->pc = 0x19ee0cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x19ee10: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x19ee10u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19ee14: 0xac8202e0  sw          $v0, 0x2E0($a0)
    ctx->pc = 0x19ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 2));
    // 0x19ee18: 0x0  nop
    ctx->pc = 0x19ee18u;
    // NOP
    // 0x19ee1c: 0x1010  mfhi        $v0
    ctx->pc = 0x19ee1cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19ee20: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x19ee20u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19ee24: 0x7046001a  div1        $zero, $v0, $a2
    ctx->pc = 0x19ee24u;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x19ee28: 0x0  nop
    ctx->pc = 0x19ee28u;
    // NOP
    // 0x19ee2c: 0x0  nop
    ctx->pc = 0x19ee2cu;
    // NOP
    // 0x19ee30: 0x1810  mfhi        $v1
    ctx->pc = 0x19ee30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19ee34: 0x70001012  mflo1       $v0
    ctx->pc = 0x19ee34u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x19ee38: 0xac8202e4  sw          $v0, 0x2E4($a0)
    ctx->pc = 0x19ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 2));
    // 0x19ee3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ee40: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ee44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ee48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19ee4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19ee50: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x19ee50u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19ee54: 0x0  nop
    ctx->pc = 0x19ee54u;
    // NOP
    // 0x19ee58: 0x0  nop
    ctx->pc = 0x19ee58u;
    // NOP
    // 0x19ee5c: 0x1012  mflo        $v0
    ctx->pc = 0x19ee5cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x19ee60: 0xac8202e8  sw          $v0, 0x2E8($a0)
    ctx->pc = 0x19ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 744), GPR_U32(ctx, 2));
    // 0x19ee64: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ee68: 0xac4028f0  sw          $zero, 0x28F0($v0)
    ctx->pc = 0x19ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10480), GPR_U32(ctx, 0));
    ctx->pc = 0x19ee6cu;
}
