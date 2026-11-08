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

// Function: entry_00108ff0
// Address: 0x108ff0 - 0x10900c
void entry_00108ff0_0x108ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108ff0_0x108ff0");
#endif

    ctx->pc = 0x108ff0u;

    // 0x108ff0: 0x1a0000bc  blez        $s0, . + 4 + (0xBC << 2)
    ctx->pc = 0x108FF0u;
    {
        const bool branch_taken_0x108ff0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x108ff0) {
            ctx->pc = 0x1092E4u;
            return;
        }
    }
    ctx->pc = 0x108FF8u;
    // 0x108ff8: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x108ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x108ffc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108FFCu;
    {
        const bool branch_taken_0x108ffc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x109000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FFCu;
        // 0x109000: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ffc) {
            ctx->pc = 0x10900Cu;
            return;
        }
    }
    ctx->pc = 0x109004u;
    // 0x109004: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109004u;
    {
        const bool branch_taken_0x109004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109004u;
        // 0x109008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109004) {
            ctx->pc = 0x109024u;
            return;
        }
    }
    ctx->pc = 0x10900Cu;
}
