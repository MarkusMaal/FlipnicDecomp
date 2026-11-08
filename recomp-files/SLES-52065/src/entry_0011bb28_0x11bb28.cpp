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

// Function: entry_0011bb28
// Address: 0x11bb28 - 0x11bb84
void entry_0011bb28_0x11bb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bb28_0x11bb28");
#endif

    switch (ctx->pc) {
        case 0x11bb38u: goto label_11bb38;
        case 0x11bb44u: goto label_11bb44;
        case 0x11bb5cu: goto label_11bb5c;
        case 0x11bb70u: goto label_11bb70;
        default: break;
    }

    ctx->pc = 0x11bb28u;

    // 0x11bb28: 0x460fff2  bltz        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x11BB28u;
    {
        const bool branch_taken_0x11bb28 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x11BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB28u;
        // 0x11bb2c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb28) {
            ctx->pc = 0x11BAF4u;
            return;
        }
    }
    ctx->pc = 0x11BB30u;
    // 0x11bb30: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11BB30u;
    SET_GPR_U32(ctx, 31, 0x11BB38u);
    ctx->pc = 0x11BB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB30u;
    // 0x11bb34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11BB30u, 0x11BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB38u;
label_11bb38:
    // 0x11bb38: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11bb3c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11BB3Cu;
    SET_GPR_U32(ctx, 31, 0x11BB44u);
    ctx->pc = 0x11BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB3Cu;
    // 0x11bb40: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11BB3Cu, 0x11BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB44u;
label_11bb44:
    // 0x11bb44: 0xae020524  sw          $v0, 0x524($s0)
    ctx->pc = 0x11bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 2));
    // 0x11bb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb4c: 0x8e060524  lw          $a2, 0x524($s0)
    ctx->pc = 0x11bb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
    // 0x11bb50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb54: 0xc047948  jal         func_11E520
    ctx->pc = 0x11BB54u;
    SET_GPR_U32(ctx, 31, 0x11BB5Cu);
    ctx->pc = 0x11BB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB54u;
    // 0x11bb58: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E520u, 0x11BB54u, 0x11BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB5Cu;
label_11bb5c:
    // 0x11bb5c: 0x8e050524  lw          $a1, 0x524($s0)
    ctx->pc = 0x11bb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
    // 0x11bb60: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11bb60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11bb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb68: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11BB68u;
    SET_GPR_U32(ctx, 31, 0x11BB70u);
    ctx->pc = 0x11BB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB68u;
    // 0x11bb6c: 0x24c6e750  addiu       $a2, $a2, -0x18B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11BB68u, 0x11BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB70u;
label_11bb70:
    // 0x11bb70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bb74: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BB74u;
    {
        const bool branch_taken_0x11bb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11bb74) {
            ctx->pc = 0x11BB84u;
            return;
        }
    }
    ctx->pc = 0x11BB7Cu;
    // 0x11bb7c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11BB7Cu;
    {
        const bool branch_taken_0x11bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB7Cu;
        // 0x11bb80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb7c) {
            ctx->pc = 0x11BBDCu;
            return;
        }
    }
    ctx->pc = 0x11BB84u;
}
