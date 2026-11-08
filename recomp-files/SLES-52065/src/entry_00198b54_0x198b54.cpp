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

// Function: entry_00198b54
// Address: 0x198b54 - 0x198b64
void entry_00198b54_0x198b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198b54_0x198b54");
#endif

    ctx->pc = 0x198b54u;

    // 0x198b54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x198b54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b58: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x198B58u;
    {
        const bool branch_taken_0x198b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B58u;
        // 0x198b5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b58) {
            ctx->pc = 0x198BE8u;
            return;
        }
    }
    ctx->pc = 0x198B60u;
    // 0x198b60: 0x2b08821  addu        $s1, $s5, $s0
    ctx->pc = 0x198b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->pc = 0x198b64u;
}
