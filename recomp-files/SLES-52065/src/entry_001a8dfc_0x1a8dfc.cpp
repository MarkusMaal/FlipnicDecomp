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

// Function: entry_001a8dfc
// Address: 0x1a8dfc - 0x1a8e24
void entry_001a8dfc_0x1a8dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8dfc_0x1a8dfc");
#endif

    ctx->pc = 0x1a8dfcu;

    // 0x1a8dfc: 0x0  nop
    ctx->pc = 0x1a8dfcu;
    // NOP
    // 0x1a8e00: 0x8e8409b4  lw          $a0, 0x9B4($s4)
    ctx->pc = 0x1a8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
    // 0x1a8e04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8e08: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A8E08u;
    {
        const bool branch_taken_0x1a8e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a8e08) {
            ctx->pc = 0x1A8E24u;
            return;
        }
    }
    ctx->pc = 0x1A8E10u;
    // 0x1a8e10: 0x8e8309b0  lw          $v1, 0x9B0($s4)
    ctx->pc = 0x1a8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a8e14: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1a8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a8e18: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a8e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8e1c: 0x1440ff69  bnez        $v0, . + 4 + (-0x97 << 2)
    ctx->pc = 0x1A8E1Cu;
    {
        const bool branch_taken_0x1a8e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E1Cu;
        // 0x1a8e20: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e1c) {
            ctx->pc = 0x1A8BC4u;
            return;
        }
    }
    ctx->pc = 0x1A8E24u;
}
