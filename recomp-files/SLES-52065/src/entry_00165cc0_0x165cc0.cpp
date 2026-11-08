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

// Function: entry_00165cc0
// Address: 0x165cc0 - 0x165cf8
void entry_00165cc0_0x165cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165cc0_0x165cc0");
#endif

    ctx->pc = 0x165cc0u;

    // 0x165cc0: 0xc4a401c0  lwc1        $f4, 0x1C0($a1)
    ctx->pc = 0x165cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x165cc4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x165cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x165cc8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x165cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x165ccc: 0xc4820064  lwc1        $f2, 0x64($a0)
    ctx->pc = 0x165cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x165cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165cd4: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x165cd4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x165cd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x165cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x165cdc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x165cdcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x165ce0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x165ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165ce4: 0x0  nop
    ctx->pc = 0x165ce4u;
    // NOP
    // 0x165ce8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x165CE8u;
    {
        const bool branch_taken_0x165ce8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x165CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CE8u;
        // 0x165cec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ce8) {
            ctx->pc = 0x165CF8u;
            return;
        }
    }
    ctx->pc = 0x165CF0u;
    // 0x165cf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x165CF0u;
    {
        const bool branch_taken_0x165cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165cf0) {
            ctx->pc = 0x165D18u;
            return;
        }
    }
    ctx->pc = 0x165CF8u;
}
