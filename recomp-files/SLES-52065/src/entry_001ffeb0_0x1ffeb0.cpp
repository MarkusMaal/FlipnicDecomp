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

// Function: entry_001ffeb0
// Address: 0x1ffeb0 - 0x1ffec4
void entry_001ffeb0_0x1ffeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffeb0_0x1ffeb0");
#endif

    ctx->pc = 0x1ffeb0u;

    // 0x1ffeb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFEB0u;
    {
        const bool branch_taken_0x1ffeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEB0u;
        // 0x1ffeb4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffeb0) {
            ctx->pc = 0x1FFEC4u;
            return;
        }
    }
    ctx->pc = 0x1FFEB8u;
    // 0x1ffeb8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1ffeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1ffebc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1ffebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ffec0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1ffec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    ctx->pc = 0x1ffec4u;
}
