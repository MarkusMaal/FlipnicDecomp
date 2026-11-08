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

// Function: entry_001c69d0
// Address: 0x1c69d0 - 0x1c6a48
void entry_001c69d0_0x1c69d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c69d0_0x1c69d0");
#endif

    switch (ctx->pc) {
        case 0x1c69d8u: goto label_1c69d8;
        case 0x1c69fcu: goto label_1c69fc;
        case 0x1c6a18u: goto label_1c6a18;
        case 0x1c6a20u: goto label_1c6a20;
        case 0x1c6a30u: goto label_1c6a30;
        case 0x1c6a38u: goto label_1c6a38;
        case 0x1c6a44u: goto label_1c6a44;
        default: break;
    }

    ctx->pc = 0x1c69d0u;

    // 0x1c69d0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C69D0u;
    SET_GPR_U32(ctx, 31, 0x1C69D8u);
    ctx->pc = 0x1C69D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69D0u;
    // 0x1c69d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C69D0u, 0x1C69D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69D8u;
label_1c69d8:
    // 0x1c69d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c69d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69dc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c69dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c69e0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c69e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c69e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c69e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c69e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c69ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c69ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69f0: 0x260a0064  addiu       $t2, $s0, 0x64
    ctx->pc = 0x1c69f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x1c69f4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C69F4u;
    SET_GPR_U32(ctx, 31, 0x1C69FCu);
    ctx->pc = 0x1C69F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69F4u;
    // 0x1c69f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C69F4u, 0x1C69FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69FCu;
label_1c69fc:
    // 0x1c69fc: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1c69fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c6a00: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c6a04: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C6A04u;
    {
        const bool branch_taken_0x1c6a04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A04u;
        // 0x1c6a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a04) {
            ctx->pc = 0x1C6A48u;
            return;
        }
    }
    ctx->pc = 0x1C6A0Cu;
    // 0x1c6a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a10: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C6A10u;
    SET_GPR_U32(ctx, 31, 0x1C6A18u);
    ctx->pc = 0x1C6A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A10u;
    // 0x1c6a14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C6A10u, 0x1C6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A18u;
label_1c6a18:
    // 0x1c6a18: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C6A18u;
    SET_GPR_U32(ctx, 31, 0x1C6A20u);
    ctx->pc = 0x1C6A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A18u;
    // 0x1c6a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C6A18u, 0x1C6A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A20u;
label_1c6a20:
    // 0x1c6a20: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c6a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c6a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a28: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C6A28u;
    SET_GPR_U32(ctx, 31, 0x1C6A30u);
    ctx->pc = 0x1C6A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A28u;
    // 0x1c6a2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C6A28u, 0x1C6A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A30u;
label_1c6a30:
    // 0x1c6a30: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C6A30u;
    SET_GPR_U32(ctx, 31, 0x1C6A38u);
    ctx->pc = 0x1C6A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A30u;
    // 0x1c6a34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C6A30u, 0x1C6A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A38u;
label_1c6a38:
    // 0x1c6a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a3c: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C6A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A44u);
    ctx->pc = 0x1C6A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A3Cu;
    // 0x1c6a40: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C6A3Cu, 0x1C6A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A44u;
label_1c6a44:
    // 0x1c6a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c6a48u;
}
