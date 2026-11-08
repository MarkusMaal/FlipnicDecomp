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

// Function: entry_00138b80
// Address: 0x138b80 - 0x138ba4
void entry_00138b80_0x138b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b80_0x138b80");
#endif

    ctx->pc = 0x138b80u;

    // 0x138b80: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138b84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x138b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x138b88: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x138b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x138b8c: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x138b8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x138b90: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x138B90u;
    {
        const bool branch_taken_0x138b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B90u;
        // 0x138b94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b90) {
            ctx->pc = 0x138BA8u;
            return;
        }
    }
    ctx->pc = 0x138B98u;
    // 0x138b98: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138b9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x138b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x138ba0: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x138ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    ctx->pc = 0x138ba4u;
}
