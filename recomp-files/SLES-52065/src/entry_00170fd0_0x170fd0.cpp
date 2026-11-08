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

// Function: entry_00170fd0
// Address: 0x170fd0 - 0x170ff0
void entry_00170fd0_0x170fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170fd0_0x170fd0");
#endif

    ctx->pc = 0x170fd0u;

    // 0x170fd0: 0x92030265  lbu         $v1, 0x265($s0)
    ctx->pc = 0x170fd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 613)));
    // 0x170fd4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x170FD4u;
    {
        const bool branch_taken_0x170fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170fd4) {
            ctx->pc = 0x170FF0u;
            return;
        }
    }
    ctx->pc = 0x170FDCu;
    // 0x170fdc: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x170fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x170fe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170fe4: 0xac642798  sw          $a0, 0x2798($v1)
    ctx->pc = 0x170fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10136), GPR_U32(ctx, 4));
    // 0x170fe8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x170FE8u;
    {
        const bool branch_taken_0x170fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FE8u;
        // 0x170fec: 0xa2000265  sb          $zero, 0x265($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 613), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fe8) {
            ctx->pc = 0x170FF8u;
            return;
        }
    }
    ctx->pc = 0x170FF0u;
}
