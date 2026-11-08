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

// Function: entry_001cb05c
// Address: 0x1cb05c - 0x1cb094
void entry_001cb05c_0x1cb05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb05c_0x1cb05c");
#endif

    switch (ctx->pc) {
        case 0x1cb084u: goto label_1cb084;
        case 0x1cb08cu: goto label_1cb08c;
        default: break;
    }

    ctx->pc = 0x1cb05cu;

    // 0x1cb05c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1cb05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1cb060: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB060u;
    {
        const bool branch_taken_0x1cb060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB060u;
        // 0x1cb064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb060) {
            ctx->pc = 0x1CB0ACu;
            return;
        }
    }
    ctx->pc = 0x1CB068u;
    // 0x1cb068: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1cb068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cb06c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB06Cu;
    {
        const bool branch_taken_0x1cb06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB06Cu;
        // 0x1cb070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb06c) {
            ctx->pc = 0x1CB094u;
            return;
        }
    }
    ctx->pc = 0x1CB074u;
    // 0x1cb074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb078: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb07c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB07Cu;
    SET_GPR_U32(ctx, 31, 0x1CB084u);
    ctx->pc = 0x1CB080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB07Cu;
    // 0x1cb080: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB07Cu, 0x1CB084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB084u;
label_1cb084:
    // 0x1cb084: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CB084u;
    SET_GPR_U32(ctx, 31, 0x1CB08Cu);
    ctx->pc = 0x1CB088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB084u;
    // 0x1cb088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CB084u, 0x1CB08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB08Cu;
label_1cb08c:
    // 0x1cb08c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB08Cu;
    {
        const bool branch_taken_0x1cb08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb08c) {
            ctx->pc = 0x1CB0A8u;
            return;
        }
    }
    ctx->pc = 0x1CB094u;
}
