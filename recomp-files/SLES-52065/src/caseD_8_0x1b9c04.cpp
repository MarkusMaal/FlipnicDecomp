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

// Function: caseD_8
// Address: 0x1b9c04 - 0x1b9c34
void caseD_8_0x1b9c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1b9c04");
#endif

    ctx->pc = 0x1b9c04u;

    // 0x1b9c04: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x1b9c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c08: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1b9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1b9c0c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1b9c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b9c10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b9c10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9c18: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9c1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9c1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9c20: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b9c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9c24: 0x0  nop
    ctx->pc = 0x1b9c24u;
    // NOP
    // 0x1b9c28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9C28u;
    {
        const bool branch_taken_0x1b9c28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C28u;
        // 0x1b9c2c: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c28) {
            ctx->pc = 0x1B9C34u;
            return;
        }
    }
    ctx->pc = 0x1B9C30u;
    // 0x1b9c30: 0xe602009c  swc1        $f2, 0x9C($s0)
    ctx->pc = 0x1b9c30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    ctx->pc = 0x1b9c34u;
}
