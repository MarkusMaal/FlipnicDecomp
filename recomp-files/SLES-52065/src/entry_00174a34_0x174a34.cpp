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

// Function: entry_00174a34
// Address: 0x174a34 - 0x174a54
void entry_00174a34_0x174a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174a34_0x174a34");
#endif

    switch (ctx->pc) {
        case 0x174a50u: goto label_174a50;
        default: break;
    }

    ctx->pc = 0x174a34u;

    // 0x174a34: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x174a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x174a38: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A38u;
    {
        const bool branch_taken_0x174a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A38u;
        // 0x174a3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a38) {
            ctx->pc = 0x174A54u;
            return;
        }
    }
    ctx->pc = 0x174A40u;
    // 0x174a40: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x174a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x174a44: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x174a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x174a48: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174A48u;
    SET_GPR_U32(ctx, 31, 0x174A50u);
    ctx->pc = 0x174A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A48u;
    // 0x174a4c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174A48u, 0x174A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A50u;
label_174a50:
    // 0x174a50: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x174a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    ctx->pc = 0x174a54u;
}
