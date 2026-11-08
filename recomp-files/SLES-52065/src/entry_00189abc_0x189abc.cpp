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

// Function: entry_00189abc
// Address: 0x189abc - 0x189af4
void entry_00189abc_0x189abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189abc_0x189abc");
#endif

    switch (ctx->pc) {
        case 0x189accu: goto label_189acc;
        default: break;
    }

    ctx->pc = 0x189abcu;

    // 0x189abc: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
    ctx->pc = 0x189ABCu;
    {
        const bool branch_taken_0x189abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189ABCu;
        // 0x189ac0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189abc) {
            ctx->pc = 0x189BACu;
            return;
        }
    }
    ctx->pc = 0x189AC4u;
    // 0x189ac4: 0xc0628c0  jal         func_18A300
    ctx->pc = 0x189AC4u;
    SET_GPR_U32(ctx, 31, 0x189ACCu);
    ctx->pc = 0x189AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AC4u;
    // 0x189ac8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A300u, 0x189AC4u, 0x189ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189ACCu;
label_189acc:
    // 0x189acc: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x189accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x189ad0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189ad4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x189AD4u;
    {
        const bool branch_taken_0x189ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AD4u;
        // 0x189ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ad4) {
            ctx->pc = 0x189B28u;
            return;
        }
    }
    ctx->pc = 0x189ADCu;
    // 0x189adc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189ADCu;
    {
        const bool branch_taken_0x189adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x189adc) {
            ctx->pc = 0x189B04u;
            return;
        }
    }
    ctx->pc = 0x189AE4u;
    // 0x189ae4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x189AE4u;
    {
        const bool branch_taken_0x189ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x189ae4) {
            ctx->pc = 0x189AF4u;
            return;
        }
    }
    ctx->pc = 0x189AECu;
    // 0x189aec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x189AECu;
    {
        const bool branch_taken_0x189aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189aec) {
            ctx->pc = 0x189B2Cu;
            return;
        }
    }
    ctx->pc = 0x189AF4u;
}
