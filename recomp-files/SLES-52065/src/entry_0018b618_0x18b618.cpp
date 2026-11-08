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

// Function: entry_0018b618
// Address: 0x18b618 - 0x18b628
void entry_0018b618_0x18b618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b618_0x18b618");
#endif

    ctx->pc = 0x18b618u;

    // 0x18b618: 0x1e800003  bgtz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B618u;
    {
        const bool branch_taken_0x18b618 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x18b618) {
            ctx->pc = 0x18B628u;
            return;
        }
    }
    ctx->pc = 0x18B620u;
    // 0x18b620: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x18B620u;
    {
        const bool branch_taken_0x18b620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B620u;
        // 0x18b624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b620) {
            ctx->pc = 0x18B870u;
            return;
        }
    }
    ctx->pc = 0x18B628u;
}
