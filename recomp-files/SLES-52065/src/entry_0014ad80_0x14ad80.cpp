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

// Function: entry_0014ad80
// Address: 0x14ad80 - 0x14ad88
void entry_0014ad80_0x14ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ad80_0x14ad80");
#endif

    ctx->pc = 0x14ad80u;

    // 0x14ad80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14ad80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14ad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x14ad88u;
}
