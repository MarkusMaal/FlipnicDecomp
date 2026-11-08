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

// Function: entry_0020905c
// Address: 0x20905c - 0x209068
void entry_0020905c_0x20905c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020905c_0x20905c");
#endif

    ctx->pc = 0x20905cu;

    // 0x20905c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x20905cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x209060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x209060u;
    {
        const bool branch_taken_0x209060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209060u;
        // 0x209064: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209060) {
            ctx->pc = 0x20906Cu;
            return;
        }
    }
    ctx->pc = 0x209068u;
}
