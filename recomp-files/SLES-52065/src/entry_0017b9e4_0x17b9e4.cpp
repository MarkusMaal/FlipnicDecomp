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

// Function: entry_0017b9e4
// Address: 0x17b9e4 - 0x17b9ec
void entry_0017b9e4_0x17b9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b9e4_0x17b9e4");
#endif

    ctx->pc = 0x17b9e4u;

    // 0x17b9e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b9e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x17b9ecu;
}
