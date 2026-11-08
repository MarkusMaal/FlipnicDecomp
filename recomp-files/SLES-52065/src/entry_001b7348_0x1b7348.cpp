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

// Function: entry_001b7348
// Address: 0x1b7348 - 0x1b7380
void entry_001b7348_0x1b7348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7348_0x1b7348");
#endif

    ctx->pc = 0x1b7348u;

    // 0x1b7348: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x1b7348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1b734c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1b734cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1b7350: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b7350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7354: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b7354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b7358: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b7358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b735c: 0xae63003c  sw          $v1, 0x3C($s3)
    ctx->pc = 0x1b735cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 3));
    // 0x1b7360: 0xc420c394  lwc1        $f0, -0x3C6C($at)
    ctx->pc = 0x1b7360u;
    { uint32_t bits = FAST_READ32(0x22C394u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7364: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7368: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b736c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b736cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b7370: 0x0  nop
    ctx->pc = 0x1b7370u;
    // NOP
    // 0x1b7374: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7374u;
    {
        const bool branch_taken_0x1b7374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7374) {
            ctx->pc = 0x1B7380u;
            return;
        }
    }
    ctx->pc = 0x1B737Cu;
    // 0x1b737c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b737cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x1b7380u;
}
