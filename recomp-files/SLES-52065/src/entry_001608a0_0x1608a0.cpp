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

// Function: entry_001608a0
// Address: 0x1608a0 - 0x1608d8
void entry_001608a0_0x1608a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001608a0_0x1608a0");
#endif

    ctx->pc = 0x1608a0u;

label_1608a0:
    // 0x1608a0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1608a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1608a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1608a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1608a8: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x1608a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1608ac: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x1608acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1608b0: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x1608b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1608b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1608b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1608b8: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x1608b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x1608bc: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x1608bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1608c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1608c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1608c4: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x1608c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x1608c8: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x1608c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1608cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1608ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1608d0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1608D0u;
    {
        const bool branch_taken_0x1608d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1608D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608D0u;
        // 0x1608d4: 0xe4c00028  swc1        $f0, 0x28($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1608d0) {
            ctx->pc = 0x1608A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1608a0;
        }
    }
    ctx->pc = 0x1608D8u;
}
