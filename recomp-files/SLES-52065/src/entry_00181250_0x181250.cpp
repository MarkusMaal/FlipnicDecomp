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

// Function: entry_00181250
// Address: 0x181250 - 0x181280
void entry_00181250_0x181250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181250_0x181250");
#endif

    switch (ctx->pc) {
        case 0x181264u: goto label_181264;
        case 0x18127cu: goto label_18127c;
        default: break;
    }

    ctx->pc = 0x181250u;

label_181250:
    // 0x181250: 0x8e320058  lw          $s2, 0x58($s1)
    ctx->pc = 0x181250u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_181254:
    // 0x181254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181258:
    // 0x181258: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18125c:
    // 0x18125c: 0xc0495c0  jal         func_125700
label_181260:
    if (ctx->pc == 0x181260u) {
        ctx->pc = 0x181260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18125Cu;
        // 0x181260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181264u;
        goto label_181264;
    }
    ctx->pc = 0x18125Cu;
    SET_GPR_U32(ctx, 31, 0x181264u);
    ctx->pc = 0x181260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18125Cu;
    // 0x181260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x18125Cu, 0x181264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181264u;
label_181264:
    // 0x181264: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x181264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_181268:
    // 0x181268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18126c:
    // 0x18126c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18126cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_181270:
    // 0x181270: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x181270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_181274:
    // 0x181274: 0x320f809  jalr        $t9
label_181278:
    if (ctx->pc == 0x181278u) {
        ctx->pc = 0x181278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181274u;
        // 0x181278: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18127Cu;
        goto label_18127c;
    }
    ctx->pc = 0x181274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18127Cu);
        ctx->pc = 0x181278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181274u;
        // 0x181278: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181274u, 0x18127Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18127Cu;
label_18127c:
    // 0x18127c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18127cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x181280u;
}
