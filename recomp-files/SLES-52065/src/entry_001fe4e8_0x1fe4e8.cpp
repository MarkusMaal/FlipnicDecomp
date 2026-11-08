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

// Function: entry_001fe4e8
// Address: 0x1fe4e8 - 0x1fe520
void entry_001fe4e8_0x1fe4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe4e8_0x1fe4e8");
#endif

    switch (ctx->pc) {
        case 0x1fe50cu: goto label_1fe50c;
        default: break;
    }

    ctx->pc = 0x1fe4e8u;

label_1fe4e8:
    // 0x1fe4e8: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x1fe4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1fe4ec:
    // 0x1fe4ec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1fe4ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1fe4f0:
    // 0x1fe4f0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1fe4f4:
    if (ctx->pc == 0x1FE4F4u) {
        ctx->pc = 0x1FE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4F0u;
        // 0x1fe4f4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4F8u;
        goto label_1fe4f8;
    }
    ctx->pc = 0x1FE4F0u;
    {
        const bool branch_taken_0x1fe4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4f0) {
            ctx->pc = 0x1FE4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE4F0u;
            // 0x1fe4f4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE520u;
            return;
        }
    }
    ctx->pc = 0x1FE4F8u;
label_1fe4f8:
    // 0x1fe4f8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1fe4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1fe4fc:
    // 0x1fe4fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fe4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe500:
    // 0x1fe500: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1fe500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1fe504:
    // 0x1fe504: 0x40f809  jalr        $v0
label_1fe508:
    if (ctx->pc == 0x1FE508u) {
        ctx->pc = 0x1FE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE504u;
        // 0x1fe508: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE50Cu;
        goto label_1fe50c;
    }
    ctx->pc = 0x1FE504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE50Cu);
        ctx->pc = 0x1FE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE504u;
        // 0x1fe508: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE504u, 0x1FE50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE50Cu;
label_1fe50c:
    // 0x1fe50c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe510:
    // 0x1fe510: 0x5a00006d  blezl       $s0, . + 4 + (0x6D << 2)
label_1fe514:
    if (ctx->pc == 0x1FE514u) {
        ctx->pc = 0x1FE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE510u;
        // 0x1fe514: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE518u;
        goto label_1fe518;
    }
    ctx->pc = 0x1FE510u;
    {
        const bool branch_taken_0x1fe510 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1fe510) {
            ctx->pc = 0x1FE514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE510u;
            // 0x1fe514: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE6C8u;
            return;
        }
    }
    ctx->pc = 0x1FE518u;
label_1fe518:
    // 0x1fe518: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fe51c:
    if (ctx->pc == 0x1FE51Cu) {
        ctx->pc = 0x1FE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE518u;
        // 0x1fe51c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE520u;
        goto label_fallthrough_0x1fe518;
    }
    ctx->pc = 0x1FE518u;
    {
        const bool branch_taken_0x1fe518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE518u;
        // 0x1fe51c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe518) {
            ctx->pc = 0x1FE54Cu;
            return;
        }
    }
label_fallthrough_0x1fe518:
    ctx->pc = 0x1FE520u;
}
