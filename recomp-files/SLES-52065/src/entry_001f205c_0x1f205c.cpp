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

// Function: entry_001f205c
// Address: 0x1f205c - 0x1f206c
void entry_001f205c_0x1f205c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f205c_0x1f205c");
#endif

    ctx->pc = 0x1f205cu;

    // 0x1f205c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F205Cu;
    {
        const bool branch_taken_0x1f205c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F205Cu;
        // 0x1f2060: 0x2ec20401  sltiu       $v0, $s6, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f205c) {
            ctx->pc = 0x1F206Cu;
            return;
        }
    }
    ctx->pc = 0x1F2064u;
    // 0x1f2064: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2064u;
    {
        const bool branch_taken_0x1f2064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2064) {
            ctx->pc = 0x1F207Cu;
            return;
        }
    }
    ctx->pc = 0x1F206Cu;
}
