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

// Function: entry_00170a34
// Address: 0x170a34 - 0x170a64
void entry_00170a34_0x170a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170a34_0x170a34");
#endif

    ctx->pc = 0x170a34u;

    // 0x170a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170a38: 0x0  nop
    ctx->pc = 0x170a38u;
    // NOP
    // 0x170a3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x170a3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x170a40: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170a40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x170a44: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x170a44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x170a48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x170a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x170a4c: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x170a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x170a50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170A50u;
    {
        const bool branch_taken_0x170a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A50u;
        // 0x170a54: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a50) {
            ctx->pc = 0x170A64u;
            return;
        }
    }
    ctx->pc = 0x170A58u;
    // 0x170a58: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x170a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x170a5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x170A5Cu;
    {
        const bool branch_taken_0x170a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A5Cu;
        // 0x170a60: 0xc421f4ec  lwc1        $f1, -0xB14($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a5c) {
            ctx->pc = 0x170A9Cu;
            return;
        }
    }
    ctx->pc = 0x170A64u;
}
