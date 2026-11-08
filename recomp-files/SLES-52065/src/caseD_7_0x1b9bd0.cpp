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

// Function: caseD_7
// Address: 0x1b9bd0 - 0x1b9c04
void caseD_7_0x1b9bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1b9bd0");
#endif

    ctx->pc = 0x1b9bd0u;

    // 0x1b9bd0: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x1b9bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9bd4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1b9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1b9bd8: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1b9bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b9bdc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b9bdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9be0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9be4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9be8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b9be8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b9bec: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1b9becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9bf0: 0x0  nop
    ctx->pc = 0x1b9bf0u;
    // NOP
    // 0x1b9bf4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1B9BF4u;
    {
        const bool branch_taken_0x1b9bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9BF4u;
        // 0x1b9bf8: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bf4) {
            ctx->pc = 0x1B9C34u;
            return;
        }
    }
    ctx->pc = 0x1B9BFCu;
    // 0x1b9bfc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B9BFCu;
    {
        const bool branch_taken_0x1b9bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9BFCu;
        // 0x1b9c00: 0xe602009c  swc1        $f2, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bfc) {
            ctx->pc = 0x1B9C34u;
            return;
        }
    }
    ctx->pc = 0x1B9C04u;
}
