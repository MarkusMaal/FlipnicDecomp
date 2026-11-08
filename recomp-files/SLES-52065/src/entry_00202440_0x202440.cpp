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

// Function: entry_00202440
// Address: 0x202440 - 0x202460
void entry_00202440_0x202440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202440_0x202440");
#endif

    ctx->pc = 0x202440u;

    // 0x202440: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x202440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x202444: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202444u;
    {
        const bool branch_taken_0x202444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202444u;
        // 0x202448: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202444) {
            ctx->pc = 0x202460u;
            return;
        }
    }
    ctx->pc = 0x20244Cu;
    // 0x20244c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20244cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202450: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x202450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x202454: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x202454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x202458: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x202458u;
    {
        const bool branch_taken_0x202458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202458u;
        // 0x20245c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202458) {
            ctx->pc = 0x202474u;
            return;
        }
    }
    ctx->pc = 0x202460u;
}
