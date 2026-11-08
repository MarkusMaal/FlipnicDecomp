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

// Function: entry_0019ad90
// Address: 0x19ad90 - 0x19adc4
void entry_0019ad90_0x19ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ad90_0x19ad90");
#endif

    switch (ctx->pc) {
        case 0x19ad98u: goto label_19ad98;
        default: break;
    }

    ctx->pc = 0x19ad90u;

    // 0x19ad90: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x19AD90u;
    SET_GPR_U32(ctx, 31, 0x19AD98u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19AD90u, 0x19AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD98u;
label_19ad98:
    // 0x19ad98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ad9c: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x19AD9Cu;
    {
        const bool branch_taken_0x19ad9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ad9c) {
            ctx->pc = 0x19AE14u;
            return;
        }
    }
    ctx->pc = 0x19ADA4u;
    // 0x19ada4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ada8: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19ADA8u;
    {
        const bool branch_taken_0x19ada8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ada8) {
            ctx->pc = 0x19ADDCu;
            return;
        }
    }
    ctx->pc = 0x19ADB0u;
    // 0x19adb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19ADB0u;
    {
        const bool branch_taken_0x19adb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADB0u;
        // 0x19adb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19adb0) {
            ctx->pc = 0x19ADC4u;
            return;
        }
    }
    ctx->pc = 0x19ADB8u;
    // 0x19adb8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19ADB8u;
    {
        const bool branch_taken_0x19adb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADB8u;
        // 0x19adbc: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19adb8) {
            ctx->pc = 0x19AE2Cu;
            return;
        }
    }
    ctx->pc = 0x19ADC0u;
    // 0x19adc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19adc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19adc4u;
}
