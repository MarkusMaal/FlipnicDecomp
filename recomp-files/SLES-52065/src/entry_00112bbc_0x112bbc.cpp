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

// Function: entry_00112bbc
// Address: 0x112bbc - 0x112bd4
void entry_00112bbc_0x112bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112bbc_0x112bbc");
#endif

    ctx->pc = 0x112bbcu;

    // 0x112bbc: 0x0  nop
    ctx->pc = 0x112bbcu;
    // NOP
    // 0x112bc0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112bc4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x112bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112bc8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x112BC8u;
    {
        const bool branch_taken_0x112bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112bc8) {
            ctx->pc = 0x112B94u;
            return;
        }
    }
    ctx->pc = 0x112BD0u;
    // 0x112bd0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x112bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x112bd4u;
}
