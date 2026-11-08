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

// Function: entry_001d48c0
// Address: 0x1d48c0 - 0x1d48f8
void entry_001d48c0_0x1d48c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d48c0_0x1d48c0");
#endif

    switch (ctx->pc) {
        case 0x1d48e0u: goto label_1d48e0;
        case 0x1d48e8u: goto label_1d48e8;
        case 0x1d48f4u: goto label_1d48f4;
        default: break;
    }

    ctx->pc = 0x1d48c0u;

    // 0x1d48c0: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1D48C0u;
    {
        const bool branch_taken_0x1d48c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48C0u;
        // 0x1d48c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48c0) {
            ctx->pc = 0x1D48F8u;
            return;
        }
    }
    ctx->pc = 0x1D48C8u;
    // 0x1d48c8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1d48c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d48cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d48d0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1d48d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1d48d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d48d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48d8: 0xc0750c6  jal         func_1D4318
    ctx->pc = 0x1D48D8u;
    SET_GPR_U32(ctx, 31, 0x1D48E0u);
    ctx->pc = 0x1D48DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48D8u;
    // 0x1d48dc: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4318u, 0x1D48D8u, 0x1D48E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48E0u;
label_1d48e0:
    // 0x1d48e0: 0xc0750a2  jal         func_1D4288
    ctx->pc = 0x1D48E0u;
    SET_GPR_U32(ctx, 31, 0x1D48E8u);
    ctx->pc = 0x1D48E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48E0u;
    // 0x1d48e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4288u, 0x1D48E0u, 0x1D48E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48E8u;
label_1d48e8:
    // 0x1d48e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d48e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48ec: 0xc0750da  jal         func_1D4368
    ctx->pc = 0x1D48ECu;
    SET_GPR_U32(ctx, 31, 0x1D48F4u);
    ctx->pc = 0x1D48F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48ECu;
    // 0x1d48f0: 0x8e2502d0  lw          $a1, 0x2D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4368u, 0x1D48ECu, 0x1D48F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48F4u;
label_1d48f4:
    // 0x1d48f4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1d48f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x1d48f8u;
}
