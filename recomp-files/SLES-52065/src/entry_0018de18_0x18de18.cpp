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

// Function: entry_0018de18
// Address: 0x18de18 - 0x18de1c
void entry_0018de18_0x18de18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018de18_0x18de18");
#endif

    ctx->pc = 0x18de18u;

    // 0x18de18: 0xc6210504  lwc1        $f1, 0x504($s1)
    ctx->pc = 0x18de18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x18de1cu;
}
