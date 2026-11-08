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

// Function: entry_001fe94c
// Address: 0x1fe94c - 0x1fe95c
void entry_001fe94c_0x1fe94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe94c_0x1fe94c");
#endif

    ctx->pc = 0x1fe94cu;

    // 0x1fe94c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fe94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe950: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fe950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fe954: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FE954u;
    {
        const bool branch_taken_0x1fe954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE954u;
        // 0x1fe958: 0x24120400  addiu       $s2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe954) {
            ctx->pc = 0x1FE9A4u;
            return;
        }
    }
    ctx->pc = 0x1FE95Cu;
}
