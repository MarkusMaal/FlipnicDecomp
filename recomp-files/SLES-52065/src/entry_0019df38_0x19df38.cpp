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

// Function: entry_0019df38
// Address: 0x19df38 - 0x19df48
void entry_0019df38_0x19df38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019df38_0x19df38");
#endif

    ctx->pc = 0x19df38u;

    // 0x19df38: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19df38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19DF3Cu;
    {
        const bool branch_taken_0x19df3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF3Cu;
        // 0x19df40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df3c) {
            ctx->pc = 0x19DF98u;
            return;
        }
    }
    ctx->pc = 0x19DF44u;
    // 0x19df44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19df44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19df48u;
}
