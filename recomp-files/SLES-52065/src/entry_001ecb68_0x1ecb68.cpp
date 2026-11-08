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

// Function: entry_001ecb68
// Address: 0x1ecb68 - 0x1ecb9c
void entry_001ecb68_0x1ecb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecb68_0x1ecb68");
#endif

    switch (ctx->pc) {
        case 0x1ecb84u: goto label_1ecb84;
        case 0x1ecb94u: goto label_1ecb94;
        default: break;
    }

    ctx->pc = 0x1ecb68u;

    // 0x1ecb68: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1ecb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1ecb6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ecb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ecb70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ecb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ecb74: 0x80c50007  lb          $a1, 0x7($a2)
    ctx->pc = 0x1ecb74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x1ecb78: 0x8ea4c3d0  lw          $a0, -0x3C30($s5)
    ctx->pc = 0x1ecb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951888)));
    // 0x1ecb7c: 0xc07b1bc  jal         func_1EC6F0
    ctx->pc = 0x1ECB7Cu;
    SET_GPR_U32(ctx, 31, 0x1ECB84u);
    ctx->pc = 0x1ECB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB7Cu;
    // 0x1ecb80: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6F0u, 0x1ECB7Cu, 0x1ECB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB84u;
label_1ecb84:
    // 0x1ecb84: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECB84u;
    {
        const bool branch_taken_0x1ecb84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ecb84) {
            ctx->pc = 0x1ECB9Cu;
            return;
        }
    }
    ctx->pc = 0x1ECB8Cu;
    // 0x1ecb8c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1ECB8Cu;
    SET_GPR_U32(ctx, 31, 0x1ECB94u);
    ctx->pc = 0x1ECB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB8Cu;
    // 0x1ecb90: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1ECB8Cu, 0x1ECB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB94u;
label_1ecb94:
    // 0x1ecb94: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1ECB94u;
    {
        const bool branch_taken_0x1ecb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB94u;
        // 0x1ecb98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb94) {
            ctx->pc = 0x1ECBCCu;
            return;
        }
    }
    ctx->pc = 0x1ECB9Cu;
}
