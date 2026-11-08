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

// Function: entry_001fadc0
// Address: 0x1fadc0 - 0x1fade0
void entry_001fadc0_0x1fadc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fadc0_0x1fadc0");
#endif

    ctx->pc = 0x1fadc0u;

label_1fadc0:
    // 0x1fadc0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fadc4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1fadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1fadc8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fadc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fadcc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fadccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fadd0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fadd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fadd4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FADD4u;
    {
        const bool branch_taken_0x1fadd4 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1fadd4) {
            ctx->pc = 0x1FADC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fadc0;
        }
    }
    ctx->pc = 0x1FADDCu;
    // 0x1faddc: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x1faddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    ctx->pc = 0x1fade0u;
}
