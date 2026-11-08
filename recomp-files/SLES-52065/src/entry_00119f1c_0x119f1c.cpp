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

// Function: entry_00119f1c
// Address: 0x119f1c - 0x119f40
void entry_00119f1c_0x119f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119f1c_0x119f1c");
#endif

    switch (ctx->pc) {
        case 0x119f30u: goto label_119f30;
        default: break;
    }

    ctx->pc = 0x119f1cu;

    // 0x119f1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x119f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119f20: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119F20u;
    {
        const bool branch_taken_0x119f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x119f20) {
            ctx->pc = 0x119F40u;
            return;
        }
    }
    ctx->pc = 0x119F28u;
    // 0x119f28: 0xc04b220  jal         func_12C880
    ctx->pc = 0x119F28u;
    SET_GPR_U32(ctx, 31, 0x119F30u);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x119F28u, 0x119F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F30u;
label_119f30:
    // 0x119f30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x119f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x119f34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f38: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x119F38u;
    SET_GPR_U32(ctx, 31, 0x119F40u);
    ctx->pc = 0x119F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F38u;
    // 0x119f3c: 0x24a5e618  addiu       $a1, $a1, -0x19E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x119F38u, 0x119F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F40u;
}
