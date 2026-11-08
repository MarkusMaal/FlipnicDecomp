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

// Function: entry_00103ab8
// Address: 0x103ab8 - 0x103af8
void entry_00103ab8_0x103ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103ab8_0x103ab8");
#endif

    switch (ctx->pc) {
        case 0x103ac0u: goto label_103ac0;
        case 0x103ad0u: goto label_103ad0;
        default: break;
    }

    ctx->pc = 0x103ab8u;

    // 0x103ab8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103AB8u;
    SET_GPR_U32(ctx, 31, 0x103AC0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103AB8u, 0x103AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103AC0u;
label_103ac0:
    // 0x103ac0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x103AC0u;
    {
        const bool branch_taken_0x103ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AC0u;
        // 0x103ac4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ac0) {
            ctx->pc = 0x103AF8u;
            return;
        }
    }
    ctx->pc = 0x103AC8u;
    // 0x103ac8: 0xc041860  jal         func_106180
    ctx->pc = 0x103AC8u;
    SET_GPR_U32(ctx, 31, 0x103AD0u);
    ctx->pc = 0x103ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AC8u;
    // 0x103acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x103AC8u, 0x103AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103AD0u;
label_103ad0:
    // 0x103ad0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103ad4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103ad8: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x103ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x103adc: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x103adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x103ae0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103ae4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103ae8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103aec: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x103aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x103af0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103af4: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x103af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x103af8u;
}
