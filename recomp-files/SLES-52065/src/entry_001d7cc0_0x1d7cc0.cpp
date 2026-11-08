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

// Function: entry_001d7cc0
// Address: 0x1d7cc0 - 0x1d7cf0
void entry_001d7cc0_0x1d7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7cc0_0x1d7cc0");
#endif

    ctx->pc = 0x1d7cc0u;

    // 0x1d7cc0: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1d7cc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1d7cc4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7CC4u;
    {
        const bool branch_taken_0x1d7cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7cc4) {
            ctx->pc = 0x1D7CF0u;
            return;
        }
    }
    ctx->pc = 0x1D7CCCu;
    // 0x1d7ccc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7cd0: 0x80860002  lb          $a2, 0x2($a0)
    ctx->pc = 0x1d7cd0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7cd8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1d7cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d7cdc: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d7cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d7ce0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ce4: 0x8075674  j           func_1D59D0
    ctx->pc = 0x1D7CE4u;
    ctx->pc = 0x1D7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CE4u;
    // 0x1d7ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    FUN_001d59d0_0x1d59d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7CECu;
    // 0x1d7cec: 0x0  nop
    ctx->pc = 0x1d7cecu;
    // NOP
    ctx->pc = 0x1d7cf0u;
}
