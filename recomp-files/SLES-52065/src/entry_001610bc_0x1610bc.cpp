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

// Function: entry_001610bc
// Address: 0x1610bc - 0x16110c
void entry_001610bc_0x1610bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001610bc_0x1610bc");
#endif

    ctx->pc = 0x1610bcu;

    // 0x1610bc: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x1610bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1610c0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1610c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1610c4: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1610C4u;
    {
        const bool branch_taken_0x1610c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1610C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610C4u;
        // 0x1610c8: 0x2841ffff  slti        $at, $v0, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1610c4) {
            ctx->pc = 0x161168u;
            return;
        }
    }
    ctx->pc = 0x1610CCu;
    // 0x1610cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1610ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1610d0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1610d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1610d4: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x1610d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1610d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1610d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1610dc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1610dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1610e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1610e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1610e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1610e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1610e8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1610e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1610ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1610ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1610f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1610f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1610f4: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x1610f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1610f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1610F8u;
    {
        const bool branch_taken_0x1610f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1610FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610F8u;
        // 0x1610fc: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1610f8) {
            ctx->pc = 0x16110Cu;
            return;
        }
    }
    ctx->pc = 0x161100u;
    // 0x161100: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x161100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x161104: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161104u;
    {
        const bool branch_taken_0x161104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161104u;
        // 0x161108: 0xc42c1628  lwc1        $f12, 0x1628($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 5672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161104) {
            ctx->pc = 0x161144u;
            return;
        }
    }
    ctx->pc = 0x16110Cu;
}
