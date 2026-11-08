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

// Function: entry_0019d60c
// Address: 0x19d60c - 0x19d628
void entry_0019d60c_0x19d60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d60c_0x19d60c");
#endif

    ctx->pc = 0x19d60cu;

    // 0x19d60c: 0x0  nop
    ctx->pc = 0x19d60cu;
    // NOP
    // 0x19d610: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x19d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d614: 0x16030028  bne         $s0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x19D614u;
    {
        const bool branch_taken_0x19d614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d614) {
            ctx->pc = 0x19D6B8u;
            return;
        }
    }
    ctx->pc = 0x19D61Cu;
    // 0x19d61c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x19d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x19d620: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19D620u;
    {
        const bool branch_taken_0x19d620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D620u;
        // 0x19d624: 0xaea00324  sw          $zero, 0x324($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d620) {
            ctx->pc = 0x19D6B8u;
            return;
        }
    }
    ctx->pc = 0x19D628u;
}
