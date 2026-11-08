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

// Function: caseD_1e
// Address: 0x1c2abc - 0x1c2ad8
void caseD_1e_0x1c2abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1e_0x1c2abc");
#endif

    switch (ctx->pc) {
        case 0x1c2accu: goto label_1c2acc;
        default: break;
    }

    ctx->pc = 0x1c2abcu;

    // 0x1c2abc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2ac0: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2ac4: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C2AC4u;
    SET_GPR_U32(ctx, 31, 0x1C2ACCu);
    ctx->pc = 0x1C2AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AC4u;
    // 0x1c2ac8: 0x24a51a70  addiu       $a1, $a1, 0x1A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C2AC4u, 0x1C2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2ACCu;
label_1c2acc:
    // 0x1c2acc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1c2accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c2ad0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1C2AD0u;
    {
        const bool branch_taken_0x1c2ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AD0u;
        // 0x1c2ad4: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ad0) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2AD8u;
}
