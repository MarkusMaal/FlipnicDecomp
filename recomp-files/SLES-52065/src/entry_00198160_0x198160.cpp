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

// Function: entry_00198160
// Address: 0x198160 - 0x198198
void entry_00198160_0x198160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198160_0x198160");
#endif

    ctx->pc = 0x198160u;

    // 0x198160: 0x8ea30324  lw          $v1, 0x324($s5)
    ctx->pc = 0x198160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
    // 0x198164: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198168: 0xaea30324  sw          $v1, 0x324($s5)
    ctx->pc = 0x198168u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 3));
    // 0x19816c: 0x8ea30664  lw          $v1, 0x664($s5)
    ctx->pc = 0x19816cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x198170: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x198170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198174: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x198174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198178: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x198178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19817c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19817cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x198180: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x198180u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x198184: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x198184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x198188: 0x0  nop
    ctx->pc = 0x198188u;
    // NOP
    // 0x19818c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19818Cu;
    {
        const bool branch_taken_0x19818c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19818c) {
            ctx->pc = 0x198198u;
            return;
        }
    }
    ctx->pc = 0x198194u;
    // 0x198194: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x198198u;
}
