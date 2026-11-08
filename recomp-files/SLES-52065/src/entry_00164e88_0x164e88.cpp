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

// Function: entry_00164e88
// Address: 0x164e88 - 0x164eac
void entry_00164e88_0x164e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164e88_0x164e88");
#endif

    ctx->pc = 0x164e88u;

    // 0x164e88: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x164E88u;
    {
        const bool branch_taken_0x164e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164e88) {
            ctx->pc = 0x164EACu;
            return;
        }
    }
    ctx->pc = 0x164E90u;
    // 0x164e90: 0xc66102f0  lwc1        $f1, 0x2F0($s3)
    ctx->pc = 0x164e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164e94: 0xc6600354  lwc1        $f0, 0x354($s3)
    ctx->pc = 0x164e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164e98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164e9c: 0x0  nop
    ctx->pc = 0x164e9cu;
    // NOP
    // 0x164ea0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x164EA0u;
    {
        const bool branch_taken_0x164ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x164ea0) {
            ctx->pc = 0x164EACu;
            return;
        }
    }
    ctx->pc = 0x164EA8u;
    // 0x164ea8: 0xe66002f0  swc1        $f0, 0x2F0($s3)
    ctx->pc = 0x164ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
    ctx->pc = 0x164eacu;
}
