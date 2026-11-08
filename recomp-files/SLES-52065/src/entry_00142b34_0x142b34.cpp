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

// Function: entry_00142b34
// Address: 0x142b34 - 0x142b74
void entry_00142b34_0x142b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142b34_0x142b34");
#endif

    switch (ctx->pc) {
        case 0x142b64u: goto label_142b64;
        default: break;
    }

    ctx->pc = 0x142b34u;

    // 0x142b34: 0x0  nop
    ctx->pc = 0x142b34u;
    // NOP
    // 0x142b38: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x142b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x142b3c: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x142b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x142b40: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x142b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x142b44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x142b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x142b48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x142b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x142b4c: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x142b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x142b50: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x142b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x142b54: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x142b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x142b58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x142b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142b5c: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x142B5Cu;
    SET_GPR_U32(ctx, 31, 0x142B64u);
    ctx->pc = 0x142B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B5Cu;
    // 0x142b60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x142B5Cu, 0x142B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B64u;
label_142b64:
    // 0x142b64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x142b68: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x142b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x142b6c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x142B6Cu;
    {
        const bool branch_taken_0x142b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B6Cu;
        // 0x142b70: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b6c) {
            ctx->pc = 0x142B28u;
            return;
        }
    }
    ctx->pc = 0x142B74u;
}
