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

// Function: entry_001ed078
// Address: 0x1ed078 - 0x1ed098
void entry_001ed078_0x1ed078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed078_0x1ed078");
#endif

    ctx->pc = 0x1ed078u;

    // 0x1ed078: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1ed078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1ed07c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ed07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed080: 0x24844280  addiu       $a0, $a0, 0x4280
    ctx->pc = 0x1ed080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17024));
    // 0x1ed084: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ed084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed088: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ed088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed090: 0x807b5a2  j           func_1ED688
    ctx->pc = 0x1ED090u;
    ctx->pc = 0x1ED094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED090u;
    // 0x1ed094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    FUN_001ed688_0x1ed688(rdram, ctx, runtime); return;
    ctx->pc = 0x1ED098u;
}
