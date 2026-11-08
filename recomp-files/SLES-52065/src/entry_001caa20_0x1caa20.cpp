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

// Function: entry_001caa20
// Address: 0x1caa20 - 0x1caab4
void entry_001caa20_0x1caa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caa20_0x1caa20");
#endif

    switch (ctx->pc) {
        case 0x1caa3cu: goto label_1caa3c;
        case 0x1caa44u: goto label_1caa44;
        case 0x1caa50u: goto label_1caa50;
        case 0x1caa60u: goto label_1caa60;
        case 0x1caa70u: goto label_1caa70;
        case 0x1caa84u: goto label_1caa84;
        case 0x1caa98u: goto label_1caa98;
        case 0x1caab0u: goto label_1caab0;
        default: break;
    }

    ctx->pc = 0x1caa20u;

    // 0x1caa20: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1caa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caa24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1caa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1caa2c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1caa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1caa30: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1caa30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caa34: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAA34u;
    SET_GPR_U32(ctx, 31, 0x1CAA3Cu);
    ctx->pc = 0x1CAA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA34u;
    // 0x1caa38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAA34u, 0x1CAA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA3Cu;
label_1caa3c:
    // 0x1caa3c: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CAA3Cu;
    SET_GPR_U32(ctx, 31, 0x1CAA44u);
    ctx->pc = 0x1CAA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA3Cu;
    // 0x1caa40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CAA3Cu, 0x1CAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA44u;
label_1caa44:
    // 0x1caa44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1caa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caa48: 0xc060894  jal         func_182250
    ctx->pc = 0x1CAA48u;
    SET_GPR_U32(ctx, 31, 0x1CAA50u);
    ctx->pc = 0x1CAA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA48u;
    // 0x1caa4c: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182250u, 0x1CAA48u, 0x1CAA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA50u;
label_1caa50:
    // 0x1caa50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1caa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1caa58: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CAA58u;
    SET_GPR_U32(ctx, 31, 0x1CAA60u);
    ctx->pc = 0x1CAA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA58u;
    // 0x1caa5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CAA58u, 0x1CAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA60u;
label_1caa60:
    // 0x1caa60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa64: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1caa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1caa68: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CAA68u;
    SET_GPR_U32(ctx, 31, 0x1CAA70u);
    ctx->pc = 0x1CAA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA68u;
    // 0x1caa6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CAA68u, 0x1CAA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA70u;
label_1caa70:
    // 0x1caa70: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1caa70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1caa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1caa7c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAA7Cu;
    SET_GPR_U32(ctx, 31, 0x1CAA84u);
    ctx->pc = 0x1CAA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA7Cu;
    // 0x1caa80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAA7Cu, 0x1CAA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA84u;
label_1caa84:
    // 0x1caa84: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1caa84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1caa88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa8c: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1caa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caa90: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAA90u;
    SET_GPR_U32(ctx, 31, 0x1CAA98u);
    ctx->pc = 0x1CAA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA90u;
    // 0x1caa94: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAA90u, 0x1CAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA98u;
label_1caa98:
    // 0x1caa98: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1caa98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1caa9c: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1caa9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1caaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caaa4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1caaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1caaa8: 0xc06dfa0  jal         func_1B7E80
    ctx->pc = 0x1CAAA8u;
    SET_GPR_U32(ctx, 31, 0x1CAAB0u);
    ctx->pc = 0x1CAAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAAA8u;
    // 0x1caaac: 0x24c67540  addiu       $a2, $a2, 0x7540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7E80u, 0x1CAAA8u, 0x1CAAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAAB0u;
label_1caab0:
    // 0x1caab0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1caab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1caab4u;
}
