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

// Function: entry_0019d068
// Address: 0x19d068 - 0x19d090
void entry_0019d068_0x19d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d068_0x19d068");
#endif

    switch (ctx->pc) {
        case 0x19d078u: goto label_19d078;
        case 0x19d08cu: goto label_19d08c;
        default: break;
    }

    ctx->pc = 0x19d068u;

label_19d068:
    // 0x19d068: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x19d068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d06c:
    // 0x19d06c: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x19d06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_19d070:
    // 0x19d070: 0x320f809  jalr        $t9
label_19d074:
    if (ctx->pc == 0x19D074u) {
        ctx->pc = 0x19D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D070u;
        // 0x19d074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D078u;
        goto label_19d078;
    }
    ctx->pc = 0x19D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19D078u);
        ctx->pc = 0x19D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D070u;
        // 0x19d074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D070u, 0x19D078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D078u;
label_19d078:
    // 0x19d078: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19d07c:
    if (ctx->pc == 0x19D07Cu) {
        ctx->pc = 0x19D080u;
        goto label_19d080;
    }
    ctx->pc = 0x19D078u;
    {
        const bool branch_taken_0x19d078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d078) {
            ctx->pc = 0x19D090u;
            return;
        }
    }
    ctx->pc = 0x19D080u;
label_19d080:
    // 0x19d080: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19d080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19d084:
    // 0x19d084: 0xc064c0c  jal         func_193030
label_19d088:
    if (ctx->pc == 0x19D088u) {
        ctx->pc = 0x19D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D084u;
        // 0x19d088: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D08Cu;
        goto label_19d08c;
    }
    ctx->pc = 0x19D084u;
    SET_GPR_U32(ctx, 31, 0x19D08Cu);
    ctx->pc = 0x19D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D084u;
    // 0x19d088: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x19D084u, 0x19D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D08Cu;
label_19d08c:
    // 0x19d08c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x19d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x19d090u;
}
