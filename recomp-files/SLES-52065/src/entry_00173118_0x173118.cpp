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

// Function: entry_00173118
// Address: 0x173118 - 0x173150
void entry_00173118_0x173118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173118_0x173118");
#endif

    ctx->pc = 0x173118u;

    // 0x173118: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x173118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17311c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x17311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x173120: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x173120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x173124: 0xc6211484  lwc1        $f1, 0x1484($s1)
    ctx->pc = 0x173124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173128: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x173128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17312c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17312cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x173130: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173134: 0x0  nop
    ctx->pc = 0x173134u;
    // NOP
    // 0x173138: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x173138u;
    {
        const bool branch_taken_0x173138 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173138u;
        // 0x17313c: 0x46031082  mul.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173138) {
            ctx->pc = 0x173150u;
            return;
        }
    }
    ctx->pc = 0x173140u;
    // 0x173140: 0xc6201464  lwc1        $f0, 0x1464($s1)
    ctx->pc = 0x173140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173144: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x173144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x173148: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173148u;
    {
        const bool branch_taken_0x173148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173148u;
        // 0x17314c: 0xe6201464  swc1        $f0, 0x1464($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x173148) {
            ctx->pc = 0x17315Cu;
            return;
        }
    }
    ctx->pc = 0x173150u;
}
