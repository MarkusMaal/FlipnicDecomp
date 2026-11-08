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

// Function: entry_0013acc4
// Address: 0x13acc4 - 0x13ace0
void entry_0013acc4_0x13acc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013acc4_0x13acc4");
#endif

    ctx->pc = 0x13acc4u;

    // 0x13acc4: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x13acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x13acc8: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x13acc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13accc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13ACCCu;
    {
        const bool branch_taken_0x13accc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13accc) {
            ctx->pc = 0x13ACE0u;
            return;
        }
    }
    ctx->pc = 0x13ACD4u;
    // 0x13acd4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x13acd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13acd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13ACD8u;
    {
        const bool branch_taken_0x13acd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACD8u;
        // 0x13acdc: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13acd8) {
            ctx->pc = 0x13ACE8u;
            return;
        }
    }
    ctx->pc = 0x13ACE0u;
}
