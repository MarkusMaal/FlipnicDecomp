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

// Function: entry_00138ba8
// Address: 0x138ba8 - 0x138bd8
void entry_00138ba8_0x138ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138ba8_0x138ba8");
#endif

    ctx->pc = 0x138ba8u;

    // 0x138ba8: 0x30460010  andi        $a2, $v0, 0x10
    ctx->pc = 0x138ba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x138bac: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x138bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x138bb0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x138bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x138bb4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x138bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x138bb8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x138BB8u;
    {
        const bool branch_taken_0x138bb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BB8u;
        // 0x138bbc: 0xafa500f0  sw          $a1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bb8) {
            ctx->pc = 0x138BD8u;
            return;
        }
    }
    ctx->pc = 0x138BC0u;
    // 0x138bc0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x138bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x138bc4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x138bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x138bc8: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x138bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x138bcc: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138bd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x138bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x138bd4: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x138bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    ctx->pc = 0x138bd8u;
}
