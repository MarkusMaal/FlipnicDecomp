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

// Function: entry_0018db08
// Address: 0x18db08 - 0x18db4c
void entry_0018db08_0x18db08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018db08_0x18db08");
#endif

    switch (ctx->pc) {
        case 0x18db14u: goto label_18db14;
        case 0x18db40u: goto label_18db40;
        default: break;
    }

    ctx->pc = 0x18db08u;

    // 0x18db08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18db08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18db0c: 0xc05f878  jal         func_17E1E0
    ctx->pc = 0x18DB0Cu;
    SET_GPR_U32(ctx, 31, 0x18DB14u);
    ctx->pc = 0x18DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB0Cu;
    // 0x18db10: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18DB0Cu, 0x18DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB14u;
label_18db14:
    // 0x18db14: 0x8e260450  lw          $a2, 0x450($s1)
    ctx->pc = 0x18db14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18db18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18db18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db1c: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18db20: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18db20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18db24: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x18db24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18db28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18db28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18db2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18db30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18db30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18db34: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18db38: 0xc0532f4  jal         func_14CBD0
    ctx->pc = 0x18DB38u;
    SET_GPR_U32(ctx, 31, 0x18DB40u);
    ctx->pc = 0x18DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB38u;
    // 0x18db3c: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18DB38u, 0x18DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB40u;
label_18db40:
    // 0x18db40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18db40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db44: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18DB44u;
    SET_GPR_U32(ctx, 31, 0x18DB4Cu);
    ctx->pc = 0x18DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB44u;
    // 0x18db48: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DB44u, 0x18DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB4Cu;
}
