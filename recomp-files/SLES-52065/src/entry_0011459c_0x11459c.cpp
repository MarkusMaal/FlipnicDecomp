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

// Function: entry_0011459c
// Address: 0x11459c - 0x1145e8
void entry_0011459c_0x11459c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011459c_0x11459c");
#endif

    ctx->pc = 0x11459cu;

    // 0x11459c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x11459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1145a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1145a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1145a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1145a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1145a8: 0x8e420254  lw          $v0, 0x254($s2)
    ctx->pc = 0x1145a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x1145ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1145acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1145b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1145b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1145b4: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x1145b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
    // 0x1145b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1145b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1145bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1145bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1145c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1145c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1145c4: 0x0  nop
    ctx->pc = 0x1145c4u;
    // NOP
    // 0x1145c8: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1145c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1145cc: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1145CCu;
    {
        const bool branch_taken_0x1145cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1145cc) {
            ctx->pc = 0x114648u;
            return;
        }
    }
    ctx->pc = 0x1145D4u;
    // 0x1145d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1145D4u;
    {
        const bool branch_taken_0x1145d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1145D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145D4u;
        // 0x1145d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145d4) {
            ctx->pc = 0x1145E8u;
            return;
        }
    }
    ctx->pc = 0x1145DCu;
    // 0x1145dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1145dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1145e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1145E0u;
    {
        const bool branch_taken_0x1145e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145E0u;
        // 0x1145e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145e0) {
            ctx->pc = 0x114600u;
            return;
        }
    }
    ctx->pc = 0x1145E8u;
}
