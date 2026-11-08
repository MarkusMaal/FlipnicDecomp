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

// Function: entry_001e1efc
// Address: 0x1e1efc - 0x1e1f90
void entry_001e1efc_0x1e1efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1efc_0x1e1efc");
#endif

    switch (ctx->pc) {
        case 0x1e1f58u: goto label_1e1f58;
        case 0x1e1f74u: goto label_1e1f74;
        default: break;
    }

    ctx->pc = 0x1e1efcu;

label_1e1efc:
    // 0x1e1efc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1f00:
    // 0x1e1f00: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1e1f00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_1e1f04:
    // 0x1e1f04: 0x8c22b630  lw          $v0, -0x49D0($at)
    ctx->pc = 0x1e1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948400)));
label_1e1f08:
    // 0x1e1f08: 0x24e7b6a0  addiu       $a3, $a3, -0x4960
    ctx->pc = 0x1e1f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948512));
label_1e1f0c:
    // 0x1e1f0c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1f10:
    // 0x1e1f10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f14:
    // 0x1e1f14: 0x2484b8f0  addiu       $a0, $a0, -0x4710
    ctx->pc = 0x1e1f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949104));
label_1e1f18:
    // 0x1e1f18: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1e1f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
label_1e1f1c:
    // 0x1e1f1c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1f20:
    // 0x1e1f20: 0x8c22b760  lw          $v0, -0x48A0($at)
    ctx->pc = 0x1e1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948704)));
label_1e1f24:
    // 0x1e1f24: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1e1f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
label_1e1f28:
    // 0x1e1f28: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1f2c:
    // 0x1e1f2c: 0x8c23b760  lw          $v1, -0x48A0($at)
    ctx->pc = 0x1e1f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948704)));
label_1e1f30:
    // 0x1e1f30: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x1e1f30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1e1f34:
    // 0x1e1f34: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1f38:
    // 0x1e1f38: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1e1f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1e1f3c:
    // 0x1e1f3c: 0xa4620038  sh          $v0, 0x38($v1)
    ctx->pc = 0x1e1f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e1f40:
    // 0x1e1f40: 0x8c22b700  lw          $v0, -0x4900($at)
    ctx->pc = 0x1e1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948608)));
label_1e1f44:
    // 0x1e1f44: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1e1f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
label_1e1f48:
    // 0x1e1f48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1f4c:
    // 0x1e1f4c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e1f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e1f50:
    // 0x1e1f50: 0x320f809  jalr        $t9
label_1e1f54:
    if (ctx->pc == 0x1E1F54u) {
        ctx->pc = 0x1E1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F50u;
        // 0x1e1f54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F58u;
        goto label_1e1f58;
    }
    ctx->pc = 0x1E1F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1F58u);
        ctx->pc = 0x1E1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F50u;
        // 0x1e1f54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F50u, 0x1E1F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1F58u;
label_1e1f58:
    // 0x1e1f58: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1f5c:
    // 0x1e1f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f60:
    // 0x1e1f60: 0x2484b960  addiu       $a0, $a0, -0x46A0
    ctx->pc = 0x1e1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949216));
label_1e1f64:
    // 0x1e1f64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1f68:
    // 0x1e1f68: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e1f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e1f6c:
    // 0x1e1f6c: 0x320f809  jalr        $t9
label_1e1f70:
    if (ctx->pc == 0x1E1F70u) {
        ctx->pc = 0x1E1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F6Cu;
        // 0x1e1f70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F74u;
        goto label_1e1f74;
    }
    ctx->pc = 0x1E1F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1F74u);
        ctx->pc = 0x1E1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F6Cu;
        // 0x1e1f70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F6Cu, 0x1E1F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1F74u;
label_1e1f74:
    // 0x1e1f74: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1f78:
    // 0x1e1f78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f7c:
    // 0x1e1f7c: 0x2484b9d0  addiu       $a0, $a0, -0x4630
    ctx->pc = 0x1e1f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949328));
label_1e1f80:
    // 0x1e1f80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1f84:
    // 0x1e1f84: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e1f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e1f88:
    // 0x1e1f88: 0x320f809  jalr        $t9
label_1e1f8c:
    if (ctx->pc == 0x1E1F8Cu) {
        ctx->pc = 0x1E1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F88u;
        // 0x1e1f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F90u;
        goto label_fallthrough_0x1e1f88;
    }
    ctx->pc = 0x1E1F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1F90u);
        ctx->pc = 0x1E1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F88u;
        // 0x1e1f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F88u, 0x1E1F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1e1f88:
    ctx->pc = 0x1E1F90u;
}
