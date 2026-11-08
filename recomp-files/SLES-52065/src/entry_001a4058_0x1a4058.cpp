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

// Function: entry_001a4058
// Address: 0x1a4058 - 0x1a4074
void entry_001a4058_0x1a4058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4058_0x1a4058");
#endif

    ctx->pc = 0x1a4058u;

    // 0x1a4058: 0x8e22032c  lw          $v0, 0x32C($s1)
    ctx->pc = 0x1a4058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x1a405c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A405Cu;
    {
        const bool branch_taken_0x1a405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A405Cu;
        // 0x1a4060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a405c) {
            ctx->pc = 0x1A4098u;
            return;
        }
    }
    ctx->pc = 0x1A4064u;
    // 0x1a4064: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a4064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4068: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4068u;
    {
        const bool branch_taken_0x1a4068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4068u;
        // 0x1a406c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4068) {
            ctx->pc = 0x1A4080u;
            return;
        }
    }
    ctx->pc = 0x1A4070u;
    // 0x1a4070: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a4070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->pc = 0x1a4074u;
}
