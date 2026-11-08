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

// Function: entry_00138fc4
// Address: 0x138fc4 - 0x138fd8
void entry_00138fc4_0x138fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138fc4_0x138fc4");
#endif

    ctx->pc = 0x138fc4u;

    // 0x138fc4: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x138fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x138fc8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x138fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x138fcc: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x138fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x138fd0: 0x10830001  beq         $a0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x138FD0u;
    {
        const bool branch_taken_0x138fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x138fd0) {
            ctx->pc = 0x138FD8u;
            return;
        }
    }
    ctx->pc = 0x138FD8u;
}
