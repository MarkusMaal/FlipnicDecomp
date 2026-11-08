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

// Function: entry_00161a8c
// Address: 0x161a8c - 0x161a9c
void entry_00161a8c_0x161a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161a8c_0x161a8c");
#endif

    ctx->pc = 0x161a8cu;

    // 0x161a8c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x161A8Cu;
    {
        const bool branch_taken_0x161a8c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x161a8c) {
            ctx->pc = 0x161A9Cu;
            return;
        }
    }
    ctx->pc = 0x161A94u;
    // 0x161a94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161A94u;
    {
        const bool branch_taken_0x161a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A94u;
        // 0x161a98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a94) {
            ctx->pc = 0x161AACu;
            return;
        }
    }
    ctx->pc = 0x161A9Cu;
}
