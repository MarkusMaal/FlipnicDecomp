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

// Function: entry_00136128
// Address: 0x136128 - 0x13613c
void entry_00136128_0x136128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136128_0x136128");
#endif

    ctx->pc = 0x136128u;

    // 0x136128: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x136128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13612c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13612Cu;
    {
        const bool branch_taken_0x13612c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x136130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13612Cu;
        // 0x136130: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13612c) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136134u;
    // 0x136134: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x136134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x136138: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x136138u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x13613cu;
}
