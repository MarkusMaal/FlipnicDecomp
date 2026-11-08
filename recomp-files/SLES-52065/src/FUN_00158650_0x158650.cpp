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

// Function: FUN_00158650
// Address: 0x158650 - 0x158664
void FUN_00158650_0x158650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158650_0x158650");
#endif

    ctx->pc = 0x158650u;

    // 0x158650: 0xc48001e0  lwc1        $f0, 0x1E0($a0)
    ctx->pc = 0x158650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158654: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x158654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158658: 0x24860290  addiu       $a2, $a0, 0x290
    ctx->pc = 0x158658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    // 0x15865c: 0x8055b3c  j           func_156CF0
    ctx->pc = 0x15865Cu;
    ctx->pc = 0x158660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15865Cu;
    // 0x158660: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    FUN_00156cf0_0x156cf0(rdram, ctx, runtime); return;
    ctx->pc = 0x158664u;
}
