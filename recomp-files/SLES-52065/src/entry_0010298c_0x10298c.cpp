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

// Function: entry_0010298c
// Address: 0x10298c - 0x1029cc
void entry_0010298c_0x10298c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010298c_0x10298c");
#endif

    switch (ctx->pc) {
        case 0x1029bcu: goto label_1029bc;
        default: break;
    }

    ctx->pc = 0x10298cu;

    // 0x10298c: 0x0  nop
    ctx->pc = 0x10298cu;
    // NOP
    // 0x102990: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102994: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x102998: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x10299c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1029a0: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1029a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1029a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1029a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1029a8: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x1029a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
    // 0x1029ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1029acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1029b0: 0x8c540034  lw          $s4, 0x34($v0)
    ctx->pc = 0x1029b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1029b4: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1029B4u;
    SET_GPR_U32(ctx, 31, 0x1029BCu);
    ctx->pc = 0x1029B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1029B4u;
    // 0x1029b8: 0x24a5e098  addiu       $a1, $a1, -0x1F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1029B4u, 0x1029BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1029BCu;
label_1029bc:
    // 0x1029bc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1029BCu;
    {
        const bool branch_taken_0x1029bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1029bc) {
            ctx->pc = 0x1029CCu;
            return;
        }
    }
    ctx->pc = 0x1029C4u;
    // 0x1029c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1029C4u;
    {
        const bool branch_taken_0x1029c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1029c4) {
            ctx->pc = 0x1029D0u;
            return;
        }
    }
    ctx->pc = 0x1029CCu;
}
