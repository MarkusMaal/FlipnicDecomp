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

// Function: entry_00100ae0
// Address: 0x100ae0 - 0x100af8
void entry_00100ae0_0x100ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100ae0_0x100ae0");
#endif

    ctx->pc = 0x100ae0u;

    // 0x100ae0: 0x92430078  lbu         $v1, 0x78($s2)
    ctx->pc = 0x100ae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x100ae4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x100AE4u;
    {
        const bool branch_taken_0x100ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x100ae4) {
            ctx->pc = 0x100AF8u;
            return;
        }
    }
    ctx->pc = 0x100AECu;
    // 0x100aec: 0x92430079  lbu         $v1, 0x79($s2)
    ctx->pc = 0x100aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 121)));
    // 0x100af0: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x100AF0u;
    {
        const bool branch_taken_0x100af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100af0) {
            ctx->pc = 0x100C3Cu;
            return;
        }
    }
    ctx->pc = 0x100AF8u;
}
