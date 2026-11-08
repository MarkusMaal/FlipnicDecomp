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

// Function: entry_001a84bc
// Address: 0x1a84bc - 0x1a8500
void entry_001a84bc_0x1a84bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a84bc_0x1a84bc");
#endif

    switch (ctx->pc) {
        case 0x1a84dcu: goto label_1a84dc;
        default: break;
    }

    ctx->pc = 0x1a84bcu;

    // 0x1a84bc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a84c0: 0x24720670  addiu       $s2, $v1, 0x670
    ctx->pc = 0x1a84c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1648));
    // 0x1a84c4: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a84c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
    // 0x1a84c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a84cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a84d0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a84d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a84d4: 0xc042570  jal         func_1095C0
    ctx->pc = 0x1A84D4u;
    SET_GPR_U32(ctx, 31, 0x1A84DCu);
    ctx->pc = 0x1A84D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84D4u;
    // 0x1a84d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A84D4u, 0x1A84DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84DCu;
label_1a84dc:
    // 0x1a84dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a84e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a84e4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a84e8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1a84e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1a84ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a84ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a84f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a84f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a84f8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a84fc: 0xa04401d3  sb          $a0, 0x1D3($v0)
    ctx->pc = 0x1a84fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a8500u;
}
