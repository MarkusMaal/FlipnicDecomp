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

// Function: entry_0018fd74
// Address: 0x18fd74 - 0x18fd80
void entry_0018fd74_0x18fd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fd74_0x18fd74");
#endif

    ctx->pc = 0x18fd74u;

    // 0x18fd74: 0x0  nop
    ctx->pc = 0x18fd74u;
    // NOP
    // 0x18fd78: 0xac850230  sw          $a1, 0x230($a0)
    ctx->pc = 0x18fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 5));
    // 0x18fd7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fd7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18fd80u;
}
