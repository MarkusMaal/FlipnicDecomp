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

// Function: entry_0014f4cc
// Address: 0x14f4cc - 0x14f500
void entry_0014f4cc_0x14f4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f4cc_0x14f4cc");
#endif

    ctx->pc = 0x14f4ccu;

    // 0x14f4cc: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x14f4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f4d0: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x14f4d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f4d4: 0x0  nop
    ctx->pc = 0x14f4d4u;
    // NOP
    // 0x14f4d8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x14F4D8u;
    {
        const bool branch_taken_0x14f4d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f4d8) {
            ctx->pc = 0x14F508u;
            return;
        }
    }
    ctx->pc = 0x14F4E0u;
    // 0x14f4e0: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x14f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x14f4e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F4E4u;
    {
        const bool branch_taken_0x14f4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4e4) {
            ctx->pc = 0x14F500u;
            return;
        }
    }
    ctx->pc = 0x14F4ECu;
    // 0x14f4ec: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x14f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f4f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14f4f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14f4f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f4f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F4F8u;
    {
        const bool branch_taken_0x14f4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4F8u;
        // 0x14f4fc: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4f8) {
            ctx->pc = 0x14F508u;
            return;
        }
    }
    ctx->pc = 0x14F500u;
}
