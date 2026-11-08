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

// Function: entry_001a72e8
// Address: 0x1a72e8 - 0x1a7330
void entry_001a72e8_0x1a72e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a72e8_0x1a72e8");
#endif

    ctx->pc = 0x1a72e8u;

    // 0x1a72e8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a72ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a72ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a72f0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1a72f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1a72f4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1a72f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a72f8: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A72F8u;
    {
        const bool branch_taken_0x1a72f8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a72f8) {
            ctx->pc = 0x1A7330u;
            return;
        }
    }
    ctx->pc = 0x1A7300u;
    // 0x1a7300: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a7300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7304: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a7304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a7308: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a730c: 0x0  nop
    ctx->pc = 0x1a730cu;
    // NOP
    // 0x1a7310: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a7310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a7314: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a7314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7318: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a7318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a731c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a731cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a7320: 0x0  nop
    ctx->pc = 0x1a7320u;
    // NOP
    // 0x1a7324: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a7324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7328: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7328u;
    {
        const bool branch_taken_0x1a7328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7328) {
            ctx->pc = 0x1A733Cu;
            return;
        }
    }
    ctx->pc = 0x1A7330u;
}
