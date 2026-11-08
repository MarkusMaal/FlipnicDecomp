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

// Function: entry_0017ec8c
// Address: 0x17ec8c - 0x17ec98
void entry_0017ec8c_0x17ec8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ec8c_0x17ec8c");
#endif

    ctx->pc = 0x17ec8cu;

    // 0x17ec8c: 0x0  nop
    ctx->pc = 0x17ec8cu;
    // NOP
    // 0x17ec90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ec90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17ec94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x17ec98u;
}
