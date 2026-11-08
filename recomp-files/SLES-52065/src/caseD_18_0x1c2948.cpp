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

// Function: caseD_18
// Address: 0x1c2948 - 0x1c2964
void caseD_18_0x1c2948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x1c2948");
#endif

    switch (ctx->pc) {
        case 0x1c2958u: goto label_1c2958;
        default: break;
    }

    ctx->pc = 0x1c2948u;

    // 0x1c2948: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c294c: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2950: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C2950u;
    SET_GPR_U32(ctx, 31, 0x1C2958u);
    ctx->pc = 0x1C2954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2950u;
    // 0x1c2954: 0x24a51a70  addiu       $a1, $a1, 0x1A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C2950u, 0x1C2958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2958u;
label_1c2958:
    // 0x1c2958: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1c2958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c295c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x1C295Cu;
    {
        const bool branch_taken_0x1c295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C295Cu;
        // 0x1c2960: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c295c) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2964u;
}
