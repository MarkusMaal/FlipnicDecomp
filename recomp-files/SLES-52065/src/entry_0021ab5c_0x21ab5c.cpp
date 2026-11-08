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

// Function: entry_0021ab5c
// Address: 0x21ab5c - 0x21ab6c
void entry_0021ab5c_0x21ab5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ab5c_0x21ab5c");
#endif

    ctx->pc = 0x21ab5cu;

    // 0x21ab5c: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x21ab5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x21ab60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x21AB60u;
    {
        const bool branch_taken_0x21ab60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB60u;
        // 0x21ab64: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab60) {
            ctx->pc = 0x21AB38u;
            return;
        }
    }
    ctx->pc = 0x21AB68u;
    // 0x21ab68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21ab68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21ab6cu;
}
