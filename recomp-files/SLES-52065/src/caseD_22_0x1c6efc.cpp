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

// Function: caseD_22
// Address: 0x1c6efc - 0x1c6f10
void caseD_22_0x1c6efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_22_0x1c6efc");
#endif

    switch (ctx->pc) {
        case 0x1c6f04u: goto label_1c6f04;
        default: break;
    }

    ctx->pc = 0x1c6efcu;

    // 0x1c6efc: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C6EFCu;
    SET_GPR_U32(ctx, 31, 0x1C6F04u);
    ctx->pc = 0x1C6F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EFCu;
    // 0x1c6f00: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C6EFCu, 0x1C6F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F04u;
label_1c6f04:
    // 0x1c6f04: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1c6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c6f08: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x1C6F08u;
    {
        const bool branch_taken_0x1c6f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F08u;
        // 0x1c6f0c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f08) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6F10u;
}
