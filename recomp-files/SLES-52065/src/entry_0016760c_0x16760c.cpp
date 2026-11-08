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

// Function: entry_0016760c
// Address: 0x16760c - 0x16761c
void entry_0016760c_0x16760c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016760c_0x16760c");
#endif

    ctx->pc = 0x16760cu;

    // 0x16760c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167610: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x167610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
    // 0x167614: 0x86220222  lh          $v0, 0x222($s1)
    ctx->pc = 0x167614u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x167618: 0xa6220220  sh          $v0, 0x220($s1)
    ctx->pc = 0x167618u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x16761cu;
}
