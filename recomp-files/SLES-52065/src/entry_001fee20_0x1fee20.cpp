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

// Function: entry_001fee20
// Address: 0x1fee20 - 0x1fee64
void entry_001fee20_0x1fee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fee20_0x1fee20");
#endif

    ctx->pc = 0x1fee20u;

    // 0x1fee20: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1fee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1fee24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fee24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fee28: 0x2664fff4  addiu       $a0, $s3, -0xC
    ctx->pc = 0x1fee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x1fee2c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1fee2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x1fee30: 0x829824  and         $s3, $a0, $v0
    ctx->pc = 0x1fee30u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1fee34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fee34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fee38: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x1fee38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1fee3c: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x1fee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1fee40: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x1fee40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x1fee44: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1fee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fee48: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1fee48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1fee4c: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x1fee4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1fee50: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEE50u;
    {
        const bool branch_taken_0x1fee50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE50u;
        // 0x1fee54: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee50) {
            ctx->pc = 0x1FEE64u;
            return;
        }
    }
    ctx->pc = 0x1FEE58u;
    // 0x1fee58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1fee58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fee5c: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x1FEE5Cu;
    SET_GPR_U32(ctx, 31, 0x1FEE64u);
    ctx->pc = 0x1FEE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEE5Cu;
    // 0x1fee60: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x1FEE5Cu, 0x1FEE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEE64u;
}
