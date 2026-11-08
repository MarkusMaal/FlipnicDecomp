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

// Function: entry_00122b38
// Address: 0x122b38 - 0x122b94
void entry_00122b38_0x122b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122b38_0x122b38");
#endif

    switch (ctx->pc) {
        case 0x122b6cu: goto label_122b6c;
        case 0x122b8cu: goto label_122b8c;
        default: break;
    }

    ctx->pc = 0x122b38u;

    // 0x122b38: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x122b38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x122b3c: 0x2328023  subu        $s0, $s1, $s2
    ctx->pc = 0x122b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x122b40: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x122b40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122b44: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x122B44u;
    {
        const bool branch_taken_0x122b44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B44u;
        // 0x122b48: 0x26030003  addiu       $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b44) {
            ctx->pc = 0x122B98u;
            return;
        }
    }
    ctx->pc = 0x122B4Cu;
    // 0x122b4c: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x122b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x122b50: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x122b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x122b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122b58: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x122b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x122b5c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x122b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x122b60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x122b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x122b64: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122B64u;
    SET_GPR_U32(ctx, 31, 0x122B6Cu);
    ctx->pc = 0x122B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B64u;
    // 0x122b68: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122B64u, 0x122B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B6Cu;
label_122b6c:
    // 0x122b6c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x122b6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b70: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x122B70u;
    {
        const bool branch_taken_0x122b70 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x122B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B70u;
        // 0x122b74: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b70) {
            ctx->pc = 0x122B94u;
            return;
        }
    }
    ctx->pc = 0x122B78u;
    // 0x122b78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122b7c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122b80: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122b84: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122B84u;
    SET_GPR_U32(ctx, 31, 0x122B8Cu);
    ctx->pc = 0x122B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B84u;
    // 0x122b88: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122B84u, 0x122B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B8Cu;
label_122b8c:
    // 0x122b8c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122B8Cu;
    SET_GPR_U32(ctx, 31, 0x122B94u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122B8Cu, 0x122B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B94u;
}
