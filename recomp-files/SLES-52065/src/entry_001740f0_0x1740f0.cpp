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

// Function: entry_001740f0
// Address: 0x1740f0 - 0x174150
void entry_001740f0_0x1740f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001740f0_0x1740f0");
#endif

    ctx->pc = 0x1740f0u;

    // 0x1740f0: 0xc7838028  lwc1        $f3, -0x7FD8($gp)
    ctx->pc = 0x1740f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1740f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1740f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1740f8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1740f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1740fc: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x1740fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174100: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x174100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x174104: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x174104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x174108: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x174108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17410c: 0x0  nop
    ctx->pc = 0x17410cu;
    // NOP
    // 0x174110: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x174110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x174114: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x174114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x174118: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x174118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x17411c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x17411cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x174120: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174120u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x174124: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x174124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x174128: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x174128u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x17412c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17412cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x174130: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x174130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174134: 0x0  nop
    ctx->pc = 0x174134u;
    // NOP
    // 0x174138: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x174138u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17413c: 0x0  nop
    ctx->pc = 0x17413cu;
    // NOP
    // 0x174140: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x174140u;
    {
        const bool branch_taken_0x174140 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x174144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174140u;
        // 0x174144: 0xe481003c  swc1        $f1, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x174140) {
            ctx->pc = 0x174150u;
            return;
        }
    }
    ctx->pc = 0x174148u;
    // 0x174148: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x174148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17414c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x17414cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    ctx->pc = 0x174150u;
}
