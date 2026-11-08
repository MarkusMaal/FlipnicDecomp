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

// Function: entry_0010b7d4
// Address: 0x10b7d4 - 0x10b814
void entry_0010b7d4_0x10b7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b7d4_0x10b7d4");
#endif

    switch (ctx->pc) {
        case 0x10b800u: goto label_10b800;
        default: break;
    }

    ctx->pc = 0x10b7d4u;

label_10b7d4:
    // 0x10b7d4: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_10b7d8:
    if (ctx->pc == 0x10B7D8u) {
        ctx->pc = 0x10B7DCu;
        goto label_10b7dc;
    }
    ctx->pc = 0x10B7D4u;
    {
        const bool branch_taken_0x10b7d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b7d4) {
            ctx->pc = 0x10B814u;
            return;
        }
    }
    ctx->pc = 0x10B7DCu;
label_10b7dc:
    // 0x10b7dc: 0x8604024e  lh          $a0, 0x24E($s0)
    ctx->pc = 0x10b7dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 590)));
label_10b7e0:
    // 0x10b7e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10b7e4:
    // 0x10b7e4: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_10b7e8:
    if (ctx->pc == 0x10B7E8u) {
        ctx->pc = 0x10B7ECu;
        goto label_10b7ec;
    }
    ctx->pc = 0x10B7E4u;
    {
        const bool branch_taken_0x10b7e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b7e4) {
            ctx->pc = 0x10B814u;
            return;
        }
    }
    ctx->pc = 0x10B7ECu;
label_10b7ec:
    // 0x10b7ec: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b7ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b7f0:
    // 0x10b7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b7f4:
    // 0x10b7f4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10b7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10b7f8:
    // 0x10b7f8: 0x320f809  jalr        $t9
label_10b7fc:
    if (ctx->pc == 0x10B7FCu) {
        ctx->pc = 0x10B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7F8u;
        // 0x10b7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B800u;
        goto label_10b800;
    }
    ctx->pc = 0x10B7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B800u);
        ctx->pc = 0x10B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7F8u;
        // 0x10b7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B7F8u, 0x10B800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B800u;
label_10b800:
    // 0x10b800: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b804:
    // 0x10b804: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10b804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10b808:
    // 0x10b808: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x10b808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_10b80c:
    // 0x10b80c: 0x320f809  jalr        $t9
label_10b810:
    if (ctx->pc == 0x10B810u) {
        ctx->pc = 0x10B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B80Cu;
        // 0x10b810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B814u;
        goto label_fallthrough_0x10b80c;
    }
    ctx->pc = 0x10B80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B814u);
        ctx->pc = 0x10B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B80Cu;
        // 0x10b810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B80Cu, 0x10B814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10b80c:
    ctx->pc = 0x10B814u;
}
