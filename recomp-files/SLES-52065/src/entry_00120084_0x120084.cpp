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

// Function: entry_00120084
// Address: 0x120084 - 0x1200a4
void entry_00120084_0x120084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120084_0x120084");
#endif

    ctx->pc = 0x120084u;

    // 0x120084: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x120084u;
    {
        const bool branch_taken_0x120084 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x120088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120084u;
        // 0x120088: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120084) {
            ctx->pc = 0x1200A8u;
            return;
        }
    }
    ctx->pc = 0x12008Cu;
    // 0x12008c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120090: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120090u;
    {
        const bool branch_taken_0x120090 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x120090) {
            ctx->pc = 0x1200A4u;
            return;
        }
    }
    ctx->pc = 0x120098u;
    // 0x120098: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x120098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x12009c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12009cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1200a0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x1200a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x1200a4u;
}
