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

// Function: entry_001e70b4
// Address: 0x1e70b4 - 0x1e70e0
void entry_001e70b4_0x1e70b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e70b4_0x1e70b4");
#endif

    switch (ctx->pc) {
        case 0x1e70bcu: goto label_1e70bc;
        default: break;
    }

    ctx->pc = 0x1e70b4u;

label_1e70b4:
    // 0x1e70b4: 0xc07a1d0  jal         func_1E8740
    ctx->pc = 0x1E70B4u;
    SET_GPR_U32(ctx, 31, 0x1E70BCu);
    ctx->pc = 0x1E70B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E70B4u;
    // 0x1e70b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8740u, 0x1E70B4u, 0x1E70BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E70BCu;
label_1e70bc:
    // 0x1e70bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e70bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e70c0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1e70c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1e70c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e70c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e70c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E70C8u;
    {
        const bool branch_taken_0x1e70c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e70c8) {
            ctx->pc = 0x1E70E0u;
            return;
        }
    }
    ctx->pc = 0x1E70D0u;
    // 0x1e70d0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e70d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e70d4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1e70d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e70d8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E70D8u;
    {
        const bool branch_taken_0x1e70d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E70D8u;
        // 0x1e70dc: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e70d8) {
            ctx->pc = 0x1E70B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e70b4;
        }
    }
    ctx->pc = 0x1E70E0u;
}
