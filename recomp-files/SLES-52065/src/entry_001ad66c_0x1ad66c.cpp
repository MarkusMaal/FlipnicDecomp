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

// Function: entry_001ad66c
// Address: 0x1ad66c - 0x1ad6e8
void entry_001ad66c_0x1ad66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad66c_0x1ad66c");
#endif

    switch (ctx->pc) {
        case 0x1ad678u: goto label_1ad678;
        case 0x1ad6b4u: goto label_1ad6b4;
        case 0x1ad6e0u: goto label_1ad6e0;
        default: break;
    }

    ctx->pc = 0x1ad66cu;

    // 0x1ad66c: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1ad66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1ad670: 0xc06b718  jal         func_1ADC60
    ctx->pc = 0x1AD670u;
    SET_GPR_U32(ctx, 31, 0x1AD678u);
    ctx->pc = 0x1AD674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD670u;
    // 0x1ad674: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADC60u, 0x1AD670u, 0x1AD678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD678u;
label_1ad678:
    // 0x1ad678: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1AD678u;
    {
        const bool branch_taken_0x1ad678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad678) {
            ctx->pc = 0x1AD6F8u;
            return;
        }
    }
    ctx->pc = 0x1AD680u;
    // 0x1ad680: 0xae3206b4  sw          $s2, 0x6B4($s1)
    ctx->pc = 0x1ad680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 18));
    // 0x1ad684: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x1ad684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x1ad688: 0xae2206b8  sw          $v0, 0x6B8($s1)
    ctx->pc = 0x1ad688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 2));
    // 0x1ad68c: 0x8e2306b8  lw          $v1, 0x6B8($s1)
    ctx->pc = 0x1ad68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1720)));
    // 0x1ad690: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x1ad690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1ad694: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ad698: 0x24440670  addiu       $a0, $v0, 0x670
    ctx->pc = 0x1ad698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    // 0x1ad69c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1ad69cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1ad6a0: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1ad6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ad6a4: 0x8c620670  lw          $v0, 0x670($v1)
    ctx->pc = 0x1ad6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
    // 0x1ad6a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad6ac: 0xc06b70c  jal         func_1ADC30
    ctx->pc = 0x1AD6ACu;
    SET_GPR_U32(ctx, 31, 0x1AD6B4u);
    ctx->pc = 0x1AD6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD6ACu;
    // 0x1ad6b0: 0xac620670  sw          $v0, 0x670($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADC30u, 0x1AD6ACu, 0x1AD6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6B4u;
label_1ad6b4:
    // 0x1ad6b4: 0xa22006c0  sb          $zero, 0x6C0($s1)
    ctx->pc = 0x1ad6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad6b8: 0x8e2206b8  lw          $v0, 0x6B8($s1)
    ctx->pc = 0x1ad6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1720)));
    // 0x1ad6bc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ad6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1ad6c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ad6c4: 0x8c420670  lw          $v0, 0x670($v0)
    ctx->pc = 0x1ad6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
    // 0x1ad6c8: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1ad6c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ad6cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AD6CCu;
    {
        const bool branch_taken_0x1ad6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6CCu;
        // 0x1ad6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6cc) {
            ctx->pc = 0x1AD6E8u;
            return;
        }
    }
    ctx->pc = 0x1AD6D4u;
    // 0x1ad6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6d8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AD6D8u;
    SET_GPR_U32(ctx, 31, 0x1AD6E0u);
    ctx->pc = 0x1AD6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD6D8u;
    // 0x1ad6dc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AD6D8u, 0x1AD6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6E0u;
label_1ad6e0:
    // 0x1ad6e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD6E0u;
    {
        const bool branch_taken_0x1ad6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad6e0) {
            ctx->pc = 0x1AD708u;
            return;
        }
    }
    ctx->pc = 0x1AD6E8u;
}
