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

// Function: entry_00176f90
// Address: 0x176f90 - 0x176fe4
void entry_00176f90_0x176f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176f90_0x176f90");
#endif

    ctx->pc = 0x176f90u;

    // 0x176f90: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x176f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x176f94: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x176F94u;
    {
        const bool branch_taken_0x176f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F94u;
        // 0x176f98: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f94) {
            ctx->pc = 0x176F70u;
            return;
        }
    }
    ctx->pc = 0x176F9Cu;
    // 0x176f9c: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x176f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176fa4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x176fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x176fa8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x176fa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fac: 0xc6800134  lwc1        $f0, 0x134($s4)
    ctx->pc = 0x176facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176fb0: 0x26840130  addiu       $a0, $s4, 0x130
    ctx->pc = 0x176fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 304));
    // 0x176fb4: 0x3c02bf7a  lui         $v0, 0xBF7A
    ctx->pc = 0x176fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49018 << 16));
    // 0x176fb8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x176fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x176fbc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x176fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x176fc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x176fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x176fc4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x176fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x176fc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x176fc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x176fcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x176fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x176fd0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x176fd0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x176fd4: 0x0  nop
    ctx->pc = 0x176fd4u;
    // NOP
    // 0x176fd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x176fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x176fdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x176FDCu;
    {
        const bool branch_taken_0x176fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FDCu;
        // 0x176fe0: 0xe6800134  swc1        $f0, 0x134($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fdc) {
            ctx->pc = 0x177000u;
            return;
        }
    }
    ctx->pc = 0x176FE4u;
}
