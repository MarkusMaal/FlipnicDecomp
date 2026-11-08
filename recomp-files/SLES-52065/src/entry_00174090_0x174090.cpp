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

// Function: entry_00174090
// Address: 0x174090 - 0x1740f0
void entry_00174090_0x174090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174090_0x174090");
#endif

    ctx->pc = 0x174090u;

    // 0x174090: 0xc7828028  lwc1        $f2, -0x7FD8($gp)
    ctx->pc = 0x174090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174094: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x174094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x174098: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x174098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17409c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17409cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740a0: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x1740a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1740a4: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x1740a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
    // 0x1740a8: 0x3463d97c  ori         $v1, $v1, 0xD97C
    ctx->pc = 0x1740a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55676);
    // 0x1740ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1740acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1740b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1740b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1740b4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1740b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1740b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1740b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1740bc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1740bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1740c0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1740c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1740c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1740c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1740c8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1740c8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1740cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1740ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1740d0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1740d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1740d4: 0x0  nop
    ctx->pc = 0x1740d4u;
    // NOP
    // 0x1740d8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1740d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1740dc: 0x0  nop
    ctx->pc = 0x1740dcu;
    // NOP
    // 0x1740e0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1740E0u;
    {
        const bool branch_taken_0x1740e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1740E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740E0u;
        // 0x1740e4: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740e0) {
            ctx->pc = 0x1740F0u;
            return;
        }
    }
    ctx->pc = 0x1740E8u;
    // 0x1740e8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1740e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1740ec: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1740ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    ctx->pc = 0x1740f0u;
}
