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

// Function: entry_00161340
// Address: 0x161340 - 0x16137c
void entry_00161340_0x161340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161340_0x161340");
#endif

    ctx->pc = 0x161340u;

    // 0x161340: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x161340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161344: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x161344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x161348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16134c: 0x0  nop
    ctx->pc = 0x16134cu;
    // NOP
    // 0x161350: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x161350u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x161354: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x161354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x161358: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16135c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16135cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x161360: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x161364: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x161364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x161368: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161368u;
    {
        const bool branch_taken_0x161368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161368u;
        // 0x16136c: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161368) {
            ctx->pc = 0x16137Cu;
            return;
        }
    }
    ctx->pc = 0x161370u;
    // 0x161370: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x161370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x161374: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161374u;
    {
        const bool branch_taken_0x161374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161374u;
        // 0x161378: 0xc42115dc  lwc1        $f1, 0x15DC($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 5596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161374) {
            ctx->pc = 0x1613B4u;
            return;
        }
    }
    ctx->pc = 0x16137Cu;
}
