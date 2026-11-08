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

// Function: entry_0011347c
// Address: 0x11347c - 0x1134a0
void entry_0011347c_0x11347c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011347c_0x11347c");
#endif

    ctx->pc = 0x11347cu;

    // 0x11347c: 0x0  nop
    ctx->pc = 0x11347cu;
    // NOP
    // 0x113480: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x113480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x113484: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x113484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113488: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x113488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11348c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11348cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113490: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x113490u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113494: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x113494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x113498: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x113498u;
    {
        const bool branch_taken_0x113498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113498u;
        // 0x11349c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113498) {
            ctx->pc = 0x1134F0u;
            return;
        }
    }
    ctx->pc = 0x1134A0u;
}
