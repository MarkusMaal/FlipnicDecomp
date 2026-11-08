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

// Function: entry_0016ba04
// Address: 0x16ba04 - 0x16ba30
void entry_0016ba04_0x16ba04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba04_0x16ba04");
#endif

    ctx->pc = 0x16ba04u;

    // 0x16ba04: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x16ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16ba08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16ba0c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x16ba0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16ba10: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x16BA10u;
    {
        const bool branch_taken_0x16ba10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA10u;
        // 0x16ba14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba10) {
            ctx->pc = 0x16BB40u;
            return;
        }
    }
    ctx->pc = 0x16BA18u;
    // 0x16ba18: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BA18u;
    {
        const bool branch_taken_0x16ba18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ba18) {
            ctx->pc = 0x16BA30u;
            return;
        }
    }
    ctx->pc = 0x16BA20u;
    // 0x16ba20: 0xaf8085fc  sw          $zero, -0x7A04($gp)
    ctx->pc = 0x16ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936060), GPR_U32(ctx, 0));
    // 0x16ba24: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x16ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16ba28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16ba2c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x16ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    ctx->pc = 0x16ba30u;
}
