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

// Function: entry_00164eac
// Address: 0x164eac - 0x164ee8
void entry_00164eac_0x164eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164eac_0x164eac");
#endif

    ctx->pc = 0x164eacu;

    // 0x164eac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x164eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x164eb0: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x164eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x164eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164eb8: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x164eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164ebc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x164ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x164ec0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x164ec0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164ec4: 0x0  nop
    ctx->pc = 0x164ec4u;
    // NOP
    // 0x164ec8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x164EC8u;
    {
        const bool branch_taken_0x164ec8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164ec8) {
            ctx->pc = 0x164EE8u;
            return;
        }
    }
    ctx->pc = 0x164ED0u;
    // 0x164ed0: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x164ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164ed4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x164ed4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164ed8: 0x0  nop
    ctx->pc = 0x164ed8u;
    // NOP
    // 0x164edc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x164EDCu;
    {
        const bool branch_taken_0x164edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164edc) {
            ctx->pc = 0x164EE8u;
            return;
        }
    }
    ctx->pc = 0x164EE4u;
    // 0x164ee4: 0xe66102f0  swc1        $f1, 0x2F0($s3)
    ctx->pc = 0x164ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
    ctx->pc = 0x164ee8u;
}
