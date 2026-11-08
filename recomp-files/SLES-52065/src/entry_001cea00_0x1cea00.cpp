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

// Function: entry_001cea00
// Address: 0x1cea00 - 0x1cea8c
void entry_001cea00_0x1cea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cea00_0x1cea00");
#endif

    switch (ctx->pc) {
        case 0x1cea08u: goto label_1cea08;
        case 0x1cea14u: goto label_1cea14;
        case 0x1cea20u: goto label_1cea20;
        case 0x1cea2cu: goto label_1cea2c;
        case 0x1cea3cu: goto label_1cea3c;
        case 0x1cea54u: goto label_1cea54;
        case 0x1cea7cu: goto label_1cea7c;
        default: break;
    }

    ctx->pc = 0x1cea00u;

    // 0x1cea00: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CEA00u;
    SET_GPR_U32(ctx, 31, 0x1CEA08u);
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CEA00u, 0x1CEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA08u;
label_1cea08:
    // 0x1cea08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cea08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea0c: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1CEA0Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA14u);
    ctx->pc = 0x1CEA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA0Cu;
    // 0x1cea10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1CEA0Cu, 0x1CEA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA14u;
label_1cea14:
    // 0x1cea14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cea14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea18: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CEA18u;
    SET_GPR_U32(ctx, 31, 0x1CEA20u);
    ctx->pc = 0x1CEA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA18u;
    // 0x1cea1c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CEA18u, 0x1CEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA20u;
label_1cea20:
    // 0x1cea20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea24: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1CEA24u;
    SET_GPR_U32(ctx, 31, 0x1CEA2Cu);
    ctx->pc = 0x1CEA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA24u;
    // 0x1cea28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1CEA24u, 0x1CEA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA2Cu;
label_1cea2c:
    // 0x1cea2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cea2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea30: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1cea30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cea34: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CEA34u;
    SET_GPR_U32(ctx, 31, 0x1CEA3Cu);
    ctx->pc = 0x1CEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA34u;
    // 0x1cea38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CEA34u, 0x1CEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA3Cu;
label_1cea3c:
    // 0x1cea3c: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cea40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cea40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1cea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cea48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cea48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cea4c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CEA4Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA54u);
    ctx->pc = 0x1CEA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA4Cu;
    // 0x1cea50: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CEA4Cu, 0x1CEA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA54u;
label_1cea54:
    // 0x1cea54: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1cea54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cea58: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1cea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1cea5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cea60: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1cea60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1cea64: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1cea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1cea68: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CEA68u;
    {
        const bool branch_taken_0x1cea68 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1cea68) {
            ctx->pc = 0x1CEA9Cu;
            return;
        }
    }
    ctx->pc = 0x1CEA70u;
    // 0x1cea70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cea74: 0xc064208  jal         func_190820
    ctx->pc = 0x1CEA74u;
    SET_GPR_U32(ctx, 31, 0x1CEA7Cu);
    ctx->pc = 0x1CEA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA74u;
    // 0x1cea78: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190820u, 0x1CEA74u, 0x1CEA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA7Cu;
label_1cea7c:
    // 0x1cea7c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cea7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cea80: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1cea80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cea84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEA84u;
    {
        const bool branch_taken_0x1cea84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA84u;
        // 0x1cea88: 0xfc400028  sd          $zero, 0x28($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea84) {
            ctx->pc = 0x1CEA9Cu;
            return;
        }
    }
    ctx->pc = 0x1CEA8Cu;
}
