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

// Function: entry_0013dba8
// Address: 0x13dba8 - 0x13dbb0
void entry_0013dba8_0x13dba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dba8_0x13dba8");
#endif

    ctx->pc = 0x13dba8u;

    // 0x13dba8: 0xe49400bc  swc1        $f20, 0xBC($a0)
    ctx->pc = 0x13dba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
    // 0x13dbac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13dbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x13dbb0u;
}
