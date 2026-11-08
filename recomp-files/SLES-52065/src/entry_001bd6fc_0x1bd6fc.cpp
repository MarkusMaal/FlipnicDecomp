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

// Function: entry_001bd6fc
// Address: 0x1bd6fc - 0x1bd72c
void entry_001bd6fc_0x1bd6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd6fc_0x1bd6fc");
#endif

    switch (ctx->pc) {
        case 0x1bd714u: goto label_1bd714;
        case 0x1bd71cu: goto label_1bd71c;
        default: break;
    }

    ctx->pc = 0x1bd6fcu;

    // 0x1bd6fc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1bd6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bd700: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1bd700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bd704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd70c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BD70Cu;
    SET_GPR_U32(ctx, 31, 0x1BD714u);
    ctx->pc = 0x1BD710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD70Cu;
    // 0x1bd710: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BD70Cu, 0x1BD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD714u;
label_1bd714:
    // 0x1bd714: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x1BD714u;
    SET_GPR_U32(ctx, 31, 0x1BD71Cu);
    ctx->pc = 0x1BD718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD714u;
    // 0x1bd718: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x1BD714u, 0x1BD71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD71Cu;
label_1bd71c:
    // 0x1bd71c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1bd71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bd720: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bd720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd724: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1bd724u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bd728: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1bd728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x1bd72cu;
}
