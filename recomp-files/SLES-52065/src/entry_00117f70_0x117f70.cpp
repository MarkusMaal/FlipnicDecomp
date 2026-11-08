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

// Function: entry_00117f70
// Address: 0x117f70 - 0x117fb0
void entry_00117f70_0x117f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117f70_0x117f70");
#endif

    switch (ctx->pc) {
        case 0x117f78u: goto label_117f78;
        case 0x117f80u: goto label_117f80;
        case 0x117f88u: goto label_117f88;
        default: break;
    }

    ctx->pc = 0x117f70u;

    // 0x117f70: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x117F70u;
    SET_GPR_U32(ctx, 31, 0x117F78u);
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x117F70u, 0x117F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F78u;
label_117f78:
    // 0x117f78: 0xc04b708  jal         func_12DC20
    ctx->pc = 0x117F78u;
    SET_GPR_U32(ctx, 31, 0x117F80u);
    ctx->pc = 0x117F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F78u;
    // 0x117f7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DC20u, 0x117F78u, 0x117F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F80u;
label_117f80:
    // 0x117f80: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x117F80u;
    SET_GPR_U32(ctx, 31, 0x117F88u);
    ctx->pc = 0x117F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F80u;
    // 0x117f84: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x117F80u, 0x117F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F88u;
label_117f88:
    // 0x117f88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x117F88u;
    {
        const bool branch_taken_0x117f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F88u;
        // 0x117f8c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f88) {
            ctx->pc = 0x117FB0u;
            return;
        }
    }
    ctx->pc = 0x117F90u;
    // 0x117f90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x117f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x117f94: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x117f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x117f98: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x117f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x117f9c: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x117f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x117fa0: 0xa0440048  sb          $a0, 0x48($v0)
    ctx->pc = 0x117fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 4));
    // 0x117fa4: 0xa0440049  sb          $a0, 0x49($v0)
    ctx->pc = 0x117fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 4));
    // 0x117fa8: 0xa043004a  sb          $v1, 0x4A($v0)
    ctx->pc = 0x117fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x117fac: 0xa040004b  sb          $zero, 0x4B($v0)
    ctx->pc = 0x117facu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x117fb0u;
}
