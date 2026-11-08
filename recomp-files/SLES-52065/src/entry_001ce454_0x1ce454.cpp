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

// Function: entry_001ce454
// Address: 0x1ce454 - 0x1ce4b8
void entry_001ce454_0x1ce454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce454_0x1ce454");
#endif

    switch (ctx->pc) {
        case 0x1ce480u: goto label_1ce480;
        case 0x1ce494u: goto label_1ce494;
        case 0x1ce4acu: goto label_1ce4ac;
        case 0x1ce4b4u: goto label_1ce4b4;
        default: break;
    }

    ctx->pc = 0x1ce454u;

    // 0x1ce454: 0x8ea20064  lw          $v0, 0x64($s5)
    ctx->pc = 0x1ce454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1ce458: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce45c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ce45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ce460: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1ce460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ce464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ce464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce468: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x1ce468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ce46c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ce46cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce470: 0x26aa0064  addiu       $t2, $s5, 0x64
    ctx->pc = 0x1ce470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    // 0x1ce474: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ce474u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce478: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CE478u;
    SET_GPR_U32(ctx, 31, 0x1CE480u);
    ctx->pc = 0x1CE47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE478u;
    // 0x1ce47c: 0xaea20068  sw          $v0, 0x68($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CE478u, 0x1CE480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE480u;
label_1ce480:
    // 0x1ce480: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce484: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ce484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ce488: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1ce488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ce48c: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1CE48Cu;
    SET_GPR_U32(ctx, 31, 0x1CE494u);
    ctx->pc = 0x1CE490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE48Cu;
    // 0x1ce490: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1CE48Cu, 0x1CE494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE494u;
label_1ce494:
    // 0x1ce494: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE494u;
    {
        const bool branch_taken_0x1ce494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE494u;
        // 0x1ce498: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce494) {
            ctx->pc = 0x1CE4B8u;
            return;
        }
    }
    ctx->pc = 0x1CE49Cu;
    // 0x1ce49c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ce4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce4a4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE4A4u;
    SET_GPR_U32(ctx, 31, 0x1CE4ACu);
    ctx->pc = 0x1CE4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4A4u;
    // 0x1ce4a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE4A4u, 0x1CE4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4ACu;
label_1ce4ac:
    // 0x1ce4ac: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CE4ACu;
    SET_GPR_U32(ctx, 31, 0x1CE4B4u);
    ctx->pc = 0x1CE4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4ACu;
    // 0x1ce4b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CE4ACu, 0x1CE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4B4u;
label_1ce4b4:
    // 0x1ce4b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ce4b8u;
}
