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

// Function: FUN_001592a0
// Address: 0x1592a0 - 0x1592b4
void FUN_001592a0_0x1592a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001592a0_0x1592a0");
#endif

    ctx->pc = 0x1592a0u;

    // 0x1592a0: 0xc48c0070  lwc1        $f12, 0x70($a0)
    ctx->pc = 0x1592a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1592a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1592a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1592a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592ac: 0x80560ec  j           func_1583B0
    ctx->pc = 0x1592ACu;
    ctx->pc = 0x1592B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592ACu;
    // 0x1592b0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1583B0u;
    FUN_001583b0_0x1583b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1592B4u;
}
