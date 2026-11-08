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

// Function: entry_00180448
// Address: 0x180448 - 0x18046c
void entry_00180448_0x180448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180448_0x180448");
#endif

    ctx->pc = 0x180448u;

    // 0x180448: 0x8f84865c  lw          $a0, -0x79A4($gp)
    ctx->pc = 0x180448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
    // 0x18044c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18044cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x180450: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x180450u;
    {
        const bool branch_taken_0x180450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x180450) {
            ctx->pc = 0x18046Cu;
            return;
        }
    }
    ctx->pc = 0x180458u;
    // 0x180458: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x180458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x18045c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180460: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x180460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x180464: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x180464u;
    {
        const bool branch_taken_0x180464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x180464) {
            ctx->pc = 0x1804DCu;
            return;
        }
    }
    ctx->pc = 0x18046Cu;
}
