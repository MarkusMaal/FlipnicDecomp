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

// Function: entry_0018dc5c
// Address: 0x18dc5c - 0x18dcc8
void entry_0018dc5c_0x18dc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dc5c_0x18dc5c");
#endif

    switch (ctx->pc) {
        case 0x18dc9cu: goto label_18dc9c;
        default: break;
    }

    ctx->pc = 0x18dc5cu;

    // 0x18dc5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dc60: 0xae222710  sw          $v0, 0x2710($s1)
    ctx->pc = 0x18dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10000), GPR_U32(ctx, 2));
    // 0x18dc64: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18dc68: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18dc6c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18dc70: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dc74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18dc78: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dc7c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18dc80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18dc84: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x18dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x18dc88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18DC88u;
    {
        const bool branch_taken_0x18dc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC88u;
        // 0x18dc8c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc88) {
            ctx->pc = 0x18DCC8u;
            return;
        }
    }
    ctx->pc = 0x18DC90u;
    // 0x18dc90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18dc94: 0xc05f878  jal         func_17E1E0
    ctx->pc = 0x18DC94u;
    SET_GPR_U32(ctx, 31, 0x18DC9Cu);
    ctx->pc = 0x18DC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC94u;
    // 0x18dc98: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18DC94u, 0x18DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC9Cu;
label_18dc9c:
    // 0x18dc9c: 0x8e260450  lw          $a2, 0x450($s1)
    ctx->pc = 0x18dc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18dca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dca4: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18dca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18dca8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18dcac: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x18dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18dcb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18dcb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dcb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18dcbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18dcc0: 0xc0532f4  jal         func_14CBD0
    ctx->pc = 0x18DCC0u;
    SET_GPR_U32(ctx, 31, 0x18DCC8u);
    ctx->pc = 0x18DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCC0u;
    // 0x18dcc4: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18DCC0u, 0x18DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCC8u;
}
