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

// Function: entry_0011fdb0
// Address: 0x11fdb0 - 0x11fdd0
void entry_0011fdb0_0x11fdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fdb0_0x11fdb0");
#endif

    ctx->pc = 0x11fdb0u;

    // 0x11fdb0: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FDB0u;
    {
        const bool branch_taken_0x11fdb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDB0u;
        // 0x11fdb4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdb0) {
            ctx->pc = 0x11FDD4u;
            return;
        }
    }
    ctx->pc = 0x11FDB8u;
    // 0x11fdb8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11fdbc: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FDBCu;
    {
        const bool branch_taken_0x11fdbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fdbc) {
            ctx->pc = 0x11FDD0u;
            return;
        }
    }
    ctx->pc = 0x11FDC4u;
    // 0x11fdc4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fdc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11fdcc: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fdd0u;
}
