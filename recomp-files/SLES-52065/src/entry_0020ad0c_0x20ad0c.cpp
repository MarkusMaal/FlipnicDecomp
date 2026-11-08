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

// Function: entry_0020ad0c
// Address: 0x20ad0c - 0x20ad20
void entry_0020ad0c_0x20ad0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ad0c_0x20ad0c");
#endif

    ctx->pc = 0x20ad0cu;

    // 0x20ad0c: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x20ad0cu;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
    // 0x20ad10: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x20ad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x20ad14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20AD14u;
    {
        const bool branch_taken_0x20ad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD14u;
        // 0x20ad18: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad14) {
            ctx->pc = 0x20AD3Cu;
            return;
        }
    }
    ctx->pc = 0x20AD1Cu;
    // 0x20ad1c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20ad1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20ad20u;
}
