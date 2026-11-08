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

// Function: entry_001d7bf0
// Address: 0x1d7bf0 - 0x1d7c08
void entry_001d7bf0_0x1d7bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7bf0_0x1d7bf0");
#endif

    ctx->pc = 0x1d7bf0u;

    // 0x1d7bf0: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x1d7bf0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7bf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7bfc: 0x8074d08  j           func_1D3420
    ctx->pc = 0x1D7BFCu;
    ctx->pc = 0x1D7C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BFCu;
    // 0x1d7c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3420u;
    FUN_001d3420_0x1d3420(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7C04u;
    // 0x1d7c04: 0x0  nop
    ctx->pc = 0x1d7c04u;
    // NOP
    ctx->pc = 0x1d7c08u;
}
