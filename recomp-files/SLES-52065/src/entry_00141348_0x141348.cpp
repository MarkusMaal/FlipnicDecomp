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

// Function: entry_00141348
// Address: 0x141348 - 0x141360
void entry_00141348_0x141348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141348_0x141348");
#endif

    ctx->pc = 0x141348u;

    // 0x141348: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x141348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14134c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x14134cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x141350: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x141350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x141354: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x141354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x141358: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x141358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14135c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x14135cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x141360u;
}
