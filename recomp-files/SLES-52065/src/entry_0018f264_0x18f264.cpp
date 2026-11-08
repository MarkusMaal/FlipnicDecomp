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

// Function: entry_0018f264
// Address: 0x18f264 - 0x18f28c
void entry_0018f264_0x18f264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f264_0x18f264");
#endif

    switch (ctx->pc) {
        case 0x18f280u: goto label_18f280;
        case 0x18f288u: goto label_18f288;
        default: break;
    }

    ctx->pc = 0x18f264u;

label_18f264:
    // 0x18f264: 0x0  nop
    ctx->pc = 0x18f264u;
    // NOP
label_18f268:
    // 0x18f268: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x18f268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_18f26c:
    // 0x18f26c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f270:
    // 0x18f270: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18f270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18f274:
    // 0x18f274: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x18f274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_18f278:
    // 0x18f278: 0x320f809  jalr        $t9
label_18f27c:
    if (ctx->pc == 0x18F27Cu) {
        ctx->pc = 0x18F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F278u;
        // 0x18f27c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F280u;
        goto label_18f280;
    }
    ctx->pc = 0x18F278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18F280u);
        ctx->pc = 0x18F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F278u;
        // 0x18f27c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F278u, 0x18F280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F280u;
label_18f280:
    // 0x18f280: 0xc063bd4  jal         func_18EF50
label_18f284:
    if (ctx->pc == 0x18F284u) {
        ctx->pc = 0x18F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F280u;
        // 0x18f284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F288u;
        goto label_18f288;
    }
    ctx->pc = 0x18F280u;
    SET_GPR_U32(ctx, 31, 0x18F288u);
    ctx->pc = 0x18F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F280u;
    // 0x18f284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EF50u, 0x18F280u, 0x18F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F288u;
label_18f288:
    // 0x18f288: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18f288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x18f28cu;
}
