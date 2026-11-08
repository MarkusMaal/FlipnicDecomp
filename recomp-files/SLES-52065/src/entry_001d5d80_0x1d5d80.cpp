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

// Function: entry_001d5d80
// Address: 0x1d5d80 - 0x1d5da8
void entry_001d5d80_0x1d5d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5d80_0x1d5d80");
#endif

    ctx->pc = 0x1d5d80u;

    // 0x1d5d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5d84: 0x146200f4  bne         $v1, $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x1D5D84u;
    {
        const bool branch_taken_0x1d5d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D84u;
        // 0x1d5d88: 0x2731018  mult        $v0, $s3, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d84) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5D8Cu;
    // 0x1d5d8c: 0x144300f2  bne         $v0, $v1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x1D5D8Cu;
    {
        const bool branch_taken_0x1d5d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D8Cu;
        // 0x1d5d90: 0x240209e4  addiu       $v0, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d8c) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5D94u;
    // 0x1d5d94: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1d5d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d5d98: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5d9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d5d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d5da0: 0x24210844  addiu       $at, $at, 0x844
    ctx->pc = 0x1d5da0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 2116));
    // 0x1d5da4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1d5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    ctx->pc = 0x1d5da8u;
}
