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

// Function: entry_00203d40
// Address: 0x203d40 - 0x203d58
void entry_00203d40_0x203d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203d40_0x203d40");
#endif

    ctx->pc = 0x203d40u;

    // 0x203d40: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x203d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x203d44: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x203d44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x203d48: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x203D48u;
    {
        const bool branch_taken_0x203d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D48u;
        // 0x203d4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d48) {
            ctx->pc = 0x203D80u;
            return;
        }
    }
    ctx->pc = 0x203D50u;
    // 0x203d50: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x203d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x203d54: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x203d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    ctx->pc = 0x203d58u;
}
