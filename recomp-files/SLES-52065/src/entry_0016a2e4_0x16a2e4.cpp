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

// Function: entry_0016a2e4
// Address: 0x16a2e4 - 0x16a2f0
void entry_0016a2e4_0x16a2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a2e4_0x16a2e4");
#endif

    ctx->pc = 0x16a2e4u;

    // 0x16a2e4: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x16a2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x16a2e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16a2ec: 0xa6220220  sh          $v0, 0x220($s1)
    ctx->pc = 0x16a2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x16a2f0u;
}
