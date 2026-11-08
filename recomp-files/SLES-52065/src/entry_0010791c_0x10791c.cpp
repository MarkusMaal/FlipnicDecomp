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

// Function: entry_0010791c
// Address: 0x10791c - 0x107930
void entry_0010791c_0x10791c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010791c_0x10791c");
#endif

    ctx->pc = 0x10791cu;

    // 0x10791c: 0x938286d8  lbu         $v0, -0x7928($gp)
    ctx->pc = 0x10791cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936280)));
    // 0x107920: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107920u;
    {
        const bool branch_taken_0x107920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107920u;
        // 0x107924: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107920) {
            ctx->pc = 0x107930u;
            return;
        }
    }
    ctx->pc = 0x107928u;
    // 0x107928: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107928u;
    {
        const bool branch_taken_0x107928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107928u;
        // 0x10792c: 0x431823  subu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107928) {
            ctx->pc = 0x107934u;
            return;
        }
    }
    ctx->pc = 0x107930u;
}
