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

// Function: FUN_001592c0
// Address: 0x1592c0 - 0x1592d4
void FUN_001592c0_0x1592c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001592c0_0x1592c0");
#endif

    ctx->pc = 0x1592c0u;

    // 0x1592c0: 0xc48c0070  lwc1        $f12, 0x70($a0)
    ctx->pc = 0x1592c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1592c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1592c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1592c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592cc: 0x8056138  j           func_1584E0
    ctx->pc = 0x1592CCu;
    ctx->pc = 0x1592D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592CCu;
    // 0x1592d0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1584E0u;
    FUN_001584e0_0x1584e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1592D4u;
}
