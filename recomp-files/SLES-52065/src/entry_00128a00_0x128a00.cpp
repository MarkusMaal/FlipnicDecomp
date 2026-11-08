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

// Function: entry_00128a00
// Address: 0x128a00 - 0x128a34
void entry_00128a00_0x128a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128a00_0x128a00");
#endif

    ctx->pc = 0x128a00u;

    // 0x128a00: 0xc6810134  lwc1        $f1, 0x134($s4)
    ctx->pc = 0x128a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128a04: 0xc7808448  lwc1        $f0, -0x7BB8($gp)
    ctx->pc = 0x128a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x128a08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128a0c: 0xe6810134  swc1        $f1, 0x134($s4)
    ctx->pc = 0x128a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 308), bits); }
    // 0x128a10: 0xc7808458  lwc1        $f0, -0x7BA8($gp)
    ctx->pc = 0x128a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x128a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x128a18: 0xe6800134  swc1        $f0, 0x134($s4)
    ctx->pc = 0x128a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 308), bits); }
    // 0x128a1c: 0xc7818460  lwc1        $f1, -0x7BA0($gp)
    ctx->pc = 0x128a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128a20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x128a20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128a24: 0x0  nop
    ctx->pc = 0x128a24u;
    // NOP
    // 0x128a28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x128A28u;
    {
        const bool branch_taken_0x128a28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128a28) {
            ctx->pc = 0x128A34u;
            return;
        }
    }
    ctx->pc = 0x128A30u;
    // 0x128a30: 0xe6810134  swc1        $f1, 0x134($s4)
    ctx->pc = 0x128a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 308), bits); }
    ctx->pc = 0x128a34u;
}
