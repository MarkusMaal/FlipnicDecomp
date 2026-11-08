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

// Function: entry_001d2cc4
// Address: 0x1d2cc4 - 0x1d2ce8
void entry_001d2cc4_0x1d2cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2cc4_0x1d2cc4");
#endif

    ctx->pc = 0x1d2cc4u;

    // 0x1d2cc4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d2cc8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2CC8u;
    {
        const bool branch_taken_0x1d2cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2cc8) {
            ctx->pc = 0x1D2CE8u;
            return;
        }
    }
    ctx->pc = 0x1D2CD0u;
    // 0x1d2cd0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2cd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2cd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2cdc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2ce0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2CE0u;
    {
        const bool branch_taken_0x1d2ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CE0u;
        // 0x1d2ce4: 0xac660020  sw          $a2, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ce0) {
            ctx->pc = 0x1D2CECu;
            return;
        }
    }
    ctx->pc = 0x1D2CE8u;
}
