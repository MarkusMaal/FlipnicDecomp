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

// Function: entry_0017a914
// Address: 0x17a914 - 0x17a928
void entry_0017a914_0x17a914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a914_0x17a914");
#endif

    ctx->pc = 0x17a914u;

    // 0x17a914: 0x0  nop
    ctx->pc = 0x17a914u;
    // NOP
    // 0x17a918: 0x8f838624  lw          $v1, -0x79DC($gp)
    ctx->pc = 0x17a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936100)));
    // 0x17a91c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x17a91cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17a920: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x17A920u;
    {
        const bool branch_taken_0x17a920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a920) {
            ctx->pc = 0x17A860u;
            return;
        }
    }
    ctx->pc = 0x17A928u;
}
