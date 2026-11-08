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

// Function: entry_00151fec
// Address: 0x151fec - 0x152004
void entry_00151fec_0x151fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151fec_0x151fec");
#endif

    ctx->pc = 0x151fecu;

    // 0x151fec: 0x0  nop
    ctx->pc = 0x151fecu;
    // NOP
    // 0x151ff0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x151ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x151ff4: 0x8c632c20  lw          $v1, 0x2C20($v1)
    ctx->pc = 0x151ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11296)));
    // 0x151ff8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x151ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x151ffc: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x151FFCu;
    {
        const bool branch_taken_0x151ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ffc) {
            ctx->pc = 0x151F60u;
            return;
        }
    }
    ctx->pc = 0x152004u;
}
