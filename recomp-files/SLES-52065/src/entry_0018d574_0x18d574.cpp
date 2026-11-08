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

// Function: entry_0018d574
// Address: 0x18d574 - 0x18d5a0
void entry_0018d574_0x18d574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d574_0x18d574");
#endif

    switch (ctx->pc) {
        case 0x18d57cu: goto label_18d57c;
        case 0x18d58cu: goto label_18d58c;
        case 0x18d59cu: goto label_18d59c;
        default: break;
    }

    ctx->pc = 0x18d574u;

label_18d574:
    // 0x18d574: 0xc05f878  jal         func_17E1E0
label_18d578:
    if (ctx->pc == 0x18D578u) {
        ctx->pc = 0x18D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D574u;
        // 0x18d578: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D57Cu;
        goto label_18d57c;
    }
    ctx->pc = 0x18D574u;
    SET_GPR_U32(ctx, 31, 0x18D57Cu);
    ctx->pc = 0x18D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D574u;
    // 0x18d578: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18D574u, 0x18D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D57Cu;
label_18d57c:
    // 0x18d57c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18d57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18d580:
    // 0x18d580: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18d580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18d584:
    // 0x18d584: 0x320f809  jalr        $t9
label_18d588:
    if (ctx->pc == 0x18D588u) {
        ctx->pc = 0x18D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D584u;
        // 0x18d588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D58Cu;
        goto label_18d58c;
    }
    ctx->pc = 0x18D584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18D58Cu);
        ctx->pc = 0x18D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D584u;
        // 0x18d588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D584u, 0x18D58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D58Cu;
label_18d58c:
    // 0x18d58c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18d590:
    if (ctx->pc == 0x18D590u) {
        ctx->pc = 0x18D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D58Cu;
        // 0x18d590: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D594u;
        goto label_18d594;
    }
    ctx->pc = 0x18D58Cu;
    {
        const bool branch_taken_0x18d58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D58Cu;
        // 0x18d590: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d58c) {
            ctx->pc = 0x18D5A0u;
            return;
        }
    }
    ctx->pc = 0x18D594u;
label_18d594:
    // 0x18d594: 0xc063e14  jal         func_18F850
label_18d598:
    if (ctx->pc == 0x18D598u) {
        ctx->pc = 0x18D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D594u;
        // 0x18d598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D59Cu;
        goto label_18d59c;
    }
    ctx->pc = 0x18D594u;
    SET_GPR_U32(ctx, 31, 0x18D59Cu);
    ctx->pc = 0x18D598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D594u;
    // 0x18d598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18D594u, 0x18D59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D59Cu;
label_18d59c:
    // 0x18d59c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x18d59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x18d5a0u;
}
