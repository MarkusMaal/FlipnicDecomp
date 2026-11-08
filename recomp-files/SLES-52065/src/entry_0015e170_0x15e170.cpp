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

// Function: entry_0015e170
// Address: 0x15e170 - 0x15e19c
void entry_0015e170_0x15e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e170_0x15e170");
#endif

    ctx->pc = 0x15e170u;

    // 0x15e170: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x15e170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x15e174: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x15e174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x15e178: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x15e178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x15e17c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x15e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15e180: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e184: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x15e184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x15e188: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x15e188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15e18c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x15e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15e190: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x15e190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15e194: 0x1460fef9  bnez        $v1, . + 4 + (-0x107 << 2)
    ctx->pc = 0x15E194u;
    {
        const bool branch_taken_0x15e194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e194) {
            ctx->pc = 0x15DD7Cu;
            return;
        }
    }
    ctx->pc = 0x15E19Cu;
}
