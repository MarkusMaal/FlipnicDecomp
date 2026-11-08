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

// Function: entry_0011fcfc
// Address: 0x11fcfc - 0x11fd1c
void entry_0011fcfc_0x11fcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fcfc_0x11fcfc");
#endif

    ctx->pc = 0x11fcfcu;

    // 0x11fcfc: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FCFCu;
    {
        const bool branch_taken_0x11fcfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCFCu;
        // 0x11fd00: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcfc) {
            ctx->pc = 0x11FD20u;
            return;
        }
    }
    ctx->pc = 0x11FD04u;
    // 0x11fd04: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11fd08: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FD08u;
    {
        const bool branch_taken_0x11fd08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fd08) {
            ctx->pc = 0x11FD1Cu;
            return;
        }
    }
    ctx->pc = 0x11FD10u;
    // 0x11fd10: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fd14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11fd18: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fd1cu;
}
