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

// Function: entry_0017911c
// Address: 0x17911c - 0x179158
void entry_0017911c_0x17911c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017911c_0x17911c");
#endif

    ctx->pc = 0x17911cu;

    // 0x17911c: 0x0  nop
    ctx->pc = 0x17911cu;
    // NOP
    // 0x179120: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x179120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x179124: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x179124u;
    {
        const bool branch_taken_0x179124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179124) {
            ctx->pc = 0x17901Cu;
            return;
        }
    }
    ctx->pc = 0x17912Cu;
    // 0x17912c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x17912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179130: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x179130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x179134: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x179134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179138: 0x0  nop
    ctx->pc = 0x179138u;
    // NOP
    // 0x17913c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17913cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x179140: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179140u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179144: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x179144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x179148: 0x0  nop
    ctx->pc = 0x179148u;
    // NOP
    // 0x17914c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17914Cu;
    {
        const bool branch_taken_0x17914c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17914c) {
            ctx->pc = 0x179158u;
            return;
        }
    }
    ctx->pc = 0x179154u;
    // 0x179154: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x179154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x179158u;
}
