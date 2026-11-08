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

// Function: entry_00163bac
// Address: 0x163bac - 0x163be0
void entry_00163bac_0x163bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163bac_0x163bac");
#endif

    ctx->pc = 0x163bacu;

    // 0x163bac: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x163BACu;
    {
        const bool branch_taken_0x163bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163bac) {
            ctx->pc = 0x163BE0u;
            return;
        }
    }
    ctx->pc = 0x163BB4u;
    // 0x163bb4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x163bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x163bb8: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x163bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163bbc: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x163bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163bc0: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x163bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163bc4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163bc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163bc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x163bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163bcc: 0x0  nop
    ctx->pc = 0x163bccu;
    // NOP
    // 0x163bd0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x163BD0u;
    {
        const bool branch_taken_0x163bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163bd0) {
            ctx->pc = 0x163C1Cu;
            return;
        }
    }
    ctx->pc = 0x163BD8u;
    // 0x163bd8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x163BD8u;
    {
        const bool branch_taken_0x163bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BD8u;
        // 0x163bdc: 0xe66102f0  swc1        $f1, 0x2F0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bd8) {
            ctx->pc = 0x163C1Cu;
            return;
        }
    }
    ctx->pc = 0x163BE0u;
}
