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

// Function: entry_0018b8ec
// Address: 0x18b8ec - 0x18b930
void entry_0018b8ec_0x18b8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b8ec_0x18b8ec");
#endif

    switch (ctx->pc) {
        case 0x18b8f4u: goto label_18b8f4;
        default: break;
    }

    ctx->pc = 0x18b8ecu;

label_18b8ec:
    // 0x18b8ec: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x18B8ECu;
    SET_GPR_U32(ctx, 31, 0x18B8F4u);
    ctx->pc = 0x18B8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B8ECu;
    // 0x18b8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x18B8ECu, 0x18B8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B8F4u;
label_18b8f4:
    // 0x18b8f4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x18b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x18b8f8: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x18b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x18b8fc: 0xae02040c  sw          $v0, 0x40C($s0)
    ctx->pc = 0x18b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 2));
    // 0x18b900: 0xae000414  sw          $zero, 0x414($s0)
    ctx->pc = 0x18b900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 0));
    // 0x18b904: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x18b904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
    // 0x18b908: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x18b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x18b90c: 0x26100420  addiu       $s0, $s0, 0x420
    ctx->pc = 0x18b90cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    // 0x18b910: 0x24432710  addiu       $v1, $v0, 0x2710
    ctx->pc = 0x18b910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
    // 0x18b914: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x18b914u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18b918: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x18B918u;
    {
        const bool branch_taken_0x18b918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b918) {
            ctx->pc = 0x18B8ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b8ec;
        }
    }
    ctx->pc = 0x18B920u;
    // 0x18b920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b928: 0x3e00008  jr          $ra
    ctx->pc = 0x18B928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B928u;
        // 0x18b92c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B930u;
}
