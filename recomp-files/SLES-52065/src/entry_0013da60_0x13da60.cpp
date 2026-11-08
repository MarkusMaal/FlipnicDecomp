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

// Function: entry_0013da60
// Address: 0x13da60 - 0x13da6c
void entry_0013da60_0x13da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013da60_0x13da60");
#endif

    ctx->pc = 0x13da60u;

    // 0x13da60: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x13da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13da64: 0x0  nop
    ctx->pc = 0x13da64u;
    // NOP
    // 0x13da68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13da68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13da6cu;
}
