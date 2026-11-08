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

// Function: entry_00128c14
// Address: 0x128c14 - 0x128c38
void entry_00128c14_0x128c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128c14_0x128c14");
#endif

    switch (ctx->pc) {
        case 0x128c28u: goto label_128c28;
        default: break;
    }

    ctx->pc = 0x128c14u;

label_128c14:
    // 0x128c14: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x128c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x128c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c1c: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x128c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x128c20: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x128C20u;
    SET_GPR_U32(ctx, 31, 0x128C28u);
    ctx->pc = 0x128C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C20u;
    // 0x128c24: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x128C20u, 0x128C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C28u;
label_128c28:
    // 0x128c28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x128c28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x128c2c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x128c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x128c30: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x128C30u;
    {
        const bool branch_taken_0x128c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C30u;
        // 0x128c34: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c30) {
            ctx->pc = 0x128C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128c14;
        }
    }
    ctx->pc = 0x128C38u;
}
