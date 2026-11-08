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

// Function: entry_0010304c
// Address: 0x10304c - 0x103088
void entry_0010304c_0x10304c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010304c_0x10304c");
#endif

    switch (ctx->pc) {
        case 0x103070u: goto label_103070;
        default: break;
    }

    ctx->pc = 0x10304cu;

label_10304c:
    // 0x10304c: 0x0  nop
    ctx->pc = 0x10304cu;
    // NOP
label_103050:
    // 0x103050: 0x86850030  lh          $a1, 0x30($s4)
    ctx->pc = 0x103050u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_103054:
    // 0x103054: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_103058:
    if (ctx->pc == 0x103058u) {
        ctx->pc = 0x10305Cu;
        goto label_10305c;
    }
    ctx->pc = 0x103054u;
    {
        const bool branch_taken_0x103054 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x103054) {
            ctx->pc = 0x103088u;
            return;
        }
    }
    ctx->pc = 0x10305Cu;
label_10305c:
    // 0x10305c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x10305cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_103060:
    // 0x103060: 0x86860032  lh          $a2, 0x32($s4)
    ctx->pc = 0x103060u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
label_103064:
    // 0x103064: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x103064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_103068:
    // 0x103068: 0x320f809  jalr        $t9
label_10306c:
    if (ctx->pc == 0x10306Cu) {
        ctx->pc = 0x10306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103068u;
        // 0x10306c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103070u;
        goto label_103070;
    }
    ctx->pc = 0x103068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103070u);
        ctx->pc = 0x10306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103068u;
        // 0x10306c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103068u, 0x103070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103070u;
label_103070:
    // 0x103070: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x103070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_103074:
    // 0x103074: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_103078:
    // 0x103078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10307c:
    // 0x10307c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x10307cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_103080:
    // 0x103080: 0x320f809  jalr        $t9
label_103084:
    if (ctx->pc == 0x103084u) {
        ctx->pc = 0x103084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103080u;
        // 0x103084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103088u;
        goto label_fallthrough_0x103080;
    }
    ctx->pc = 0x103080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103088u);
        ctx->pc = 0x103084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103080u;
        // 0x103084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103080u, 0x103088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x103080:
    ctx->pc = 0x103088u;
}
