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

// Function: entry_00190c08
// Address: 0x190c08 - 0x190c30
void entry_00190c08_0x190c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190c08_0x190c08");
#endif

    ctx->pc = 0x190c08u;

label_190c08:
    // 0x190c08: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x190c08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x190c0c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x190c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x190c10: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x190c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x190c14: 0x0  nop
    ctx->pc = 0x190c14u;
    // NOP
    // 0x190c18: 0x0  nop
    ctx->pc = 0x190c18u;
    // NOP
    // 0x190c1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x190C1Cu;
    {
        const bool branch_taken_0x190c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190c1c) {
            ctx->pc = 0x190C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190c08;
        }
    }
    ctx->pc = 0x190C24u;
    // 0x190c24: 0x7e000550  sq          $zero, 0x550($s0)
    ctx->pc = 0x190c24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 0));
    // 0x190c28: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x190c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x190c2c: 0x26030660  addiu       $v1, $s0, 0x660
    ctx->pc = 0x190c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    ctx->pc = 0x190c30u;
}
