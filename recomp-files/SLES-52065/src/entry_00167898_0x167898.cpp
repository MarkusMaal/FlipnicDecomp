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

// Function: entry_00167898
// Address: 0x167898 - 0x1678a4
void entry_00167898_0x167898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167898_0x167898");
#endif

    ctx->pc = 0x167898u;

    // 0x167898: 0xa6220228  sh          $v0, 0x228($s1)
    ctx->pc = 0x167898u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 2));
    // 0x16789c: 0x86220222  lh          $v0, 0x222($s1)
    ctx->pc = 0x16789cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x1678a0: 0xa6220220  sh          $v0, 0x220($s1)
    ctx->pc = 0x1678a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1678a4u;
}
