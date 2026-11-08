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

// Function: entry_0020282c
// Address: 0x20282c - 0x202848
void entry_0020282c_0x20282c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020282c_0x20282c");
#endif

    ctx->pc = 0x20282cu;

    // 0x20282c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x20282cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x202830: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x202830u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x202834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x202834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202838: 0x1440021d  bnez        $v0, . + 4 + (0x21D << 2)
    ctx->pc = 0x202838u;
    {
        const bool branch_taken_0x202838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202838u;
        // 0x20283c: 0xdc714d58  ld          $s1, 0x4D58($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 19800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202838) {
            ctx->pc = 0x2030B0u;
            return;
        }
    }
    ctx->pc = 0x202840u;
    // 0x202840: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x202840u;
    {
        const bool branch_taken_0x202840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202840u;
        // 0x202844: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202840) {
            ctx->pc = 0x2030F0u;
            return;
        }
    }
    ctx->pc = 0x202848u;
}
