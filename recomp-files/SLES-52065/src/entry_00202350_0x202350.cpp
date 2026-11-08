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

// Function: entry_00202350
// Address: 0x202350 - 0x20236c
void entry_00202350_0x202350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202350_0x202350");
#endif

    ctx->pc = 0x202350u;

    // 0x202350: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202350u;
    {
        const bool branch_taken_0x202350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202350u;
        // 0x202354: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202350) {
            ctx->pc = 0x20236Cu;
            return;
        }
    }
    ctx->pc = 0x202358u;
    // 0x202358: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x202358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x20235c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x20235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x202360: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x202360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x202364: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202364u;
    {
        const bool branch_taken_0x202364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202364u;
        // 0x202368: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202364) {
            ctx->pc = 0x202388u;
            return;
        }
    }
    ctx->pc = 0x20236Cu;
}
