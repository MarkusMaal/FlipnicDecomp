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

// Function: entry_0012f4d0
// Address: 0x12f4d0 - 0x12f4ec
void entry_0012f4d0_0x12f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f4d0_0x12f4d0");
#endif

    ctx->pc = 0x12f4d0u;

    // 0x12f4d0: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x12f4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f4d4: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x12f4d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f4d8: 0x13d1021  addu        $v0, $t1, $sp
    ctx->pc = 0x12f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x12f4dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12f4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12f4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x12f4e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12F4E4u;
    {
        const bool branch_taken_0x12f4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4E4u;
        // 0x12f4e8: 0xa4430920  sh          $v1, 0x920($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2336), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4e4) {
            ctx->pc = 0x12F500u;
            return;
        }
    }
    ctx->pc = 0x12F4ECu;
}
