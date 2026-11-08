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

// Function: entry_0016cfec
// Address: 0x16cfec - 0x16d020
void entry_0016cfec_0x16cfec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cfec_0x16cfec");
#endif

    ctx->pc = 0x16cfecu;

    // 0x16cfec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cff0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16CFF0u;
    {
        const bool branch_taken_0x16cff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16cff0) {
            ctx->pc = 0x16D020u;
            return;
        }
    }
    ctx->pc = 0x16CFF8u;
    // 0x16cff8: 0xc600026c  lwc1        $f0, 0x26C($s0)
    ctx->pc = 0x16cff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cffc: 0x3c023d1e  lui         $v0, 0x3D1E
    ctx->pc = 0x16cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15646 << 16));
    // 0x16d000: 0x3442611c  ori         $v0, $v0, 0x611C
    ctx->pc = 0x16d000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24860);
    // 0x16d004: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16d004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16d008: 0xc60201c0  lwc1        $f2, 0x1C0($s0)
    ctx->pc = 0x16d008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16d00c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16d00cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16d010: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x16d010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16d014: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x16d014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x16d018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16D018u;
    {
        const bool branch_taken_0x16d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D018u;
        // 0x16d01c: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d018) {
            ctx->pc = 0x16D028u;
            return;
        }
    }
    ctx->pc = 0x16D020u;
}
