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

// Function: entry_0014c1fc
// Address: 0x14c1fc - 0x14c218
void entry_0014c1fc_0x14c1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c1fc_0x14c1fc");
#endif

    ctx->pc = 0x14c1fcu;

    // 0x14c1fc: 0x266400b4  addiu       $a0, $s3, 0xB4
    ctx->pc = 0x14c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 180));
    // 0x14c200: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C200u;
    {
        const bool branch_taken_0x14c200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c200) {
            ctx->pc = 0x14C218u;
            return;
        }
    }
    ctx->pc = 0x14C208u;
    // 0x14c208: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C208u;
    {
        const bool branch_taken_0x14c208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C208u;
        // 0x14c20c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c208) {
            ctx->pc = 0x14C218u;
            return;
        }
    }
    ctx->pc = 0x14C210u;
    // 0x14c210: 0xc048414  jal         func_121050
    ctx->pc = 0x14C210u;
    SET_GPR_U32(ctx, 31, 0x14C218u);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x14C210u, 0x14C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C218u;
}
