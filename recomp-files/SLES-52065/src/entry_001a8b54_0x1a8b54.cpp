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

// Function: entry_001a8b54
// Address: 0x1a8b54 - 0x1a8bb4
void entry_001a8b54_0x1a8b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8b54_0x1a8b54");
#endif

    switch (ctx->pc) {
        case 0x1a8b6cu: goto label_1a8b6c;
        case 0x1a8b98u: goto label_1a8b98;
        default: break;
    }

    ctx->pc = 0x1a8b54u;

label_1a8b54:
    // 0x1a8b54: 0x26840a90  addiu       $a0, $s4, 0xA90
    ctx->pc = 0x1a8b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2704));
    // 0x1a8b58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a8b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a8b5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b64: 0xc069bec  jal         func_1A6FB0
    ctx->pc = 0x1A8B64u;
    SET_GPR_U32(ctx, 31, 0x1A8B6Cu);
    ctx->pc = 0x1A8B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B64u;
    // 0x1a8b68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB0u, 0x1A8B64u, 0x1A8B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B6Cu;
label_1a8b6c:
    // 0x1a8b6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a8b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a8b70: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1a8b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a8b74: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A8B74u;
    {
        const bool branch_taken_0x1a8b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B74u;
        // 0x1a8b78: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b74) {
            ctx->pc = 0x1A8B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8b54;
        }
    }
    ctx->pc = 0x1A8B7Cu;
    // 0x1a8b7c: 0x8e8209b4  lw          $v0, 0x9B4($s4)
    ctx->pc = 0x1a8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
    // 0x1a8b80: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x1a8b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x1a8b84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8b8c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1a8b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a8b90: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A8B90u;
    SET_GPR_U32(ctx, 31, 0x1A8B98u);
    ctx->pc = 0x1A8B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B90u;
    // 0x1a8b94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A8B90u, 0x1A8B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B98u;
label_1a8b98:
    // 0x1a8b98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8b9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a8b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ba0: 0xae820ae4  sw          $v0, 0xAE4($s4)
    ctx->pc = 0x1a8ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2788), GPR_U32(ctx, 2));
    // 0x1a8ba4: 0xae800ae8  sw          $zero, 0xAE8($s4)
    ctx->pc = 0x1a8ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2792), GPR_U32(ctx, 0));
    // 0x1a8ba8: 0xae800aec  sw          $zero, 0xAEC($s4)
    ctx->pc = 0x1a8ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2796), GPR_U32(ctx, 0));
    // 0x1a8bac: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A8BACu;
    SET_GPR_U32(ctx, 31, 0x1A8BB4u);
    ctx->pc = 0x1A8BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8BACu;
    // 0x1a8bb0: 0xae800af0  sw          $zero, 0xAF0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 2800), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A8BACu, 0x1A8BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8BB4u;
}
