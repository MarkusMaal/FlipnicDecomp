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

// Function: entry_001dfaf0
// Address: 0x1dfaf0 - 0x1dfb10
void entry_001dfaf0_0x1dfaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfaf0_0x1dfaf0");
#endif

    switch (ctx->pc) {
        case 0x1dfb08u: goto label_1dfb08;
        default: break;
    }

    ctx->pc = 0x1dfaf0u;

    // 0x1dfaf0: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x1dfaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1dfaf4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1dfaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1dfaf8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dfaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dfafc: 0xdc849f30  ld          $a0, -0x60D0($a0)
    ctx->pc = 0x1dfafcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294942512)));
    // 0x1dfb00: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1DFB00u;
    SET_GPR_U32(ctx, 31, 0x1DFB08u);
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1DFB00u, 0x1DFB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB08u;
label_1dfb08:
    // 0x1dfb08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFB08u;
    {
        const bool branch_taken_0x1dfb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB08u;
        // 0x1dfb0c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb08) {
            ctx->pc = 0x1DFB14u;
            return;
        }
    }
    ctx->pc = 0x1DFB10u;
}
