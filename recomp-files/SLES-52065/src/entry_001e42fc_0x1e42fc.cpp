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

// Function: entry_001e42fc
// Address: 0x1e42fc - 0x1e4344
void entry_001e42fc_0x1e42fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e42fc_0x1e42fc");
#endif

    switch (ctx->pc) {
        case 0x1e4314u: goto label_1e4314;
        case 0x1e4324u: goto label_1e4324;
        default: break;
    }

    ctx->pc = 0x1e42fcu;

label_1e42fc:
    // 0x1e42fc: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e4300:
    // 0x1e4300: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1e4300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1e4304:
    // 0x1e4304: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4308:
    // 0x1e4308: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e4308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e430c:
    // 0x1e430c: 0x320f809  jalr        $t9
label_1e4310:
    if (ctx->pc == 0x1E4310u) {
        ctx->pc = 0x1E4314u;
        goto label_1e4314;
    }
    ctx->pc = 0x1E430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4314u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E430Cu, 0x1E4314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4314u;
label_1e4314:
    // 0x1e4314: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e4318:
    if (ctx->pc == 0x1E4318u) {
        ctx->pc = 0x1E4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4314u;
        // 0x1e4318: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E431Cu;
        goto label_1e431c;
    }
    ctx->pc = 0x1E4314u;
    {
        const bool branch_taken_0x1e4314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4314u;
        // 0x1e4318: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4314) {
            ctx->pc = 0x1E4344u;
            return;
        }
    }
    ctx->pc = 0x1E431Cu;
label_1e431c:
    // 0x1e431c: 0xc07a704  jal         func_1E9C10
label_1e4320:
    if (ctx->pc == 0x1E4320u) {
        ctx->pc = 0x1E4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E431Cu;
        // 0x1e4320: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4324u;
        goto label_1e4324;
    }
    ctx->pc = 0x1E431Cu;
    SET_GPR_U32(ctx, 31, 0x1E4324u);
    ctx->pc = 0x1E4320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E431Cu;
    // 0x1e4320: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E431Cu, 0x1E4324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4324u;
label_1e4324:
    // 0x1e4324: 0x0  nop
    ctx->pc = 0x1e4324u;
    // NOP
label_1e4328:
    // 0x1e4328: 0x0  nop
    ctx->pc = 0x1e4328u;
    // NOP
label_1e432c:
    // 0x1e432c: 0x0  nop
    ctx->pc = 0x1e432cu;
    // NOP
label_1e4330:
    // 0x1e4330: 0x0  nop
    ctx->pc = 0x1e4330u;
    // NOP
label_1e4334:
    // 0x1e4334: 0x0  nop
    ctx->pc = 0x1e4334u;
    // NOP
label_1e4338:
    // 0x1e4338: 0x0  nop
    ctx->pc = 0x1e4338u;
    // NOP
label_1e433c:
    // 0x1e433c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e4340:
    if (ctx->pc == 0x1E4340u) {
        ctx->pc = 0x1E4344u;
        goto label_fallthrough_0x1e433c;
    }
    ctx->pc = 0x1E433Cu;
    {
        const bool branch_taken_0x1e433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e433c) {
            ctx->pc = 0x1E4324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4324;
        }
    }
label_fallthrough_0x1e433c:
    ctx->pc = 0x1E4344u;
}
