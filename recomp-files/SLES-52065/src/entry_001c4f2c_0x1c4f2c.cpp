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

// Function: entry_001c4f2c
// Address: 0x1c4f2c - 0x1c4f64
void entry_001c4f2c_0x1c4f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f2c_0x1c4f2c");
#endif

    ctx->pc = 0x1c4f2cu;

    // 0x1c4f2c: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x1c4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1c4f30: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1c4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1c4f34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4f38: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c4f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c4f3c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c4f40: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x1c4f40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
    // 0x1c4f44: 0xc420c394  lwc1        $f0, -0x3C6C($at)
    ctx->pc = 0x1c4f44u;
    { uint32_t bits = FAST_READ32(0x22C394u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4f48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c4f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c4f4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c4f50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c4f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c4f54: 0x0  nop
    ctx->pc = 0x1c4f54u;
    // NOP
    // 0x1c4f58: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4F58u;
    {
        const bool branch_taken_0x1c4f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f58) {
            ctx->pc = 0x1C4F64u;
            return;
        }
    }
    ctx->pc = 0x1C4F60u;
    // 0x1c4f60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1c4f64u;
}
