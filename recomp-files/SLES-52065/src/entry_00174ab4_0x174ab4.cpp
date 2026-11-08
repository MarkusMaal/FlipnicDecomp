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

// Function: entry_00174ab4
// Address: 0x174ab4 - 0x174adc
void entry_00174ab4_0x174ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174ab4_0x174ab4");
#endif

    switch (ctx->pc) {
        case 0x174ad4u: goto label_174ad4;
        default: break;
    }

    ctx->pc = 0x174ab4u;

    // 0x174ab4: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x174ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x174ab8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174AB8u;
    {
        const bool branch_taken_0x174ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AB8u;
        // 0x174abc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ab8) {
            ctx->pc = 0x174ADCu;
            return;
        }
    }
    ctx->pc = 0x174AC0u;
    // 0x174ac0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x174ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174ac4: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x174ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x174ac8: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x174ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x174acc: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174ACCu;
    SET_GPR_U32(ctx, 31, 0x174AD4u);
    ctx->pc = 0x174AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174ACCu;
    // 0x174ad0: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174ACCu, 0x174AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AD4u;
label_174ad4:
    // 0x174ad4: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x174ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    // 0x174ad8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x174ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174adcu;
}
