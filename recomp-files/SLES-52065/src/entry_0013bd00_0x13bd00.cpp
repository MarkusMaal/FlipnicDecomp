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

// Function: entry_0013bd00
// Address: 0x13bd00 - 0x13bd1c
void entry_0013bd00_0x13bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bd00_0x13bd00");
#endif

    ctx->pc = 0x13bd00u;

    // 0x13bd00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bd04: 0x0  nop
    ctx->pc = 0x13bd04u;
    // NOP
    // 0x13bd08: 0x0  nop
    ctx->pc = 0x13bd08u;
    // NOP
    // 0x13bd0c: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13BD0Cu;
    {
        const bool branch_taken_0x13bd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bd0c) {
            ctx->pc = 0x13BCFCu;
            return;
        }
    }
    ctx->pc = 0x13BD14u;
    // 0x13bd14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13BD14u;
    {
        const bool branch_taken_0x13bd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD14u;
        // 0x13bd18: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd14) {
            ctx->pc = 0x13BD40u;
            return;
        }
    }
    ctx->pc = 0x13BD1Cu;
}
