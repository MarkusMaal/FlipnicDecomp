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

// Function: entry_0012aa4c
// Address: 0x12aa4c - 0x12aa8c
void entry_0012aa4c_0x12aa4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aa4c_0x12aa4c");
#endif

    switch (ctx->pc) {
        case 0x12aa80u: goto label_12aa80;
        default: break;
    }

    ctx->pc = 0x12aa4cu;

    // 0x12aa4c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x12aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12aa50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12aa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12aa54: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x12aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x12aa58: 0x24500140  addiu       $s0, $v0, 0x140
    ctx->pc = 0x12aa58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x12aa5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x12aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x12aa60: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x12aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12aa64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12aa68: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x12aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x12aa6c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x12aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12aa70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12aa74: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x12aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x12aa78: 0xc080874  jal         func_2021D0
    ctx->pc = 0x12AA78u;
    SET_GPR_U32(ctx, 31, 0x12AA80u);
    ctx->pc = 0x12AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA78u;
    // 0x12aa7c: 0x8f85805c  lw          $a1, -0x7FA4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x12AA78u, 0x12AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA80u;
label_12aa80:
    // 0x12aa80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12AA80u;
    {
        const bool branch_taken_0x12aa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa80) {
            ctx->pc = 0x12AA8Cu;
            return;
        }
    }
    ctx->pc = 0x12AA88u;
    // 0x12aa88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x12aa8cu;
}
