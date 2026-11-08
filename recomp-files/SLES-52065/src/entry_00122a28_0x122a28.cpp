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

// Function: entry_00122a28
// Address: 0x122a28 - 0x122a74
void entry_00122a28_0x122a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122a28_0x122a28");
#endif

    switch (ctx->pc) {
        case 0x122a38u: goto label_122a38;
        case 0x122a44u: goto label_122a44;
        case 0x122a50u: goto label_122a50;
        case 0x122a68u: goto label_122a68;
        default: break;
    }

    ctx->pc = 0x122a28u;

    // 0x122a28: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x122A28u;
    {
        const bool branch_taken_0x122a28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A28u;
        // 0x122a2c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a28) {
            ctx->pc = 0x122A74u;
            return;
        }
    }
    ctx->pc = 0x122A30u;
    // 0x122a30: 0xc048880  jal         func_122200
    ctx->pc = 0x122A30u;
    SET_GPR_U32(ctx, 31, 0x122A38u);
    ctx->pc = 0x122A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A30u;
    // 0x122a34: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x122A30u, 0x122A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A38u;
label_122a38:
    // 0x122a38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a3c: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x122A3Cu;
    SET_GPR_U32(ctx, 31, 0x122A44u);
    ctx->pc = 0x122A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A3Cu;
    // 0x122a40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x122A3Cu, 0x122A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A44u;
label_122a44:
    // 0x122a44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x122a44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a48: 0xc048880  jal         func_122200
    ctx->pc = 0x122A48u;
    SET_GPR_U32(ctx, 31, 0x122A50u);
    ctx->pc = 0x122A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A48u;
    // 0x122a4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x122A48u, 0x122A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A50u;
label_122a50:
    // 0x122a50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x122a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a54: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x122a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a58: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x122a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x122a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a60: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x122A60u;
    SET_GPR_U32(ctx, 31, 0x122A68u);
    ctx->pc = 0x122A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A60u;
    // 0x122a64: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x122A60u, 0x122A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A68u;
label_122a68:
    // 0x122a68: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x122A68u;
    {
        const bool branch_taken_0x122a68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x122a68) {
            ctx->pc = 0x122A9Cu;
            return;
        }
    }
    ctx->pc = 0x122A70u;
    // 0x122a70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x122a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x122a74u;
}
