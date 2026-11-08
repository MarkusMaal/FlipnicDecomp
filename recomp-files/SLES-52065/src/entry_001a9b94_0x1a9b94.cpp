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

// Function: entry_001a9b94
// Address: 0x1a9b94 - 0x1a9bf4
void entry_001a9b94_0x1a9b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9b94_0x1a9b94");
#endif

    switch (ctx->pc) {
        case 0x1a9bd8u: goto label_1a9bd8;
        default: break;
    }

    ctx->pc = 0x1a9b94u;

    // 0x1a9b94: 0x0  nop
    ctx->pc = 0x1a9b94u;
    // NOP
    // 0x1a9b98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9b9c: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A9B9Cu;
    {
        const bool branch_taken_0x1a9b9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9b9c) {
            ctx->pc = 0x1A9BF4u;
            return;
        }
    }
    ctx->pc = 0x1A9BA4u;
    // 0x1a9ba4: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1a9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x1a9ba8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a9ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9bac: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a9bb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9bb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9bb8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a9bbc: 0xa04501d3  sb          $a1, 0x1D3($v0)
    ctx->pc = 0x1a9bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a9bc0: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1a9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x1a9bc4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a9bc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9bcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9bd0: 0xc042570  jal         func_1095C0
    ctx->pc = 0x1A9BD0u;
    SET_GPR_U32(ctx, 31, 0x1A9BD8u);
    ctx->pc = 0x1A9BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9BD0u;
    // 0x1a9bd4: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A9BD0u, 0x1A9BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BD8u;
label_1a9bd8:
    // 0x1a9bd8: 0x8e83067c  lw          $v1, 0x67C($s4)
    ctx->pc = 0x1a9bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
    // 0x1a9bdc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a9be0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9be8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a9bec: 0xc042570  jal         func_1095C0
    ctx->pc = 0x1A9BECu;
    SET_GPR_U32(ctx, 31, 0x1A9BF4u);
    ctx->pc = 0x1A9BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9BECu;
    // 0x1a9bf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A9BECu, 0x1A9BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BF4u;
}
