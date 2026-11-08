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

// Function: entry_00179ccc
// Address: 0x179ccc - 0x179cf4
void entry_00179ccc_0x179ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179ccc_0x179ccc");
#endif

    ctx->pc = 0x179cccu;

    // 0x179ccc: 0x0  nop
    ctx->pc = 0x179cccu;
    // NOP
    // 0x179cd0: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x179cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x179cd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x179cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x179cd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x179cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x179cdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x179cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x179ce0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x179ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x179ce4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x179CE4u;
    {
        const bool branch_taken_0x179ce4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x179CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CE4u;
        // 0x179ce8: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ce4) {
            ctx->pc = 0x179CF4u;
            return;
        }
    }
    ctx->pc = 0x179CECu;
    // 0x179cec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x179cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x179cf0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x179cf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x179cf4u;
}
