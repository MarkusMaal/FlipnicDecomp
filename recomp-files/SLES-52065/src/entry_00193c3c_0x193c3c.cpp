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

// Function: entry_00193c3c
// Address: 0x193c3c - 0x193c44
void entry_00193c3c_0x193c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193c3c_0x193c3c");
#endif

    ctx->pc = 0x193c3cu;

    // 0x193c3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x193C3Cu;
    {
        const bool branch_taken_0x193c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C3Cu;
        // 0x193c40: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c3c) {
            ctx->pc = 0x193C6Cu;
            return;
        }
    }
    ctx->pc = 0x193C44u;
}
