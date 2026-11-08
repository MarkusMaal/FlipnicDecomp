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

// Function: entry_001b7ce4
// Address: 0x1b7ce4 - 0x1b7d20
void entry_001b7ce4_0x1b7ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7ce4_0x1b7ce4");
#endif

    switch (ctx->pc) {
        case 0x1b7cecu: goto label_1b7cec;
        case 0x1b7d08u: goto label_1b7d08;
        case 0x1b7d1cu: goto label_1b7d1c;
        default: break;
    }

    ctx->pc = 0x1b7ce4u;

    // 0x1b7ce4: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7CE4u;
    SET_GPR_U32(ctx, 31, 0x1B7CECu);
    ctx->pc = 0x1B7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CE4u;
    // 0x1b7ce8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7CE4u, 0x1B7CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CECu;
label_1b7cec:
    // 0x1b7cec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7cf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7cf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b7cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7cf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7cfc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7d00: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1B7D00u;
    SET_GPR_U32(ctx, 31, 0x1B7D08u);
    ctx->pc = 0x1B7D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D00u;
    // 0x1b7d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1B7D00u, 0x1B7D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D08u;
label_1b7d08:
    // 0x1b7d08: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b7d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b7d0c: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x1b7d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7d10: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x1b7d10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7d14: 0xc06ea38  jal         func_1BA8E0
    ctx->pc = 0x1B7D14u;
    SET_GPR_U32(ctx, 31, 0x1B7D1Cu);
    ctx->pc = 0x1B7D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D14u;
    // 0x1b7d18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA8E0u, 0x1B7D14u, 0x1B7D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D1Cu;
label_1b7d1c:
    // 0x1b7d1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b7d20u;
}
