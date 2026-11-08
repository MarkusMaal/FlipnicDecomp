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

// Function: entry_0021b018
// Address: 0x21b018 - 0x21b050
void entry_0021b018_0x21b018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b018_0x21b018");
#endif

    switch (ctx->pc) {
        case 0x21b048u: goto label_21b048;
        default: break;
    }

    ctx->pc = 0x21b018u;

label_21b018:
    // 0x21b018: 0x8ec24748  lw          $v0, 0x4748($s6)
    ctx->pc = 0x21b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_21b01c:
    // 0x21b01c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x21b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_21b020:
    // 0x21b020: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21b024:
    // 0x21b024: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_21b028:
    if (ctx->pc == 0x21B028u) {
        ctx->pc = 0x21B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B024u;
        // 0x21b028: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B02Cu;
        goto label_21b02c;
    }
    ctx->pc = 0x21B024u;
    {
        const bool branch_taken_0x21b024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b024) {
            ctx->pc = 0x21B028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B024u;
            // 0x21b028: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B068u;
            return;
        }
    }
    ctx->pc = 0x21B02Cu;
label_21b02c:
    // 0x21b02c: 0x5213000e  beql        $s0, $s3, . + 4 + (0xE << 2)
label_21b030:
    if (ctx->pc == 0x21B030u) {
        ctx->pc = 0x21B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B02Cu;
        // 0x21b030: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B034u;
        goto label_21b034;
    }
    ctx->pc = 0x21B02Cu;
    {
        const bool branch_taken_0x21b02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x21b02c) {
            ctx->pc = 0x21B030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B02Cu;
            // 0x21b030: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B068u;
            return;
        }
    }
    ctx->pc = 0x21B034u;
label_21b034:
    // 0x21b034: 0x145e0006  bne         $v0, $fp, . + 4 + (0x6 << 2)
label_21b038:
    if (ctx->pc == 0x21B038u) {
        ctx->pc = 0x21B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B034u;
        // 0x21b038: 0x8ee24744  lw          $v0, 0x4744($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B03Cu;
        goto label_21b03c;
    }
    ctx->pc = 0x21B034u;
    {
        const bool branch_taken_0x21b034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x21B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B034u;
        // 0x21b038: 0x8ee24744  lw          $v0, 0x4744($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b034) {
            ctx->pc = 0x21B050u;
            return;
        }
    }
    ctx->pc = 0x21B03Cu;
label_21b03c:
    // 0x21b03c: 0x8e424740  lw          $v0, 0x4740($s2)
    ctx->pc = 0x21b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18240)));
label_21b040:
    // 0x21b040: 0x40f809  jalr        $v0
label_21b044:
    if (ctx->pc == 0x21B044u) {
        ctx->pc = 0x21B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B040u;
        // 0x21b044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B048u;
        goto label_21b048;
    }
    ctx->pc = 0x21B040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B048u);
        ctx->pc = 0x21B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B040u;
        // 0x21b044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B040u, 0x21B048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B048u;
label_21b048:
    // 0x21b048: 0x10000007  b           . + 4 + (0x7 << 2)
label_21b04c:
    if (ctx->pc == 0x21B04Cu) {
        ctx->pc = 0x21B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B048u;
        // 0x21b04c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B050u;
        goto label_fallthrough_0x21b048;
    }
    ctx->pc = 0x21B048u;
    {
        const bool branch_taken_0x21b048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B048u;
        // 0x21b04c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b048) {
            ctx->pc = 0x21B068u;
            return;
        }
    }
label_fallthrough_0x21b048:
    ctx->pc = 0x21B050u;
}
