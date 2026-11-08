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

// Function: entry_0011304c
// Address: 0x11304c - 0x113070
void entry_0011304c_0x11304c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011304c_0x11304c");
#endif

    ctx->pc = 0x11304cu;

    // 0x11304c: 0x0  nop
    ctx->pc = 0x11304cu;
    // NOP
    // 0x113050: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x113050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x113054: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x113054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113058: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x113058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11305c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11305cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113060: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x113060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113064: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x113064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x113068: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x113068u;
    {
        const bool branch_taken_0x113068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113068u;
        // 0x11306c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113068) {
            ctx->pc = 0x1130C0u;
            return;
        }
    }
    ctx->pc = 0x113070u;
}
