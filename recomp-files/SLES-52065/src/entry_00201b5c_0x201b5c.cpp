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

// Function: entry_00201b5c
// Address: 0x201b5c - 0x201b84
void entry_00201b5c_0x201b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201b5c_0x201b5c");
#endif

    ctx->pc = 0x201b5cu;

    // 0x201b5c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x201b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x201b60: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x201b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201b64: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x201b64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201b68: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x201b68u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201b6c: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x201b6cu;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x201b70: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x201b70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x201b74: 0x5120fff0  beql        $t1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x201B74u;
    {
        const bool branch_taken_0x201b74 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b74) {
            ctx->pc = 0x201B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201B74u;
            // 0x201b78: 0x70021ce9  pnor        $v1, $zero, $v0 (Delay Slot)
            SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201B38u;
            return;
        }
    }
    ctx->pc = 0x201B7Cu;
    // 0x201b7c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x201B7Cu;
    {
        const bool branch_taken_0x201b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B7Cu;
        // 0x201b80: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b7c) {
            ctx->pc = 0x201BF0u;
            return;
        }
    }
    ctx->pc = 0x201B84u;
}
