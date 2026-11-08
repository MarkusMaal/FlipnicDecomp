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

// Function: entry_0012bc98
// Address: 0x12bc98 - 0x12bca8
void entry_0012bc98_0x12bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bc98_0x12bc98");
#endif

    ctx->pc = 0x12bc98u;

    // 0x12bc98: 0xea182a  slt         $v1, $a3, $t2
    ctx->pc = 0x12bc98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x12bc9c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x12BC9Cu;
    {
        const bool branch_taken_0x12bc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bc9c) {
            ctx->pc = 0x12BC34u;
            return;
        }
    }
    ctx->pc = 0x12BCA4u;
    // 0x12bca4: 0xe4860010  swc1        $f6, 0x10($a0)
    ctx->pc = 0x12bca4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    ctx->pc = 0x12bca8u;
}
