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

// Function: entry_00134618
// Address: 0x134618 - 0x13461c
void entry_00134618_0x134618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134618_0x134618");
#endif

    ctx->pc = 0x134618u;

    // 0x134618: 0xa2400092  sb          $zero, 0x92($s2)
    ctx->pc = 0x134618u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 146), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x13461cu;
}
