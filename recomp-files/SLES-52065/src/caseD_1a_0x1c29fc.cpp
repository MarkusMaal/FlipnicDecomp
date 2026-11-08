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

// Function: caseD_1a
// Address: 0x1c29fc - 0x1c2a18
void caseD_1a_0x1c29fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1a_0x1c29fc");
#endif

    switch (ctx->pc) {
        case 0x1c2a0cu: goto label_1c2a0c;
        default: break;
    }

    ctx->pc = 0x1c29fcu;

    // 0x1c29fc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c29fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2a00: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2a04: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C2A04u;
    SET_GPR_U32(ctx, 31, 0x1C2A0Cu);
    ctx->pc = 0x1C2A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A04u;
    // 0x1c2a08: 0x24a51a38  addiu       $a1, $a1, 0x1A38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C2A04u, 0x1C2A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A0Cu;
label_1c2a0c:
    // 0x1c2a0c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1c2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c2a10: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1C2A10u;
    {
        const bool branch_taken_0x1c2a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A10u;
        // 0x1c2a14: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a10) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2A18u;
}
