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

// Function: entry_002060dc
// Address: 0x2060dc - 0x2060e4
void entry_002060dc_0x2060dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002060dc_0x2060dc");
#endif

    ctx->pc = 0x2060dcu;

    // 0x2060dc: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x2060dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2060e0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2060e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2060e4u;
}
