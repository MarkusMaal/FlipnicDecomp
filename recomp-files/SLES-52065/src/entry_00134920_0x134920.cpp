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

// Function: entry_00134920
// Address: 0x134920 - 0x134958
void entry_00134920_0x134920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134920_0x134920");
#endif

    switch (ctx->pc) {
        case 0x134938u: goto label_134938;
        default: break;
    }

    ctx->pc = 0x134920u;

    // 0x134920: 0x8fa203f4  lw          $v0, 0x3F4($sp)
    ctx->pc = 0x134920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1012)));
    // 0x134924: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x134924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x134928: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x134928u;
    {
        const bool branch_taken_0x134928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134928u;
        // 0x13492c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134928) {
            ctx->pc = 0x1348ACu;
            return;
        }
    }
    ctx->pc = 0x134930u;
    // 0x134930: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x134930u;
    SET_GPR_U32(ctx, 31, 0x134938u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x134930u, 0x134938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134938u;
label_134938:
    // 0x134938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13493c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13493Cu;
    {
        const bool branch_taken_0x13493c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13493Cu;
        // 0x134940: 0xa2420054  sb          $v0, 0x54($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13493c) {
            ctx->pc = 0x134958u;
            return;
        }
    }
    ctx->pc = 0x134944u;
    // 0x134944: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x134944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x134948: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13494c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x13494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x134950: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x134950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x134954: 0xa2420054  sb          $v0, 0x54($s2)
    ctx->pc = 0x134954u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x134958u;
}
