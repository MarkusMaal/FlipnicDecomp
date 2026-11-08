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

// Function: entry_0014e6a4
// Address: 0x14e6a4 - 0x14e6c4
void entry_0014e6a4_0x14e6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e6a4_0x14e6a4");
#endif

    ctx->pc = 0x14e6a4u;

    // 0x14e6a4: 0x0  nop
    ctx->pc = 0x14e6a4u;
    // NOP
    // 0x14e6a8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x14e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14e6ac: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14e6acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14e6b0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e6b4: 0x237182b  sltu        $v1, $s1, $s7
    ctx->pc = 0x14e6b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x14e6b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14e6bc: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14E6BCu;
    {
        const bool branch_taken_0x14e6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6BCu;
        // 0x14e6c0: 0xaec40000  sw          $a0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6bc) {
            ctx->pc = 0x14E654u;
            return;
        }
    }
    ctx->pc = 0x14E6C4u;
}
