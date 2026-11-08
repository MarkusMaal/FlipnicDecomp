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

// Function: entry_001362cc
// Address: 0x1362cc - 0x1362ec
void entry_001362cc_0x1362cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001362cc_0x1362cc");
#endif

    ctx->pc = 0x1362ccu;

    // 0x1362cc: 0x0  nop
    ctx->pc = 0x1362ccu;
    // NOP
    // 0x1362d0: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1362d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1362d4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1362d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1362d8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1362d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1362dc: 0xe3202b  sltu        $a0, $a3, $v1
    ctx->pc = 0x1362dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1362e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1362e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1362e4: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1362E4u;
    {
        const bool branch_taken_0x1362e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1362E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362E4u;
        // 0x1362e8: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362e4) {
            ctx->pc = 0x1362BCu;
            return;
        }
    }
    ctx->pc = 0x1362ECu;
}
