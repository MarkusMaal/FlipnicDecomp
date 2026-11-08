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

// Function: entry_001519d8
// Address: 0x1519d8 - 0x151a24
void entry_001519d8_0x1519d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001519d8_0x1519d8");
#endif

    switch (ctx->pc) {
        case 0x1519e8u: goto label_1519e8;
        case 0x1519f8u: goto label_1519f8;
        case 0x151a08u: goto label_151a08;
        default: break;
    }

    ctx->pc = 0x1519d8u;

label_1519d8:
    // 0x1519d8: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1519d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1519dc:
    // 0x1519dc: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1519dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1519e0:
    // 0x1519e0: 0x320f809  jalr        $t9
label_1519e4:
    if (ctx->pc == 0x1519E4u) {
        ctx->pc = 0x1519E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519E0u;
        // 0x1519e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519E8u;
        goto label_1519e8;
    }
    ctx->pc = 0x1519E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1519E8u);
        ctx->pc = 0x1519E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519E0u;
        // 0x1519e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1519E0u, 0x1519E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1519E8u;
label_1519e8:
    // 0x1519e8: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1519e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1519ec:
    // 0x1519ec: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x1519ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_1519f0:
    // 0x1519f0: 0x320f809  jalr        $t9
label_1519f4:
    if (ctx->pc == 0x1519F4u) {
        ctx->pc = 0x1519F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519F0u;
        // 0x1519f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519F8u;
        goto label_1519f8;
    }
    ctx->pc = 0x1519F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1519F8u);
        ctx->pc = 0x1519F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519F0u;
        // 0x1519f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1519F0u, 0x1519F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1519F8u;
label_1519f8:
    // 0x1519f8: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1519f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1519fc:
    // 0x1519fc: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x1519fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_151a00:
    // 0x151a00: 0x320f809  jalr        $t9
label_151a04:
    if (ctx->pc == 0x151A04u) {
        ctx->pc = 0x151A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A00u;
        // 0x151a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A08u;
        goto label_151a08;
    }
    ctx->pc = 0x151A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151A08u);
        ctx->pc = 0x151A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A00u;
        // 0x151a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151A00u, 0x151A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151A08u;
label_151a08:
    // 0x151a08: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x151a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_151a0c:
    // 0x151a0c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_151a10:
    if (ctx->pc == 0x151A10u) {
        ctx->pc = 0x151A14u;
        goto label_151a14;
    }
    ctx->pc = 0x151A0Cu;
    {
        const bool branch_taken_0x151a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151a0c) {
            ctx->pc = 0x151A4Cu;
            return;
        }
    }
    ctx->pc = 0x151A14u;
label_151a14:
    // 0x151a14: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_151a18:
    if (ctx->pc == 0x151A18u) {
        ctx->pc = 0x151A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A14u;
        // 0x151a18: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A1Cu;
        goto label_151a1c;
    }
    ctx->pc = 0x151A14u;
    {
        const bool branch_taken_0x151a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A14u;
        // 0x151a18: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151a14) {
            ctx->pc = 0x151A4Cu;
            return;
        }
    }
    ctx->pc = 0x151A1Cu;
label_151a1c:
    // 0x151a1c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_151a20:
    if (ctx->pc == 0x151A20u) {
        ctx->pc = 0x151A24u;
        goto label_fallthrough_0x151a1c;
    }
    ctx->pc = 0x151A1Cu;
    {
        const bool branch_taken_0x151a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x151a1c) {
            ctx->pc = 0x1519D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1519d8;
        }
    }
label_fallthrough_0x151a1c:
    ctx->pc = 0x151A24u;
}
