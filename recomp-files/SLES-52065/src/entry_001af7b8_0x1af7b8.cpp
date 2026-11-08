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

// Function: entry_001af7b8
// Address: 0x1af7b8 - 0x1af7d0
void entry_001af7b8_0x1af7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af7b8_0x1af7b8");
#endif

    ctx->pc = 0x1af7b8u;

    // 0x1af7b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1af7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1af7bc: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x1af7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1af7c0: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1AF7C0u;
    {
        const bool branch_taken_0x1af7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7C0u;
        // 0x1af7c4: 0x26470030  addiu       $a3, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7c0) {
            ctx->pc = 0x1AF73Cu;
            return;
        }
    }
    ctx->pc = 0x1AF7C8u;
    // 0x1af7c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1af7c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1af7ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1af7d0u;
}
