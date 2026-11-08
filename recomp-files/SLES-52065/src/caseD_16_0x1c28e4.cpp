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

// Function: caseD_16
// Address: 0x1c28e4 - 0x1c2900
void caseD_16_0x1c28e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x1c28e4");
#endif

    switch (ctx->pc) {
        case 0x1c28f4u: goto label_1c28f4;
        default: break;
    }

    ctx->pc = 0x1c28e4u;

    // 0x1c28e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c28e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c28e8: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c28e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c28ec: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C28ECu;
    SET_GPR_U32(ctx, 31, 0x1C28F4u);
    ctx->pc = 0x1C28F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28ECu;
    // 0x1c28f0: 0x24a51a90  addiu       $a1, $a1, 0x1A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C28ECu, 0x1C28F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28F4u;
label_1c28f4:
    // 0x1c28f4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1c28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1c28f8: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x1C28F8u;
    {
        const bool branch_taken_0x1c28f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28F8u;
        // 0x1c28fc: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28f8) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2900u;
}
