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

// Function: entry_00177e9c
// Address: 0x177e9c - 0x177ebc
void entry_00177e9c_0x177e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177e9c_0x177e9c");
#endif

    ctx->pc = 0x177e9cu;

    // 0x177e9c: 0x0  nop
    ctx->pc = 0x177e9cu;
    // NOP
    // 0x177ea0: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x177ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x177ea4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x177ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x177ea8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x177ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x177eac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x177eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177eb0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x177EB0u;
    {
        const bool branch_taken_0x177eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177eb0) {
            ctx->pc = 0x177DE8u;
            return;
        }
    }
    ctx->pc = 0x177EB8u;
    // 0x177eb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x177eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x177ebcu;
}
