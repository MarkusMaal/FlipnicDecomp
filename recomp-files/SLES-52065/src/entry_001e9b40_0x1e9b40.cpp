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

// Function: entry_001e9b40
// Address: 0x1e9b40 - 0x1e9ba4
void entry_001e9b40_0x1e9b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9b40_0x1e9b40");
#endif

    switch (ctx->pc) {
        case 0x1e9b5cu: goto label_1e9b5c;
        case 0x1e9b9cu: goto label_1e9b9c;
        default: break;
    }

    ctx->pc = 0x1e9b40u;

    // 0x1e9b40: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E9B40u;
    {
        const bool branch_taken_0x1e9b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b40) {
            ctx->pc = 0x1E9BB8u;
            return;
        }
    }
    ctx->pc = 0x1E9B48u;
    // 0x1e9b48: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1e9b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9b4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e9b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e9b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b54: 0xc07a7f0  jal         func_1E9FC0
    ctx->pc = 0x1E9B54u;
    SET_GPR_U32(ctx, 31, 0x1E9B5Cu);
    ctx->pc = 0x1E9B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B54u;
    // 0x1e9b58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9FC0u, 0x1E9B54u, 0x1E9B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B5Cu;
label_1e9b5c:
    // 0x1e9b5c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x1e9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e9b60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e9b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b64: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x1e9b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1e9b68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e9b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b6c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1e9b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e9b70: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1e9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e9b74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e9b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9b78: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1e9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e9b7c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e9b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e9b80: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e9b84: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1e9b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1e9b88: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x1e9b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x1e9b8c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1e9b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e9b90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e9b94: 0xc07ab48  jal         func_1EAD20
    ctx->pc = 0x1E9B94u;
    SET_GPR_U32(ctx, 31, 0x1E9B9Cu);
    ctx->pc = 0x1E9B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B94u;
    // 0x1e9b98: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD20u, 0x1E9B94u, 0x1E9B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B9Cu;
label_1e9b9c:
    // 0x1e9b9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9B9Cu;
    {
        const bool branch_taken_0x1e9b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b9c) {
            ctx->pc = 0x1E9BB8u;
            return;
        }
    }
    ctx->pc = 0x1E9BA4u;
}
