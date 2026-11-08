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

// Function: entry_001ff184
// Address: 0x1ff184 - 0x1ff198
void entry_001ff184_0x1ff184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff184_0x1ff184");
#endif

    ctx->pc = 0x1ff184u;

    // 0x1ff184: 0x81a42  srl         $v1, $t0, 9
    ctx->pc = 0x1ff184u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 9));
    // 0x1ff188: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF188u;
    {
        const bool branch_taken_0x1ff188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF188u;
        // 0x1ff18c: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff188) {
            ctx->pc = 0x1FF198u;
            return;
        }
    }
    ctx->pc = 0x1FF190u;
    // 0x1ff190: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1FF190u;
    {
        const bool branch_taken_0x1ff190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF190u;
        // 0x1ff194: 0x830c2  srl         $a2, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff190) {
            ctx->pc = 0x1FF1F4u;
            return;
        }
    }
    ctx->pc = 0x1FF198u;
}
