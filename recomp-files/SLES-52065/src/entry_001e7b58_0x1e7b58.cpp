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

// Function: entry_001e7b58
// Address: 0x1e7b58 - 0x1e7bd4
void entry_001e7b58_0x1e7b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7b58_0x1e7b58");
#endif

    switch (ctx->pc) {
        case 0x1e7b94u: goto label_1e7b94;
        case 0x1e7b9cu: goto label_1e7b9c;
        case 0x1e7bc8u: goto label_1e7bc8;
        default: break;
    }

    ctx->pc = 0x1e7b58u;

    // 0x1e7b58: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e7b5c: 0x27d40168  addiu       $s4, $fp, 0x168
    ctx->pc = 0x1e7b5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 360));
    // 0x1e7b60: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x1e7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x1e7b64: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e7b68: 0xafc20168  sw          $v0, 0x168($fp)
    ctx->pc = 0x1e7b68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 360), GPR_U32(ctx, 2));
    // 0x1e7b6c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e7b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e7b70: 0xafd40188  sw          $s4, 0x188($fp)
    ctx->pc = 0x1e7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 392), GPR_U32(ctx, 20));
    // 0x1e7b74: 0x2463c320  addiu       $v1, $v1, -0x3CE0
    ctx->pc = 0x1e7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951712));
    // 0x1e7b78: 0x8fc20188  lw          $v0, 0x188($fp)
    ctx->pc = 0x1e7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 392)));
    // 0x1e7b7c: 0x24843ed0  addiu       $a0, $a0, 0x3ED0
    ctx->pc = 0x1e7b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16080));
    // 0x1e7b80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e7b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e7b84: 0x8fc20188  lw          $v0, 0x188($fp)
    ctx->pc = 0x1e7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 392)));
    // 0x1e7b88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e7b8c: 0xc080748  jal         func_201D20
    ctx->pc = 0x1E7B8Cu;
    SET_GPR_U32(ctx, 31, 0x1E7B94u);
    ctx->pc = 0x1E7B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B8Cu;
    // 0x1e7b90: 0xafc2018c  sw          $v0, 0x18C($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1E7B8Cu, 0x1E7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B94u;
label_1e7b94:
    // 0x1e7b94: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1E7B94u;
    SET_GPR_U32(ctx, 31, 0x1E7B9Cu);
    ctx->pc = 0x1E7B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B94u;
    // 0x1e7b98: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1E7B94u, 0x1E7B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B9Cu;
label_1e7b9c:
    // 0x1e7b9c: 0x8fc3018c  lw          $v1, 0x18C($fp)
    ctx->pc = 0x1e7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e7ba0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e7ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e7ba4: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e7ba8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e7ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e7bac: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e7bb0: 0xafdd0164  sw          $sp, 0x164($fp)
    ctx->pc = 0x1e7bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 356), GPR_U32(ctx, 29));
    // 0x1e7bb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e7bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7bb8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E7BB8u;
    {
        const bool branch_taken_0x1e7bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BB8u;
        // 0x1e7bbc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bb8) {
            ctx->pc = 0x1E7C0Cu;
            return;
        }
    }
    ctx->pc = 0x1E7BC0u;
    // 0x1e7bc0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E7BC0u;
    SET_GPR_U32(ctx, 31, 0x1E7BC8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E7BC0u, 0x1E7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BC8u;
label_1e7bc8:
    // 0x1e7bc8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7BC8u;
    {
        const bool branch_taken_0x1e7bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BC8u;
        // 0x1e7bcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bc8) {
            ctx->pc = 0x1E7BD4u;
            return;
        }
    }
    ctx->pc = 0x1E7BD0u;
    // 0x1e7bd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e7bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1e7bd4u;
}
