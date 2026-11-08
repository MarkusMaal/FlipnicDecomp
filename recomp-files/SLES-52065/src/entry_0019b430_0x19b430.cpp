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

// Function: entry_0019b430
// Address: 0x19b430 - 0x19b478
void entry_0019b430_0x19b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b430_0x19b430");
#endif

    switch (ctx->pc) {
        case 0x19b458u: goto label_19b458;
        case 0x19b470u: goto label_19b470;
        default: break;
    }

    ctx->pc = 0x19b430u;

label_19b430:
    // 0x19b430: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
label_19b434:
    if (ctx->pc == 0x19B434u) {
        ctx->pc = 0x19B438u;
        goto label_19b438;
    }
    ctx->pc = 0x19B430u;
    {
        const bool branch_taken_0x19b430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b430) {
            ctx->pc = 0x19B500u;
            return;
        }
    }
    ctx->pc = 0x19B438u;
label_19b438:
    // 0x19b438: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x19b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_19b43c:
    // 0x19b43c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_19b440:
    if (ctx->pc == 0x19B440u) {
        ctx->pc = 0x19B444u;
        goto label_19b444;
    }
    ctx->pc = 0x19B43Cu;
    {
        const bool branch_taken_0x19b43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b43c) {
            ctx->pc = 0x19B478u;
            return;
        }
    }
    ctx->pc = 0x19B444u;
label_19b444:
    // 0x19b444: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b448:
    // 0x19b448: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b44c:
    // 0x19b44c: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x19b44cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19b450:
    // 0x19b450: 0x320f809  jalr        $t9
label_19b454:
    if (ctx->pc == 0x19B454u) {
        ctx->pc = 0x19B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B450u;
        // 0x19b454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B458u;
        goto label_19b458;
    }
    ctx->pc = 0x19B450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B458u);
        ctx->pc = 0x19B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B450u;
        // 0x19b454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B450u, 0x19B458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B458u;
label_19b458:
    // 0x19b458: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b45c:
    // 0x19b45c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b460:
    // 0x19b460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b464:
    // 0x19b464: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19b464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19b468:
    // 0x19b468: 0x320f809  jalr        $t9
label_19b46c:
    if (ctx->pc == 0x19B46Cu) {
        ctx->pc = 0x19B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B468u;
        // 0x19b46c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B470u;
        goto label_19b470;
    }
    ctx->pc = 0x19B468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B470u);
        ctx->pc = 0x19B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B468u;
        // 0x19b46c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B468u, 0x19B470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B470u;
label_19b470:
    // 0x19b470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b474:
    // 0x19b474: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x19b474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    ctx->pc = 0x19b478u;
}
