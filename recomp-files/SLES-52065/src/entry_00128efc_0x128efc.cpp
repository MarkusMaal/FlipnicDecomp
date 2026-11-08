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

// Function: entry_00128efc
// Address: 0x128efc - 0x128f0c
void entry_00128efc_0x128efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128efc_0x128efc");
#endif

    ctx->pc = 0x128efcu;

    // 0x128efc: 0xae910110  sw          $s1, 0x110($s4)
    ctx->pc = 0x128efcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 17));
    // 0x128f00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x128f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128f04: 0xae910114  sw          $s1, 0x114($s4)
    ctx->pc = 0x128f04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 17));
    // 0x128f08: 0xae8300a0  sw          $v1, 0xA0($s4)
    ctx->pc = 0x128f08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 3));
    ctx->pc = 0x128f0cu;
}
