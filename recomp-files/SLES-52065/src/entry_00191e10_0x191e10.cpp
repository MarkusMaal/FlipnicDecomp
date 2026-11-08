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

// Function: entry_00191e10
// Address: 0x191e10 - 0x191e20
void entry_00191e10_0x191e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191e10_0x191e10");
#endif

    ctx->pc = 0x191e10u;

    // 0x191e10: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191e14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191e18: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x191E18u;
    {
        const bool branch_taken_0x191e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E18u;
        // 0x191e1c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e18) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191E20u;
}
