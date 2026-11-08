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

// Function: entry_001d8b48
// Address: 0x1d8b48 - 0x1d8b60
void entry_001d8b48_0x1d8b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b48_0x1d8b48");
#endif

    ctx->pc = 0x1d8b48u;

    // 0x1d8b48: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8b4c: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d8b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d8b50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8b54: 0x807566a  j           func_1D59A8
    ctx->pc = 0x1D8B54u;
    ctx->pc = 0x1D8B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B54u;
    // 0x1d8b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59A8u;
    FUN_001d59a8_0x1d59a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8B5Cu;
    // 0x1d8b5c: 0x0  nop
    ctx->pc = 0x1d8b5cu;
    // NOP
    ctx->pc = 0x1d8b60u;
}
