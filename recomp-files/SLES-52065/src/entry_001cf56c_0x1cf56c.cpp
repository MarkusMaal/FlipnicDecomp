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

// Function: entry_001cf56c
// Address: 0x1cf56c - 0x1cf5bc
void entry_001cf56c_0x1cf56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf56c_0x1cf56c");
#endif

    switch (ctx->pc) {
        case 0x1cf578u: goto label_1cf578;
        case 0x1cf588u: goto label_1cf588;
        case 0x1cf5acu: goto label_1cf5ac;
        default: break;
    }

    ctx->pc = 0x1cf56cu;

label_1cf56c:
    // 0x1cf56c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf570: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CF570u;
    SET_GPR_U32(ctx, 31, 0x1CF578u);
    ctx->pc = 0x1CF574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF570u;
    // 0x1cf574: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CF570u, 0x1CF578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF578u;
label_1cf578:
    // 0x1cf578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf57c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf580: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x1CF580u;
    SET_GPR_U32(ctx, 31, 0x1CF588u);
    ctx->pc = 0x1CF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF580u;
    // 0x1cf584: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D80u, 0x1CF580u, 0x1CF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF588u;
label_1cf588:
    // 0x1cf588: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cf58c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1cf58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cf590: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CF590u;
    {
        const bool branch_taken_0x1cf590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF590u;
        // 0x1cf594: 0x26060005  addiu       $a2, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf590) {
            ctx->pc = 0x1CF56Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf56c;
        }
    }
    ctx->pc = 0x1CF598u;
    // 0x1cf598: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x1cf598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf59c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cf5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf5a4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CF5A4u;
    SET_GPR_U32(ctx, 31, 0x1CF5ACu);
    ctx->pc = 0x1CF5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5A4u;
    // 0x1cf5a8: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CF5A4u, 0x1CF5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5ACu;
label_1cf5ac:
    // 0x1cf5ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cf5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf5b4: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x1CF5B4u;
    SET_GPR_U32(ctx, 31, 0x1CF5BCu);
    ctx->pc = 0x1CF5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5B4u;
    // 0x1cf5b8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D80u, 0x1CF5B4u, 0x1CF5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5BCu;
}
