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

// Function: entry_00143e0c
// Address: 0x143e0c - 0x143e2c
void entry_00143e0c_0x143e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143e0c_0x143e0c");
#endif

    ctx->pc = 0x143e0cu;

    // 0x143e0c: 0x0  nop
    ctx->pc = 0x143e0cu;
    // NOP
    // 0x143e10: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143e14: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x143e14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x143e18: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x143e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x143e1c: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x143e1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143e20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x143e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x143e24: 0x1420ffe7  bnez        $at, . + 4 + (-0x19 << 2)
    ctx->pc = 0x143E24u;
    {
        const bool branch_taken_0x143e24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x143E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E24u;
        // 0x143e28: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e24) {
            ctx->pc = 0x143DC4u;
            return;
        }
    }
    ctx->pc = 0x143E2Cu;
}
