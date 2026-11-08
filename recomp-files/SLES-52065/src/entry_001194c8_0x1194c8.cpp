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

// Function: entry_001194c8
// Address: 0x1194c8 - 0x11952c
void entry_001194c8_0x1194c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001194c8_0x1194c8");
#endif

    switch (ctx->pc) {
        case 0x1194d0u: goto label_1194d0;
        case 0x1194f8u: goto label_1194f8;
        case 0x119514u: goto label_119514;
        default: break;
    }

    ctx->pc = 0x1194c8u;

label_1194c8:
    // 0x1194c8: 0xc04c0e0  jal         func_130380
label_1194cc:
    if (ctx->pc == 0x1194CCu) {
        ctx->pc = 0x1194CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194C8u;
        // 0x1194cc: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1194D0u;
        goto label_1194d0;
    }
    ctx->pc = 0x1194C8u;
    SET_GPR_U32(ctx, 31, 0x1194D0u);
    ctx->pc = 0x1194CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194C8u;
    // 0x1194cc: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x1194C8u, 0x1194D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194D0u;
label_1194d0:
    // 0x1194d0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1194d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1194d4:
    // 0x1194d4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1194d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1194d8:
    // 0x1194d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1194d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1194dc:
    // 0x1194dc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1194dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1194e0:
    // 0x1194e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1194e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1194e4:
    // 0x1194e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1194e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1194e8:
    // 0x1194e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1194e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1194ec:
    // 0x1194ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1194ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1194f0:
    // 0x1194f0: 0x320f809  jalr        $t9
label_1194f4:
    if (ctx->pc == 0x1194F4u) {
        ctx->pc = 0x1194F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194F0u;
        // 0x1194f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1194F8u;
        goto label_1194f8;
    }
    ctx->pc = 0x1194F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1194F8u);
        ctx->pc = 0x1194F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194F0u;
        // 0x1194f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194F0u, 0x1194F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1194F8u;
label_1194f8:
    // 0x1194f8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1194f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1194fc:
    // 0x1194fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1194fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_119500:
    // 0x119500: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119504:
    // 0x119504: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119508:
    // 0x119508: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x119508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_11950c:
    // 0x11950c: 0x320f809  jalr        $t9
label_119510:
    if (ctx->pc == 0x119510u) {
        ctx->pc = 0x119510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11950Cu;
        // 0x119510: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119514u;
        goto label_119514;
    }
    ctx->pc = 0x11950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119514u);
        ctx->pc = 0x119510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11950Cu;
        // 0x119510: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11950Cu, 0x119514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119514u;
label_119514:
    // 0x119514: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x119514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_119518:
    // 0x119518: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x119518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_11951c:
    // 0x11951c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_119520:
    // 0x119520: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x119520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_119524:
    // 0x119524: 0x621ffe8  bgez        $s1, . + 4 + (-0x18 << 2)
label_119528:
    if (ctx->pc == 0x119528u) {
        ctx->pc = 0x119528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119524u;
        // 0x119528: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11952Cu;
        goto label_fallthrough_0x119524;
    }
    ctx->pc = 0x119524u;
    {
        const bool branch_taken_0x119524 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x119528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119524u;
        // 0x119528: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119524) {
            ctx->pc = 0x1194C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1194c8;
        }
    }
label_fallthrough_0x119524:
    ctx->pc = 0x11952Cu;
}
