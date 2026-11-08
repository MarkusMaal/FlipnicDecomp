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

// Function: entry_0011213c
// Address: 0x11213c - 0x112160
void entry_0011213c_0x11213c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011213c_0x11213c");
#endif

    ctx->pc = 0x11213cu;

    // 0x11213c: 0x0  nop
    ctx->pc = 0x11213cu;
    // NOP
    // 0x112140: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x112140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x112144: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x112144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112148: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x112148u;
    {
        const bool branch_taken_0x112148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112148) {
            ctx->pc = 0x11210Cu;
            return;
        }
    }
    ctx->pc = 0x112150u;
    // 0x112150: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112158: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x112158u;
    {
        const bool branch_taken_0x112158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112158u;
        // 0x11215c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112158) {
            ctx->pc = 0x112334u;
            return;
        }
    }
    ctx->pc = 0x112160u;
}
