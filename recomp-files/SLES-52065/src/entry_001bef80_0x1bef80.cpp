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

// Function: entry_001bef80
// Address: 0x1bef80 - 0x1bef98
void entry_001bef80_0x1bef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bef80_0x1bef80");
#endif

    ctx->pc = 0x1bef80u;

    // 0x1bef80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bef84: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x1bef84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1bef88: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BEF88u;
    {
        const bool branch_taken_0x1bef88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF88u;
        // 0x1bef8c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef88) {
            ctx->pc = 0x1BEF5Cu;
            return;
        }
    }
    ctx->pc = 0x1BEF90u;
    // 0x1bef90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bef90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bef94: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1bef94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    ctx->pc = 0x1bef98u;
}
