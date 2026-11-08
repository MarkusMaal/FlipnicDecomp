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

// Function: entry_001573b0
// Address: 0x1573b0 - 0x1573c4
void entry_001573b0_0x1573b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001573b0_0x1573b0");
#endif

    ctx->pc = 0x1573b0u;

    // 0x1573b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1573b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1573b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1573b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1573b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1573b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1573bc: 0x807d428  j           func_1F50A0
    ctx->pc = 0x1573BCu;
    ctx->pc = 0x1573C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1573BCu;
    // 0x1573c0: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    FUN_001f50a0_0x1f50a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1573C4u;
}
