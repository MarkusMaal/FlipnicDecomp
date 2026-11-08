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

// Function: entry_00118144
// Address: 0x118144 - 0x118154
void entry_00118144_0x118144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118144_0x118144");
#endif

    ctx->pc = 0x118144u;

    // 0x118144: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118144u;
    {
        const bool branch_taken_0x118144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118144) {
            ctx->pc = 0x118154u;
            return;
        }
    }
    ctx->pc = 0x11814Cu;
    // 0x11814c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11814Cu;
    {
        const bool branch_taken_0x11814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11814Cu;
        // 0x118150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11814c) {
            ctx->pc = 0x11815Cu;
            return;
        }
    }
    ctx->pc = 0x118154u;
}
