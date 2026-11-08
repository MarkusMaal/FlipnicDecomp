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

// Function: entry_00140570
// Address: 0x140570 - 0x140588
void entry_00140570_0x140570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140570_0x140570");
#endif

    ctx->pc = 0x140570u;

label_140570:
    // 0x140570: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x140570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x140574: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x140574u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x140578: 0x0  nop
    ctx->pc = 0x140578u;
    // NOP
    // 0x14057c: 0x0  nop
    ctx->pc = 0x14057cu;
    // NOP
    // 0x140580: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x140580u;
    {
        const bool branch_taken_0x140580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140580) {
            ctx->pc = 0x140570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140570;
        }
    }
    ctx->pc = 0x140588u;
}
