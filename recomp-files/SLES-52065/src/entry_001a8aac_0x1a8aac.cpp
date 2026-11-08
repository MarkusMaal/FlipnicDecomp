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

// Function: entry_001a8aac
// Address: 0x1a8aac - 0x1a8ad8
void entry_001a8aac_0x1a8aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8aac_0x1a8aac");
#endif

    ctx->pc = 0x1a8aacu;

    // 0x1a8aac: 0x0  nop
    ctx->pc = 0x1a8aacu;
    // NOP
    // 0x1a8ab0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a8ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1a8ab4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a8ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a8ab8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a8abc: 0x1062ff29  beq         $v1, $v0, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x1A8ABCu;
    {
        const bool branch_taken_0x1a8abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a8abc) {
            ctx->pc = 0x1A8764u;
            return;
        }
    }
    ctx->pc = 0x1A8AC4u;
    // 0x1a8ac4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8AC4u;
    {
        const bool branch_taken_0x1a8ac4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ac4) {
            ctx->pc = 0x1A8AD8u;
            return;
        }
    }
    ctx->pc = 0x1A8ACCu;
    // 0x1a8acc: 0x8e8209b0  lw          $v0, 0x9B0($s4)
    ctx->pc = 0x1a8accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a8ad0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8ad4: 0xae8209b0  sw          $v0, 0x9B0($s4)
    ctx->pc = 0x1a8ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2480), GPR_U32(ctx, 2));
    ctx->pc = 0x1a8ad8u;
}
