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

// Function: entry_00189bdc
// Address: 0x189bdc - 0x189c0c
void entry_00189bdc_0x189bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189bdc_0x189bdc");
#endif

    ctx->pc = 0x189bdcu;

    // 0x189bdc: 0x0  nop
    ctx->pc = 0x189bdcu;
    // NOP
    // 0x189be0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x189be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x189be4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x189be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189be8: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x189be8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x189bec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x189bf0: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x189bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x189bf4: 0xc6810044  lwc1        $f1, 0x44($s4)
    ctx->pc = 0x189bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189bf8: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x189bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189bfc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189bfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x189c00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x189c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x189c04: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x189C04u;
    {
        const bool branch_taken_0x189c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C04u;
        // 0x189c08: 0xe6800014  swc1        $f0, 0x14($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c04) {
            ctx->pc = 0x189DFCu;
            return;
        }
    }
    ctx->pc = 0x189C0Cu;
}
