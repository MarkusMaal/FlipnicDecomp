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

// Function: entry_00161acc
// Address: 0x161acc - 0x161adc
void entry_00161acc_0x161acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161acc_0x161acc");
#endif

    ctx->pc = 0x161accu;

    // 0x161acc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161ACCu;
    {
        const bool branch_taken_0x161acc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x161AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161ACCu;
        // 0x161ad0: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161acc) {
            ctx->pc = 0x161ADCu;
            return;
        }
    }
    ctx->pc = 0x161AD4u;
    // 0x161ad4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161AD4u;
    {
        const bool branch_taken_0x161ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AD4u;
        // 0x161ad8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ad4) {
            ctx->pc = 0x161AE8u;
            return;
        }
    }
    ctx->pc = 0x161ADCu;
}
