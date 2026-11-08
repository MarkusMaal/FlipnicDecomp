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

// Function: FUN_00207ff8
// Address: 0x207ff8 - 0x208050
void FUN_00207ff8_0x207ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00207ff8_0x207ff8");
#endif

    switch (ctx->pc) {
        case 0x208018u: goto label_208018;
        case 0x208028u: goto label_208028;
        case 0x208038u: goto label_208038;
        case 0x208040u: goto label_208040;
        default: break;
    }

    ctx->pc = 0x207ff8u;

    // 0x207ff8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x207ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x207ffc: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x207ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x208000: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x208000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x208004: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x208004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x208008: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x208008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x20800c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x20800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x208010: 0xc081f46  jal         func_207D18
    ctx->pc = 0x208010u;
    SET_GPR_U32(ctx, 31, 0x208018u);
    ctx->pc = 0x208014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208010u;
    // 0x208014: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x208010u, 0x208018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208018u;
label_208018:
    // 0x208018: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x208018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20801c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x20801cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x208020: 0xc081f46  jal         func_207D18
    ctx->pc = 0x208020u;
    SET_GPR_U32(ctx, 31, 0x208028u);
    ctx->pc = 0x208024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208020u;
    // 0x208024: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x208020u, 0x208028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208028u;
label_208028:
    // 0x208028: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20802c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x20802cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x208030: 0xc081f6e  jal         func_207DB8
    ctx->pc = 0x208030u;
    SET_GPR_U32(ctx, 31, 0x208038u);
    ctx->pc = 0x208034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208030u;
    // 0x208034: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207DB8u, 0x208030u, 0x208038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208038u;
label_208038:
    // 0x208038: 0xc081efa  jal         func_207BE8
    ctx->pc = 0x208038u;
    SET_GPR_U32(ctx, 31, 0x208040u);
    ctx->pc = 0x20803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208038u;
    // 0x20803c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BE8u, 0x208038u, 0x208040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208040u;
label_208040:
    // 0x208040: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x208040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x208044: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x208044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x208048: 0x3e00008  jr          $ra
    ctx->pc = 0x208048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208048u;
        // 0x20804c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208050u;
}
