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

// Function: entry_00149274
// Address: 0x149274 - 0x1492a4
void entry_00149274_0x149274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149274_0x149274");
#endif

    switch (ctx->pc) {
        case 0x14928cu: goto label_14928c;
        case 0x149294u: goto label_149294;
        default: break;
    }

    ctx->pc = 0x149274u;

    // 0x149274: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x149274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x149278: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x149278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14927c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14927cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149284: 0xc0401a4  jal         func_100690
    ctx->pc = 0x149284u;
    SET_GPR_U32(ctx, 31, 0x14928Cu);
    ctx->pc = 0x149288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149284u;
    // 0x149288: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x149284u, 0x14928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14928Cu;
label_14928c:
    // 0x14928c: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x14928Cu;
    SET_GPR_U32(ctx, 31, 0x149294u);
    ctx->pc = 0x149290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14928Cu;
    // 0x149290: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x14928Cu, 0x149294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149294u;
label_149294:
    // 0x149294: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x149294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x149298: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x149298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14929c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14929cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1492a0: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x1492a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x1492a4u;
}
