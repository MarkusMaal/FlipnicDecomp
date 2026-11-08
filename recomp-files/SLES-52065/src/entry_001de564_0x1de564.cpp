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

// Function: entry_001de564
// Address: 0x1de564 - 0x1de584
void entry_001de564_0x1de564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de564_0x1de564");
#endif

    ctx->pc = 0x1de564u;

    // 0x1de564: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1de568: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1de568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1de56c: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x1de56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1de570: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1de570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1de574: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x1de574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x1de578: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1de57c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1de57cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de580: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1de584u;
}
