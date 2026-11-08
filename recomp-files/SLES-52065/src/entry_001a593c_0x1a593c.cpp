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

// Function: entry_001a593c
// Address: 0x1a593c - 0x1a5960
void entry_001a593c_0x1a593c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a593c_0x1a593c");
#endif

    ctx->pc = 0x1a593cu;

    // 0x1a593c: 0x0  nop
    ctx->pc = 0x1a593cu;
    // NOP
    // 0x1a5940: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a5940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a5944: 0x2a230009  slti        $v1, $s1, 0x9
    ctx->pc = 0x1a5944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a5948: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1a5948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1a594c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1A594Cu;
    {
        const bool branch_taken_0x1a594c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A594Cu;
        // 0x1a5950: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a594c) {
            ctx->pc = 0x1A5910u;
            return;
        }
    }
    ctx->pc = 0x1A5954u;
    // 0x1a5954: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a5954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5958: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a5958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a595c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a595cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a5960u;
}
