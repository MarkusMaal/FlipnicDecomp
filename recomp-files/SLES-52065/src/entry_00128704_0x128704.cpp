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

// Function: entry_00128704
// Address: 0x128704 - 0x128748
void entry_00128704_0x128704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128704_0x128704");
#endif

    ctx->pc = 0x128704u;

    // 0x128704: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x128704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x128708: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12870c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x12870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x128710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128714: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x128714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x128718: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x128718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x12871c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12871cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128720: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x128720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x128724: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x128724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x128728: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x128728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x12872c: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x12872cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x128730: 0x4602085c  madd.s      $f1, $f1, $f2
    ctx->pc = 0x128730u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x128734: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x128734u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x128738: 0x0  nop
    ctx->pc = 0x128738u;
    // NOP
    // 0x12873c: 0x0  nop
    ctx->pc = 0x12873cu;
    // NOP
    // 0x128740: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x128740u;
    {
        const bool branch_taken_0x128740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128740) {
            ctx->pc = 0x128784u;
            return;
        }
    }
    ctx->pc = 0x128748u;
}
