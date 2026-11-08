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

// Function: entry_0017da30
// Address: 0x17da30 - 0x17da78
void entry_0017da30_0x17da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017da30_0x17da30");
#endif

    switch (ctx->pc) {
        case 0x17da54u: goto label_17da54;
        case 0x17da70u: goto label_17da70;
        default: break;
    }

    ctx->pc = 0x17da30u;

    // 0x17da30: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17DA30u;
    {
        const bool branch_taken_0x17da30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17da30) {
            ctx->pc = 0x17DA78u;
            return;
        }
    }
    ctx->pc = 0x17DA38u;
    // 0x17da38: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x17da3c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17da3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17da40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17da40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17da44: 0x24a5f8f0  addiu       $a1, $a1, -0x710
    ctx->pc = 0x17da44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965488));
    // 0x17da48: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17da48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17da4c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x17DA4Cu;
    SET_GPR_U32(ctx, 31, 0x17DA54u);
    ctx->pc = 0x17DA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA4Cu;
    // 0x17da50: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DA4Cu, 0x17DA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA54u;
label_17da54:
    // 0x17da54: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x17da58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17da58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17da5c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x17da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x17da60: 0x24a5f8f0  addiu       $a1, $a1, -0x710
    ctx->pc = 0x17da60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965488));
    // 0x17da64: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17da64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17da68: 0xc0805c8  jal         func_201720
    ctx->pc = 0x17DA68u;
    SET_GPR_U32(ctx, 31, 0x17DA70u);
    ctx->pc = 0x17DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA68u;
    // 0x17da6c: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DA68u, 0x17DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA70u;
label_17da70:
    // 0x17da70: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17DA70u;
    {
        const bool branch_taken_0x17da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA70u;
        // 0x17da74: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da70) {
            ctx->pc = 0x17DAB4u;
            return;
        }
    }
    ctx->pc = 0x17DA78u;
}
