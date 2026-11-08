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

// Function: entry_001cfd0c
// Address: 0x1cfd0c - 0x1cfd58
void entry_001cfd0c_0x1cfd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfd0c_0x1cfd0c");
#endif

    switch (ctx->pc) {
        case 0x1cfd14u: goto label_1cfd14;
        case 0x1cfd38u: goto label_1cfd38;
        case 0x1cfd44u: goto label_1cfd44;
        case 0x1cfd50u: goto label_1cfd50;
        default: break;
    }

    ctx->pc = 0x1cfd0cu;

    // 0x1cfd0c: 0xc073174  jal         func_1CC5D0
    ctx->pc = 0x1CFD0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFD14u);
    ctx->pc = 0x1CC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5D0u, 0x1CFD0Cu, 0x1CFD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD14u;
label_1cfd14:
    // 0x1cfd14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cfd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cfd18: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CFD18u;
    {
        const bool branch_taken_0x1cfd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfd18) {
            ctx->pc = 0x1CFD58u;
            return;
        }
    }
    ctx->pc = 0x1CFD20u;
    // 0x1cfd20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfd24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cfd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cfd28: 0xac22f4d8  sw          $v0, -0xB28($at)
    ctx->pc = 0x1cfd28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4D8u, _value); } while (0);
    // 0x1cfd2c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfd30: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1CFD30u;
    SET_GPR_U32(ctx, 31, 0x1CFD38u);
    ctx->pc = 0x1CFD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFD30u;
    // 0x1cfd34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1CFD30u, 0x1CFD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD38u;
label_1cfd38:
    // 0x1cfd38: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfd3c: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFD3Cu;
    SET_GPR_U32(ctx, 31, 0x1CFD44u);
    ctx->pc = 0x1CFD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFD3Cu;
    // 0x1cfd40: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFD3Cu, 0x1CFD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD44u;
label_1cfd44:
    // 0x1cfd44: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfd48: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFD48u;
    SET_GPR_U32(ctx, 31, 0x1CFD50u);
    ctx->pc = 0x1CFD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFD48u;
    // 0x1cfd4c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFD48u, 0x1CFD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD50u;
label_1cfd50:
    // 0x1cfd50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFD50u;
    {
        const bool branch_taken_0x1cfd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd50) {
            ctx->pc = 0x1CFD64u;
            return;
        }
    }
    ctx->pc = 0x1CFD58u;
}
