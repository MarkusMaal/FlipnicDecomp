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

// Function: entry_0013eda8
// Address: 0x13eda8 - 0x13edbc
void entry_0013eda8_0x13eda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eda8_0x13eda8");
#endif

    ctx->pc = 0x13eda8u;

    // 0x13eda8: 0x920200da  lbu         $v0, 0xDA($s0)
    ctx->pc = 0x13eda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 218)));
    // 0x13edac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EDACu;
    {
        const bool branch_taken_0x13edac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDACu;
        // 0x13edb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edac) {
            ctx->pc = 0x13EDBCu;
            return;
        }
    }
    ctx->pc = 0x13EDB4u;
    // 0x13edb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13EDB4u;
    {
        const bool branch_taken_0x13edb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13edb4) {
            ctx->pc = 0x13EDF8u;
            return;
        }
    }
    ctx->pc = 0x13EDBCu;
}
