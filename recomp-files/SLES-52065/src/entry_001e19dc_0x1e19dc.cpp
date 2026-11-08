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

// Function: entry_001e19dc
// Address: 0x1e19dc - 0x1e1a70
void entry_001e19dc_0x1e19dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e19dc_0x1e19dc");
#endif

    switch (ctx->pc) {
        case 0x1e1a38u: goto label_1e1a38;
        case 0x1e1a54u: goto label_1e1a54;
        default: break;
    }

    ctx->pc = 0x1e19dcu;

label_1e19dc:
    // 0x1e19dc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e19dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e19e0:
    // 0x1e19e0: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1e19e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_1e19e4:
    // 0x1e19e4: 0x8c22b4a0  lw          $v0, -0x4B60($at)
    ctx->pc = 0x1e19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948000)));
label_1e19e8:
    // 0x1e19e8: 0x24e7b510  addiu       $a3, $a3, -0x4AF0
    ctx->pc = 0x1e19e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948112));
label_1e19ec:
    // 0x1e19ec: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e19ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e19f0:
    // 0x1e19f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e19f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e19f4:
    // 0x1e19f4: 0x2484b7d0  addiu       $a0, $a0, -0x4830
    ctx->pc = 0x1e19f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948816));
label_1e19f8:
    // 0x1e19f8: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1e19f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
label_1e19fc:
    // 0x1e19fc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e19fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1a00:
    // 0x1e1a00: 0x8c22b5d0  lw          $v0, -0x4A30($at)
    ctx->pc = 0x1e1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948304)));
label_1e1a04:
    // 0x1e1a04: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1e1a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
label_1e1a08:
    // 0x1e1a08: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1a0c:
    // 0x1e1a0c: 0x8c23b5d0  lw          $v1, -0x4A30($at)
    ctx->pc = 0x1e1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948304)));
label_1e1a10:
    // 0x1e1a10: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x1e1a10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1e1a14:
    // 0x1e1a14: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1a18:
    // 0x1e1a18: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1e1a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1e1a1c:
    // 0x1e1a1c: 0xa4620038  sh          $v0, 0x38($v1)
    ctx->pc = 0x1e1a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e1a20:
    // 0x1e1a20: 0x8c22b570  lw          $v0, -0x4A90($at)
    ctx->pc = 0x1e1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948208)));
label_1e1a24:
    // 0x1e1a24: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1e1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
label_1e1a28:
    // 0x1e1a28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1a2c:
    // 0x1e1a2c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e1a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e1a30:
    // 0x1e1a30: 0x320f809  jalr        $t9
label_1e1a34:
    if (ctx->pc == 0x1E1A34u) {
        ctx->pc = 0x1E1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A30u;
        // 0x1e1a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A38u;
        goto label_1e1a38;
    }
    ctx->pc = 0x1E1A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1A38u);
        ctx->pc = 0x1E1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A30u;
        // 0x1e1a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A30u, 0x1E1A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1A38u;
label_1e1a38:
    // 0x1e1a38: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1a3c:
    // 0x1e1a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a40:
    // 0x1e1a40: 0x2484b830  addiu       $a0, $a0, -0x47D0
    ctx->pc = 0x1e1a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948912));
label_1e1a44:
    // 0x1e1a44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1a48:
    // 0x1e1a48: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e1a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e1a4c:
    // 0x1e1a4c: 0x320f809  jalr        $t9
label_1e1a50:
    if (ctx->pc == 0x1E1A50u) {
        ctx->pc = 0x1E1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A4Cu;
        // 0x1e1a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A54u;
        goto label_1e1a54;
    }
    ctx->pc = 0x1E1A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1A54u);
        ctx->pc = 0x1E1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A4Cu;
        // 0x1e1a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A4Cu, 0x1E1A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1A54u;
label_1e1a54:
    // 0x1e1a54: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1a58:
    // 0x1e1a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a5c:
    // 0x1e1a5c: 0x2484b890  addiu       $a0, $a0, -0x4770
    ctx->pc = 0x1e1a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
label_1e1a60:
    // 0x1e1a60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1a64:
    // 0x1e1a64: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e1a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e1a68:
    // 0x1e1a68: 0x320f809  jalr        $t9
label_1e1a6c:
    if (ctx->pc == 0x1E1A6Cu) {
        ctx->pc = 0x1E1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A68u;
        // 0x1e1a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A70u;
        goto label_fallthrough_0x1e1a68;
    }
    ctx->pc = 0x1E1A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1A70u);
        ctx->pc = 0x1E1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A68u;
        // 0x1e1a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A68u, 0x1E1A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1e1a68:
    ctx->pc = 0x1E1A70u;
}
