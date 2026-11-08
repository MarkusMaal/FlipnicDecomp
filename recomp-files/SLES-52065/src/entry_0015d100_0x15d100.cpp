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

// Function: entry_0015d100
// Address: 0x15d100 - 0x15d10c
void entry_0015d100_0x15d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d100_0x15d100");
#endif

    ctx->pc = 0x15d100u;

    // 0x15d100: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x15d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15d104: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15d104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15d108: 0xac602cd8  sw          $zero, 0x2CD8($v1)
    ctx->pc = 0x15d108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 0));
    ctx->pc = 0x15d10cu;
}
