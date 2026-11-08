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

// Function: entry_001bcbb0
// Address: 0x1bcbb0 - 0x1bcbcc
void entry_001bcbb0_0x1bcbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcbb0_0x1bcbb0");
#endif

    ctx->pc = 0x1bcbb0u;

    // 0x1bcbb0: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x1bcbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1bcbb4: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1bcbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bcbb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bcbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bcbbc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1bcbbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bcbc0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCBC0u;
    {
        const bool branch_taken_0x1bcbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBC0u;
        // 0x1bcbc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbc0) {
            ctx->pc = 0x1BCBCCu;
            return;
        }
    }
    ctx->pc = 0x1BCBC8u;
    // 0x1bcbc8: 0xaea00080  sw          $zero, 0x80($s5)
    ctx->pc = 0x1bcbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 0));
    ctx->pc = 0x1bcbccu;
}
