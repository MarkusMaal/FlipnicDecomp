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

// Function: entry_0017799c
// Address: 0x17799c - 0x1779fc
void entry_0017799c_0x17799c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017799c_0x17799c");
#endif

    ctx->pc = 0x17799cu;

    // 0x17799c: 0xc7838028  lwc1        $f3, -0x7FD8($gp)
    ctx->pc = 0x17799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1779a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1779a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1779a4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1779a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1779a8: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x1779a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1779ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1779acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1779b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1779b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1779b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1779b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1779b8: 0x0  nop
    ctx->pc = 0x1779b8u;
    // NOP
    // 0x1779bc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1779bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1779c0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1779c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1779c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1779c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1779c8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1779c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1779cc: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1779ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1779d0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1779d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1779d4: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1779d4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x1779d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1779d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1779dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1779dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1779e0: 0x0  nop
    ctx->pc = 0x1779e0u;
    // NOP
    // 0x1779e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1779e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1779e8: 0x0  nop
    ctx->pc = 0x1779e8u;
    // NOP
    // 0x1779ec: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1779ECu;
    {
        const bool branch_taken_0x1779ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1779F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779ECu;
        // 0x1779f0: 0xe481003c  swc1        $f1, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779ec) {
            ctx->pc = 0x1779FCu;
            return;
        }
    }
    ctx->pc = 0x1779F4u;
    // 0x1779f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1779f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1779f8: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1779f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    ctx->pc = 0x1779fcu;
}
