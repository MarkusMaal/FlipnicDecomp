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

// Function: entry_0012b448
// Address: 0x12b448 - 0x12b470
void entry_0012b448_0x12b448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b448_0x12b448");
#endif

    switch (ctx->pc) {
        case 0x12b460u: goto label_12b460;
        default: break;
    }

    ctx->pc = 0x12b448u;

label_12b448:
    // 0x12b448: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x12b448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_12b44c:
    // 0x12b44c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12b44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b450:
    // 0x12b450: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12b450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12b454:
    // 0x12b454: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x12b454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_12b458:
    // 0x12b458: 0x320f809  jalr        $t9
label_12b45c:
    if (ctx->pc == 0x12B45Cu) {
        ctx->pc = 0x12B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B458u;
        // 0x12b45c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B460u;
        goto label_12b460;
    }
    ctx->pc = 0x12B458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B460u);
        ctx->pc = 0x12B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B458u;
        // 0x12b45c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B458u, 0x12B460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B460u;
label_12b460:
    // 0x12b460: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12b460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_12b464:
    // 0x12b464: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_12b468:
    if (ctx->pc == 0x12B468u) {
        ctx->pc = 0x12B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B464u;
        // 0x12b468: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B46Cu;
        goto label_12b46c;
    }
    ctx->pc = 0x12B464u;
    {
        const bool branch_taken_0x12b464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B464u;
        // 0x12b468: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b464) {
            ctx->pc = 0x12B49Cu;
            return;
        }
    }
    ctx->pc = 0x12B46Cu;
label_12b46c:
    // 0x12b46c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12b46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12b470u;
}
