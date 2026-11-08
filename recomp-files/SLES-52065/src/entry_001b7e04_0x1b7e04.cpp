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

// Function: entry_001b7e04
// Address: 0x1b7e04 - 0x1b7e68
void entry_001b7e04_0x1b7e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7e04_0x1b7e04");
#endif

    switch (ctx->pc) {
        case 0x1b7e0cu: goto label_1b7e0c;
        case 0x1b7e28u: goto label_1b7e28;
        case 0x1b7e34u: goto label_1b7e34;
        case 0x1b7e3cu: goto label_1b7e3c;
        case 0x1b7e50u: goto label_1b7e50;
        case 0x1b7e64u: goto label_1b7e64;
        default: break;
    }

    ctx->pc = 0x1b7e04u;

    // 0x1b7e04: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7E04u;
    SET_GPR_U32(ctx, 31, 0x1B7E0Cu);
    ctx->pc = 0x1B7E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E04u;
    // 0x1b7e08: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7E04u, 0x1B7E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E0Cu;
label_1b7e0c:
    // 0x1b7e0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b7e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7e10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7e14: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x1b7e14u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7e18: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b7e1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b7e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7e20: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1B7E20u;
    SET_GPR_U32(ctx, 31, 0x1B7E28u);
    ctx->pc = 0x1B7E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E20u;
    // 0x1b7e24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1B7E20u, 0x1B7E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E28u;
label_1b7e28:
    // 0x1b7e28: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1b7e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7e2c: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1B7E2Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E34u);
    ctx->pc = 0x1B7E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E2Cu;
    // 0x1b7e30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1B7E2Cu, 0x1B7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E34u;
label_1b7e34:
    // 0x1b7e34: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7E34u;
    SET_GPR_U32(ctx, 31, 0x1B7E3Cu);
    ctx->pc = 0x1B7E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E34u;
    // 0x1b7e38: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7E34u, 0x1B7E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E3Cu;
label_1b7e3c:
    // 0x1b7e3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7e40: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b7e44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b7e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7e48: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1B7E48u;
    SET_GPR_U32(ctx, 31, 0x1B7E50u);
    ctx->pc = 0x1B7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E48u;
    // 0x1b7e4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1B7E48u, 0x1B7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E50u;
label_1b7e50:
    // 0x1b7e50: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1b7e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1b7e54: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1b7e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b7e58: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x1b7e58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b7e5c: 0xc06e73c  jal         func_1B9CF0
    ctx->pc = 0x1B7E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E64u);
    ctx->pc = 0x1B7E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E5Cu;
    // 0x1b7e60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CF0u, 0x1B7E5Cu, 0x1B7E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E64u;
label_1b7e64:
    // 0x1b7e64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b7e68u;
}
