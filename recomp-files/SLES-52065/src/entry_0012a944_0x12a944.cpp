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

// Function: entry_0012a944
// Address: 0x12a944 - 0x12a984
void entry_0012a944_0x12a944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a944_0x12a944");
#endif

    ctx->pc = 0x12a944u;

    // 0x12a944: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x12a944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a948: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x12a948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12a94c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a94cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a950: 0x0  nop
    ctx->pc = 0x12a950u;
    // NOP
    // 0x12a954: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12a954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12a958: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12a958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12a95c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12a95cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12a960: 0x0  nop
    ctx->pc = 0x12a960u;
    // NOP
    // 0x12a964: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x12a964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x12a968: 0x8c850150  lw          $a1, 0x150($a0)
    ctx->pc = 0x12a968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x12a96c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x12a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x12a970: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x12a970u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12a974: 0x0  nop
    ctx->pc = 0x12a974u;
    // NOP
    // 0x12a978: 0x0  nop
    ctx->pc = 0x12a978u;
    // NOP
    // 0x12a97c: 0x1810  mfhi        $v1
    ctx->pc = 0x12a97cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x12a980: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x12a980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    ctx->pc = 0x12a984u;
}
