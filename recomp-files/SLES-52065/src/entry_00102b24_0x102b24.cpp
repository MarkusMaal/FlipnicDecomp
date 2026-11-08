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

// Function: entry_00102b24
// Address: 0x102b24 - 0x102b64
void entry_00102b24_0x102b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102b24_0x102b24");
#endif

    switch (ctx->pc) {
        case 0x102b54u: goto label_102b54;
        default: break;
    }

    ctx->pc = 0x102b24u;

    // 0x102b24: 0x0  nop
    ctx->pc = 0x102b24u;
    // NOP
    // 0x102b28: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102b2c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x102b30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102b34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x102b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x102b38: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x102b3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102b40: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
    // 0x102b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102b48: 0x8c540038  lw          $s4, 0x38($v0)
    ctx->pc = 0x102b48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x102b4c: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x102B4Cu;
    SET_GPR_U32(ctx, 31, 0x102B54u);
    ctx->pc = 0x102B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B4Cu;
    // 0x102b50: 0x24a5e0a8  addiu       $a1, $a1, -0x1F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102B4Cu, 0x102B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B54u;
label_102b54:
    // 0x102b54: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102B54u;
    {
        const bool branch_taken_0x102b54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x102b54) {
            ctx->pc = 0x102B64u;
            return;
        }
    }
    ctx->pc = 0x102B5Cu;
    // 0x102b5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x102B5Cu;
    {
        const bool branch_taken_0x102b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102b5c) {
            ctx->pc = 0x102B68u;
            return;
        }
    }
    ctx->pc = 0x102B64u;
}
