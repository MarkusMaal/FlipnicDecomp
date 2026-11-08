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

// Function: entry_0014c18c
// Address: 0x14c18c - 0x14c1ac
void entry_0014c18c_0x14c18c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c18c_0x14c18c");
#endif

    ctx->pc = 0x14c18cu;

    // 0x14c18c: 0xaf8085d8  sw          $zero, -0x7A28($gp)
    ctx->pc = 0x14c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 0));
    // 0x14c190: 0x266400f8  addiu       $a0, $s3, 0xF8
    ctx->pc = 0x14c190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 248));
    // 0x14c194: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C194u;
    {
        const bool branch_taken_0x14c194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C194u;
        // 0x14c198: 0xae600080  sw          $zero, 0x80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c194) {
            ctx->pc = 0x14C1ACu;
            return;
        }
    }
    ctx->pc = 0x14C19Cu;
    // 0x14c19c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C19Cu;
    {
        const bool branch_taken_0x14c19c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c19c) {
            ctx->pc = 0x14C1ACu;
            return;
        }
    }
    ctx->pc = 0x14C1A4u;
    // 0x14c1a4: 0xc048414  jal         func_121050
    ctx->pc = 0x14C1A4u;
    SET_GPR_U32(ctx, 31, 0x14C1ACu);
    ctx->pc = 0x14C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C1A4u;
    // 0x14c1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x14C1A4u, 0x14C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1ACu;
}
